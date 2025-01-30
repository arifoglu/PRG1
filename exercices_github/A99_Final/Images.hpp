#ifndef IMAGES_HPP
#define IMAGES_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

struct Color{
   uint8_t R, G, B; 
};
struct Coord{
   size_t x, y;
   static Coord origin;
};

class Image{
   private:
      size_t h, w;
      vector<Color> data;
      size_t idx(const Coord& p)const{
         if(p.x >= w || p.y >= h)throw out_of_range("Image");
         return p.x + w * p.y;
      }
   public:
      Image();
      Image(size_t w, size_t h,Color c): w(w), h(h), data(w*h,c){}
      size_t getw()const{return w;}
      size_t geth()const{return h;}
      Color  operator[](const Coord& p)const {return data[idx(p)];};
      Color& operator[](const Coord& p)      {return data[idx(p)];};
      Image subImage(const Coord& p,size_t h,size_t w)const;
};
Image Image::subImage(const Coord& p,size_t h,size_t w)const{
      Image out(w,h,Color{});


      return out;
}


#endif
