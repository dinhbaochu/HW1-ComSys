
# include <iostream>
# include <cmath>
# include <iomanip>
using namespace std;


class shape{
public:
    virtual double  getArea()const=0;
    virtual double getPerimeter()const=0;
};


class rectangular_parallelepiped : public shape {
private:
    long long length;
    long long width;
    long long height;
public:
    rectangular_parallelepiped(long long inlength, long long inwidth, long long inheight)
    {
        this -> length = inlength;
        this -> width = inwidth;
        this -> height = inheight;
    }

    double getArea()  const {return 2*length*width+2*height*width+2*length*height;} //area of rectangular parallelepiped
    double getPerimeter()  const {return (length+height+width)*4;} // perimeter
};

class regular_hexagon : public shape {
private:
    long long side;

public:
    regular_hexagon( long long inside){
        this -> side = inside;
    }
    
    double getArea() const {return (3*sqrt(3)/2)*side*side;} //  area of regular hexagon
    double getPerimeter() const {return 6*side;} // perimeter
};

int main(){
    // ask user for each side 
    long long length, width, height, side;
    cin>>length>>width>>height>>side;

    // initialize 
    rectangular_parallelepiped rec(length, width, height);
    regular_hexagon hex(side);

    // formatting result 
    cout << fixed << setprecision(2);
    cout<< rec.getArea()<<" "<<rec.getPerimeter()<<" "<<hex.getArea()<<" "<<hex.getPerimeter();

}
