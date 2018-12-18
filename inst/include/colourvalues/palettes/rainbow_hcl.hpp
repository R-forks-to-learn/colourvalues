#ifndef R_COLOURVALUES_RAINBOW_HCL_H
#define R_COLOURVALUES_RAINBOW_HCL_H

#include <Rcpp.h>
using namespace Rcpp;

namespace colourvalues {
namespace palette {

  const Rcpp::NumericVector rainbow_hcl_red = {
    0.894117647058824,0.894117647058824,0.890196078431372,0.890196078431372,
    0.890196078431372,0.890196078431372,0.886274509803922,0.886274509803922,
    0.886274509803922,0.882352941176471,0.882352941176471,0.882352941176471,
    0.87843137254902,0.87843137254902,0.874509803921569,0.874509803921569,
    0.870588235294118,0.866666666666667,0.866666666666667,0.862745098039216,
    0.862745098039216,0.858823529411765,0.854901960784314,0.854901960784314,
    0.850980392156863,0.847058823529412,0.843137254901961,0.83921568627451,
    0.83921568627451,0.835294117647059,0.831372549019608,0.827450980392157,
    0.823529411764706,0.819607843137255,0.815686274509804,0.811764705882353,
    0.807843137254902,0.803921568627451,0.8,0.796078431372549,
    0.792156862745098,0.788235294117647,0.784313725490196,0.780392156862745,
    0.776470588235294,0.768627450980392,0.764705882352941,0.76078431372549,
    0.756862745098039,0.752941176470588,0.745098039215686,0.741176470588235,
    0.737254901960784,0.729411764705882,0.725490196078431,0.72156862745098,
    0.713725490196078,0.709803921568627,0.705882352941177,0.698039215686274,
    0.694117647058824,0.686274509803922,0.682352941176471,0.674509803921569,
    0.670588235294118,0.662745098039216,0.658823529411765,0.650980392156863,
    0.643137254901961,0.63921568627451,0.631372549019608,0.627450980392157,
    0.619607843137255,0.611764705882353,0.607843137254902,0.6,
    0.592156862745098,0.584313725490196,0.580392156862745,0.572549019607843,
    0.564705882352941,0.556862745098039,0.549019607843137,0.545098039215686,
    0.537254901960784,0.529411764705882,0.52156862745098,0.513725490196078,
    0.505882352941176,0.498039215686275,0.490196078431373,0.482352941176471,
    0.474509803921569,0.470588235294118,0.462745098039216,0.454901960784314,
    0.447058823529412,0.43921568627451,0.431372549019608,0.419607843137255,
    0.411764705882353,0.403921568627451,0.396078431372549,0.388235294117647,
    0.380392156862745,0.372549019607843,0.364705882352941,0.356862745098039,
    0.349019607843137,0.341176470588235,0.333333333333333,0.325490196078431,
    0.317647058823529,0.309803921568627,0.301960784313725,0.294117647058824,
    0.290196078431373,0.282352941176471,0.274509803921569,0.266666666666667,
    0.262745098039216,0.254901960784314,0.250980392156863,0.243137254901961,
    0.23921568627451,0.235294117647059,0.231372549019608,0.227450980392157,
    0.223529411764706,0.219607843137255,0.219607843137255,0.219607843137255,
    0.215686274509804,0.215686274509804,0.219607843137255,0.219607843137255,
    0.219607843137255,0.223529411764706,0.227450980392157,0.231372549019608,
    0.235294117647059,0.23921568627451,0.247058823529412,0.250980392156863,
    0.258823529411765,0.262745098039216,0.270588235294118,0.27843137254902,
    0.286274509803922,0.294117647058824,0.301960784313725,0.309803921568627,
    0.317647058823529,0.325490196078431,0.337254901960784,0.345098039215686,
    0.352941176470588,0.364705882352941,0.372549019607843,0.380392156862745,
    0.392156862745098,0.4,0.407843137254902,0.419607843137255,
    0.427450980392157,0.43921568627451,0.447058823529412,0.454901960784314,
    0.466666666666667,0.474509803921569,0.486274509803922,0.494117647058824,
    0.501960784313725,0.513725490196078,0.52156862745098,0.529411764705882,
    0.541176470588235,0.549019607843137,0.556862745098039,0.564705882352941,
    0.576470588235294,0.584313725490196,0.592156862745098,0.6,
    0.607843137254902,0.615686274509804,0.623529411764706,0.635294117647059,
    0.643137254901961,0.650980392156863,0.658823529411765,0.666666666666667,
    0.674509803921569,0.67843137254902,0.686274509803922,0.694117647058824,
    0.701960784313725,0.709803921568627,0.717647058823529,0.72156862745098,
    0.729411764705882,0.737254901960784,0.741176470588235,0.749019607843137,
    0.752941176470588,0.76078431372549,0.764705882352941,0.772549019607843,
    0.776470588235294,0.784313725490196,0.788235294117647,0.792156862745098,
    0.8,0.803921568627451,0.807843137254902,0.811764705882353,
    0.819607843137255,0.823529411764706,0.827450980392157,0.831372549019608,
    0.835294117647059,0.83921568627451,0.843137254901961,0.847058823529412,
    0.850980392156863,0.854901960784314,0.854901960784314,0.858823529411765,
    0.862745098039216,0.866666666666667,0.866666666666667,0.870588235294118,
    0.874509803921569,0.874509803921569,0.87843137254902,0.87843137254902,
    0.882352941176471,0.882352941176471,0.886274509803922,0.886274509803922,
    0.886274509803922,0.890196078431372,0.890196078431372,0.890196078431372,
    0.890196078431372,0.894117647058824,0.894117647058824,0.894117647058824,
    0.894117647058824,0.894117647058824,0.894117647058824,0.894117647058824,
    0.894117647058824,0.894117647058824,0.894117647058824,0.894117647058824
  };

