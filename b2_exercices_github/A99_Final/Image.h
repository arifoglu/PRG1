#ifndef IMAGE_H
#define IMAGE_H

using namespace std;

struct Color{
   uint8_t R, G, B;

};
struct Coord{
   size_t x, y;
   static const Coord origin ;
};
const Coord origin(0,0);

class Image{
      size_t h, w;
      vector<Color> data;
   private:
      size_t idx(Coord const& p) const{
         if(p.x >= w | p.y >= h){
            throw out_of_range("Image");
            return p.x + w*p.y;
         }
      } 
   public:
      Image(size_t w, size_t h,Color c) : w(w), h(h) , data(h*w,c) {};
      size_t getw()const{return w;};
      size_t geth()const{return h;};
      Color const& operator[](Coord const& p)const {return data[idx(p)];}
      Color& operator[](Coord const& p) {return data[idx(p)];}
      Image subImage(Coord p1,size_t w, size_t h)const;

};

Image Image::subImage(Coord p1, size_t w, size_t h) const {
   idx(p1);
   idx(Coord{p1.x + w - 1, p1.y + h - 1});

   Image out(w, h, Color{});
   for(Coord p{0, 0}, pi{p1}; p.y < h; ++p.y, ++pi.y)
      for(p.x = 0, pi.x = p1.x; p.x < w; ++p.x, ++pi.x)
         out[p] = (*this)[pi];
   return out;
}

#endif