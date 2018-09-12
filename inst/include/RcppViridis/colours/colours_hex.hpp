#ifndef RCPP_VIRIDIS_HEADERS_COLOURS_HEX_H
#define RCPP_VIRIDIS_HEADERS_COLOURS_HEX_H

#include <Rcpp.h>
#include "RcppViridis/colours.hpp"
#include "RcppViridis/utils/utils.hpp"
#include "RcppViridis/alpha/alpha.hpp"

namespace rcppviridis {
namespace colours_hex {

  // if palette is a string; it's using in-built palettes; nothing to do
  // if palette is function or vectors, force rescaling

  inline Rcpp::StringVector colour_values_to_hex(
      Rcpp::NumericVector& x,
      Rcpp::NumericVector& red,
      Rcpp::NumericVector& green,
      Rcpp::NumericVector& blue,
      Rcpp::NumericVector& alpha,
      int& alpha_type,
      std::string& na_colour) {

    int n = x.size();
    double colours = red.size();

    //resolve_na_colour( na_colour );
    na_colour = na_colour.length() == 9 ? na_colour : na_colour + "FF";

    rcppviridis::scale::rescale(x);
    Rcpp::StringVector hex_strings(n);
    double step = 1 / (colours - 1);  // TODO(test)

    // Rcpp::Rcout << "colours: " << colours << std::endl;
    // Rcpp::Rcout << "step: " << step << std::endl;
    // Rcpp::Rcout << "red: " << red << std::endl;
    // Rcpp::Rcout << "green: " << green << std::endl;
    // Rcpp::Rcout << "blue: " << blue << std::endl;
    // Rcpp::Rcout << "alpha: " << alpha << std::endl;

    // cublic_b_spoine :: vec.start, vec.end, start.time, step
    boost::math::cubic_b_spline< double > spline_red(   red.begin(),   red.end(),   0, step );
    boost::math::cubic_b_spline< double > spline_green( green.begin(), green.end(), 0, step );
    boost::math::cubic_b_spline< double > spline_blue(  blue.begin(),  blue.end(),  0, step );
    boost::math::cubic_b_spline< double > spline_alpha(  alpha.begin(),  alpha.end(),  0, step );

    double this_x;
    int i, r, g, b, a;
    std::string hex_str;

    for( i = 0; i < n; i++ ) {

      //this_x = x[i] * 255;
      this_x = x[i];

      if ( R_IsNA( this_x) || R_IsNaN( this_x ) ) {
        hex_strings[i] = na_colour;
      } else {
        r = round( spline_red( this_x ) * 255 ) ;
        g = round( spline_green( this_x ) * 255 );
        b = round( spline_blue( this_x ) * 255 );

        Rcpp::Rcout << "splined r : " << r << std::endl;
        Rcpp::Rcout << "splined g : " << g << std::endl;
        Rcpp::Rcout << "splined b : " << b << std::endl;

        if ( alpha_type == ALPHA_PALETTE ) {
          a = round( spline_alpha( this_x ) * 255 );
        } else if (alpha_type == ALPHA_VECTOR ){
          a = alpha[i];
        } else {
          a = alpha[0];  // should be length 5, but all the same
        }
        hex_strings[i] = rcppviridis::convert::convert_rgb_to_hex(r, g, b, a);
      }
    }
    return hex_strings;
  }

  // in this function the colour vectors will already be scaled [0,1]
  inline Rcpp::StringVector colour_value_hex(
    Rcpp::NumericVector x,
    Rcpp::NumericMatrix palette,
    std::string na_colour ) {

    int x_size = x.size();
    int alpha_type = rcppviridis::alpha::make_alpha_type( 0, x_size, palette.ncol() );

    Rcpp::NumericVector red(256);
    Rcpp::NumericVector green(256);
    Rcpp::NumericVector blue(256);
    Rcpp::NumericVector alpha(x.size(), 255.0);


    rcppviridis::palette_utils::resolve_palette( palette, red, green, blue, alpha );

    Rcpp::NumericVector alpha_full = rcppviridis::alpha::validate_alpha( alpha, alpha_type, x_size );

    return colour_values_to_hex( x, red, green, blue, alpha_full, alpha_type, na_colour );
  }

  inline Rcpp::StringVector colour_value_hex(
      Rcpp::NumericVector x,
      std::string palette,
      std::string na_colour,
      Rcpp::NumericVector alpha) {

    // TODO(this throws an error on Travis)
    // if(!is_hex_colour(na_colour)) {
    //   Rcpp::stop("invalid NA Colour");
    // }
    int x_size = x.size();
    int alpha_type = rcppviridis::alpha::make_alpha_type( alpha.size(), x_size, 0 );

    Rcpp::NumericVector alpha_full = rcppviridis::alpha::validate_alpha( alpha, alpha_type, x_size );
    //Rcpp::Rcout << "alpha_full: " << alpha_full << std::endl;

    Rcpp::NumericVector red(256);
    Rcpp::NumericVector green(256);
    Rcpp::NumericVector blue(256);

    rcppviridis::palette_utils::resolve_palette( palette, red, green, blue );

    return colour_values_to_hex(x, red, green, blue, alpha_full, alpha_type, na_colour);
  }

  Rcpp::StringVector colour_value_hex (
      Rcpp::StringVector x,
      Rcpp::NumericMatrix palette,
      std::string na_colour ) {

    int alpha_type = rcppviridis::alpha::make_alpha_type( 0, x.size(), palette.ncol() );

    Rcpp::NumericVector red(256);
    Rcpp::NumericVector green(256);
    Rcpp::NumericVector blue(256);
    Rcpp::NumericVector alpha(x.size(), 255.0);


    rcppviridis::palette_utils::resolve_palette( palette, red, green, blue, alpha );
    Rcpp::NumericVector out_nv = rcppviridis::utils::resolve_string_vector( x );

    return colour_values_to_hex( out_nv, red, green, blue, alpha, alpha_type, na_colour );
  }

  inline Rcpp::StringVector colour_value_hex(
      Rcpp::StringVector x,
      std::string palette,
      std::string na_colour,
      Rcpp::NumericVector alpha ) {

    // TODO(this throws an error on Travis)
    // if(!is_hex_colour(na_colour)) {
    //   Rcpp::stop("invalid NA Colour");
    // }
    int x_size = x.size();
    int alpha_type = rcppviridis::alpha::make_alpha_type( alpha.size(), x_size, 0 );

    Rcpp::NumericVector alpha_full = rcppviridis::alpha::validate_alpha( alpha, alpha_type, x_size );

    Rcpp::NumericVector red(256);
    Rcpp::NumericVector green(256);
    Rcpp::NumericVector blue(256);

    rcppviridis::palette_utils::resolve_palette( palette, red, green, blue );
    Rcpp::NumericVector out_nv = rcppviridis::utils::resolve_string_vector( x );

    return colour_values_to_hex( out_nv, red, green, blue, alpha_full, alpha_type, na_colour );
  }

} // namespace colours
} // namespace rcppviridis

#endif

