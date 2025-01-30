#include <iostream>
#include <vector>
#include <limits>

using namespace std;

struct Pt{
   int x, y;
};
using Pixel_value = unsigned short;
using Image = vector<vector<Pixel_value>>;
using Kernel =vector<Pt>;

Image make_image(int largeur, int hauteur,Pixel_value color){
   return Image(hauteur,vector<Pixel_value>(largeur,color));
}
Image dilate(Image const& image,Kernel const& kernel,Pixel_value default_value = numeric_limits<Pixel_value>::lowest()){
   Image result(image);
   for(size_t y = 0; y < image.size(); ++y) {
         for(size_t x = 0; x < image[y].size(); ++x) {
            result[y][x] = numeric_limits<Pixel_value>::lowest();
            bool pas_de_voisin = true;
            for(size_t k = 0; k < kernel.size(); ++k) {
               size_t nx = x + kernel[k].x;
               size_t ny = y + kernel[k].y;
               if( nx < image[y].size() and ny < image.size()) {
                  result[y][x] = max(result[y][x], image[ny][nx]);
                  pas_de_voisin = false;
               }
            }
            if (pas_de_voisin)
               result[y][x] = default_value;
         }
   }
   return result;
}



int main() {
   Pixel_value black = 0;
   Image image = make_image(1920,1080,black);

   for(size_t i = 0; i < 20; ++i)
      image[200 + i][300 - i] = 65535; // dessine une ligne oblique blanche
      
   Kernel kernel { Pt{0,0}, Pt{-1,0}, Pt{1,0}, Pt{0,1}, Pt{0,-1}};
   Image dilated = dilate(image, kernel, black);
}