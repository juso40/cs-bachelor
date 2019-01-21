#include "point.hh"

Point::Point(double x, double y){
    coord_x=x;
    coord_y=y;
    
public:
    Point(){
       origin={{0,0}};
    }

    double x() const;
    double y() const;
    
};