  const Rcpp::NumericVector rainbow_hcl_green = {
    0.584313725490196,0.588235294117647,0.588235294117647,0.588235294117647,
    0.588235294117647,0.592156862745098,0.592156862745098,0.592156862745098,
    0.596078431372549,0.596078431372549,0.596078431372549,0.6,
    0.6,0.6,0.603921568627451,0.603921568627451,
    0.607843137254902,0.607843137254902,0.607843137254902,0.611764705882353,
    0.611764705882353,0.615686274509804,0.615686274509804,0.615686274509804,
    0.619607843137255,0.619607843137255,0.623529411764706,0.623529411764706,
    0.627450980392157,0.627450980392157,0.631372549019608,0.631372549019608,
    0.635294117647059,0.635294117647059,0.63921568627451,0.63921568627451,
    0.63921568627451,0.643137254901961,0.643137254901961,0.647058823529412,
    0.647058823529412,0.650980392156863,0.650980392156863,0.654901960784314,
    0.654901960784314,0.658823529411765,0.658823529411765,0.662745098039216,
    0.662745098039216,0.666666666666667,0.666666666666667,0.670588235294118,
    0.670588235294118,0.670588235294118,0.674509803921569,0.674509803921569,
    0.67843137254902,0.67843137254902,0.682352941176471,0.682352941176471,
    0.686274509803922,0.686274509803922,0.686274509803922,0.690196078431373,
    0.690196078431373,0.694117647058824,0.694117647058824,0.698039215686274,
    0.698039215686274,0.698039215686274,0.701960784313725,0.701960784313725,
    0.705882352941177,0.705882352941177,0.705882352941177,0.709803921568627,
    0.709803921568627,0.709803921568627,0.713725490196078,0.713725490196078,
    0.713725490196078,0.717647058823529,0.717647058823529,0.717647058823529,
    0.72156862745098,0.72156862745098,0.72156862745098,0.725490196078431,
    0.725490196078431,0.725490196078431,0.729411764705882,0.729411764705882,
    0.729411764705882,0.729411764705882,0.733333333333333,0.733333333333333,
    0.733333333333333,0.733333333333333,0.737254901960784,0.737254901960784,
    0.737254901960784,0.737254901960784,0.737254901960784,0.737254901960784,
    0.741176470588235,0.741176470588235,0.741176470588235,0.741176470588235,
    0.741176470588235,0.741176470588235,0.741176470588235,0.745098039215686,
    0.745098039215686,0.745098039215686,0.745098039215686,0.745098039215686,
    0.745098039215686,0.745098039215686,0.745098039215686,0.745098039215686,
    0.745098039215686,0.745098039215686,0.745098039215686,0.745098039215686,
    0.745098039215686,0.745098039215686,0.745098039215686,0.745098039215686,
    0.745098039215686,0.745098039215686,0.745098039215686,0.741176470588235,
    0.741176470588235,0.741176470588235,0.741176470588235,0.741176470588235,
    0.741176470588235,0.741176470588235,0.737254901960784,0.737254901960784,
    0.737254901960784,0.737254901960784,0.737254901960784,0.733333333333333,
    0.733333333333333,0.733333333333333,0.729411764705882,0.729411764705882,
    0.729411764705882,0.729411764705882,0.725490196078431,0.725490196078431,
    0.725490196078431,0.72156862745098,0.72156862745098,0.717647058823529,
    0.717647058823529,0.717647058823529,0.713725490196078,0.713725490196078,
    0.709803921568627,0.709803921568627,0.709803921568627,0.705882352941177,
    0.705882352941177,0.701960784313725,0.701960784313725,0.698039215686274,
    0.698039215686274,0.694117647058824,0.694117647058824,0.690196078431373,
    0.690196078431373,0.686274509803922,0.682352941176471,0.682352941176471,
    0.67843137254902,0.67843137254902,0.674509803921569,0.674509803921569,
    0.670588235294118,0.666666666666667,0.666666666666667,0.662745098039216,
    0.662745098039216,0.658823529411765,0.658823529411765,0.654901960784314,
    0.650980392156863,0.650980392156863,0.647058823529412,0.647058823529412,
    0.643137254901961,0.63921568627451,0.63921568627451,0.635294117647059,
    0.635294117647059,0.631372549019608,0.631372549019608,0.627450980392157,
    0.623529411764706,0.623529411764706,0.619607843137255,0.619607843137255,
    0.615686274509804,0.615686274509804,0.611764705882353,0.611764705882353,
    0.607843137254902,0.607843137254902,0.603921568627451,0.603921568627451,
    0.6,0.6,0.6,0.596078431372549,
    0.596078431372549,0.592156862745098,0.592156862745098,0.592156862745098,
    0.588235294117647,0.588235294117647,0.588235294117647,0.584313725490196,
    0.584313725490196,0.584313725490196,0.584313725490196,0.580392156862745,
    0.580392156862745,0.580392156862745,0.580392156862745,0.580392156862745,
    0.580392156862745,0.576470588235294,0.576470588235294,0.576470588235294,
    0.576470588235294,0.576470588235294,0.576470588235294,0.576470588235294,
    0.576470588235294,0.576470588235294,0.576470588235294,0.576470588235294,
    0.576470588235294,0.576470588235294,0.576470588235294,0.580392156862745,
    0.580392156862745,0.580392156862745,0.580392156862745,0.580392156862745,
    0.580392156862745,0.584313725490196,0.584313725490196,0.584313725490196
  };

