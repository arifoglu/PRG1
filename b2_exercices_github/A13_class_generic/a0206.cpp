#include <iostream>
#include <vector>

using namespace std;

template<typename T>
struct Pixel{
   T R, G, B;
};
template<typename T>
using Line = vector<Pixel<T>>;

template<typename T>
using Screen = vector<Line<T>>;

template<typename T>
ostream& operator<<(ostream& os, const Screen<T>& s);

int main() {
   Screen<uint8_t>  screen_HD     (1280, Line<uint8_t> ( 720));
   Screen<uint16_t> screen_Full_HD(1920, Line<uint16_t>(1080));
   Screen<uint32_t> screen_UHD_4k (3840, Line<uint32_t>(2160));
   Screen<uint32_t> screen_UHD_8k (7680, Line<uint32_t>(4320));


}

template<typename T>
ostream& operator<<(ostream& os, const Screen<T>& s){
   if(s.empty()) return os;
   os << "(" << s[0].size() << "x" << s.size() << ")"
      << sizeof(T) * 8 << "bits";
   return os;
}