#ifndef POINT_HH
#define POINT_HH

#include <vector>

class Point{
    private:
        double _x;
        double _y;
    
public:
    Point(std::vector<double> origin={{_x,_y}}){
     _x=0;
     _y=0;
    }
    

    double x() const;
    double y() const;
    
};

#endif // POINT_HH
