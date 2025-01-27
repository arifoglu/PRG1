#include <iostream>
#include <vector>

using namespace std;

enum class Quadrant{I, II, III, IV};

template<typename T, Quadrant q>
bool est_dans_quadrant(Point<T> const& p){
    switch(q){
        case Quadrant::I :
            return .getCoord().getX() > 0 && p.getCoord().getY() > 0;
    }
}

int main(){ 
    vector<Point<int>> dessin {{"p1",  1,  2},
                           {"p2",  4,  2},
                           {"p3",  9,  8},
                           {"p4", -1,  5},
                           {"p5",  3, -1},
                           {"p6",  7,  0}};

    return EXIT_SUCCESS;
}