  const Rcpp::NumericVector rainbow_hcl_blue = {
    0.647058823529412,0.63921568627451,0.635294117647059,0.627450980392157,
    0.623529411764706,0.615686274509804,0.611764705882353,0.603921568627451,
    0.6,0.592156862745098,0.588235294117647,0.580392156862745,
    0.576470588235294,0.568627450980392,0.564705882352941,0.556862745098039,
    0.552941176470588,0.545098039215686,0.541176470588235,0.533333333333333,
    0.529411764705882,0.525490196078431,0.517647058823529,0.513725490196078,
    0.505882352941176,0.501960784313725,0.498039215686275,0.490196078431373,
    0.486274509803922,0.482352941176471,0.474509803921569,0.470588235294118,
    0.466666666666667,0.462745098039216,0.458823529411765,0.450980392156863,
    0.447058823529412,0.443137254901961,0.43921568627451,0.435294117647059,
    0.431372549019608,0.427450980392157,0.423529411764706,0.419607843137255,
    0.419607843137255,0.415686274509804,0.411764705882353,0.407843137254902,
    0.407843137254902,0.403921568627451,0.403921568627451,0.4,
    0.4,0.396078431372549,0.396078431372549,0.396078431372549,
    0.396078431372549,0.392156862745098,0.392156862745098,0.392156862745098,
    0.392156862745098,0.392156862745098,0.392156862745098,0.396078431372549,
    0.396078431372549,0.396078431372549,0.4,0.4,
    0.4,0.403921568627451,0.403921568627451,0.407843137254902,
    0.411764705882353,0.411764705882353,0.415686274509804,0.419607843137255,
    0.423529411764706,0.423529411764706,0.427450980392157,0.431372549019608,
    0.435294117647059,0.43921568627451,0.443137254901961,0.447058823529412,
    0.454901960784314,0.458823529411765,0.462745098039216,0.466666666666667,
    0.470588235294118,0.474509803921569,0.482352941176471,0.486274509803922,
    0.490196078431373,0.498039215686275,0.501960784313725,0.505882352941176,
    0.513725490196078,0.517647058823529,0.52156862745098,0.529411764705882,
    0.533333333333333,0.541176470588235,0.545098039215686,0.552941176470588,
    0.556862745098039,0.56078431372549,0.568627450980392,0.572549019607843,
    0.580392156862745,0.584313725490196,0.592156862745098,0.596078431372549,
    0.603921568627451,0.607843137254902,0.615686274509804,0.619607843137255,
    0.627450980392157,0.631372549019608,0.63921568627451,0.643137254901961,
    0.650980392156863,0.654901960784314,0.658823529411765,0.666666666666667,
    0.670588235294118,0.67843137254902,0.682352941176471,0.690196078431373,
    0.694117647058824,0.698039215686274,0.705882352941177,0.709803921568627,
    0.713725490196078,0.72156862745098,0.725490196078431,0.729411764705882,
    0.737254901960784,0.741176470588235,0.745098039215686,0.752941176470588,
    0.756862745098039,0.76078431372549,0.764705882352941,0.772549019607843,
    0.776470588235294,0.780392156862745,0.784313725490196,0.788235294117647,
    0.792156862745098,0.796078431372549,0.8,0.803921568627451,
    0.807843137254902,0.811764705882353,0.815686274509804,0.819607843137255,
    0.823529411764706,0.827450980392157,0.831372549019608,0.835294117647059,
    0.83921568627451,0.843137254901961,0.843137254901961,0.847058823529412,
    0.850980392156863,0.854901960784314,0.854901960784314,0.858823529411765,
    0.862745098039216,0.862745098039216,0.866666666666667,0.866666666666667,
    0.870588235294118,0.870588235294118,0.874509803921569,0.874509803921569,
    0.87843137254902,0.87843137254902,0.87843137254902,0.882352941176471,
    0.882352941176471,0.882352941176471,0.882352941176471,0.886274509803922,
    0.886274509803922,0.886274509803922,0.886274509803922,0.886274509803922,
    0.886274509803922,0.886274509803922,0.886274509803922,0.886274509803922,
    0.886274509803922,0.886274509803922,0.886274509803922,0.882352941176471,
    0.882352941176471,0.882352941176471,0.882352941176471,0.87843137254902,
    0.87843137254902,0.874509803921569,0.874509803921569,0.874509803921569,
    0.870588235294118,0.870588235294118,0.866666666666667,0.866666666666667,
    0.862745098039216,0.858823529411765,0.858823529411765,0.854901960784314,
    0.850980392156863,0.850980392156863,0.847058823529412,0.843137254901961,
    0.83921568627451,0.835294117647059,0.831372549019608,0.831372549019608,
    0.827450980392157,0.823529411764706,0.819607843137255,0.815686274509804,
    0.811764705882353,0.807843137254902,0.803921568627451,0.8,
    0.792156862745098,0.788235294117647,0.784313725490196,0.780392156862745,
    0.776470588235294,0.772549019607843,0.764705882352941,0.76078431372549,
    0.756862745098039,0.752941176470588,0.745098039215686,0.741176470588235,
    0.737254901960784,0.729411764705882,0.725490196078431,0.72156862745098,
    0.713725490196078,0.709803921568627,0.701960784313725,0.698039215686274,
    0.694117647058824,0.686274509803922,0.682352941176471,0.674509803921569,
    0.670588235294118,0.662745098039216,0.658823529411765,0.650980392156863
  };

const Rcpp::List rainbow_hcl = Rcpp::List::create(
  _["r"] = rainbow_hcl_red,
  _["g"] = rainbow_hcl_green,
  _["b"] = rainbow_hcl_blue
);
} // namespace palette
} // namepsace colourvalues

#endif
