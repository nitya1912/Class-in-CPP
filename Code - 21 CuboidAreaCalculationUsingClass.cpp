#include <iostream>
#include <bitset>
using namespace std;

class Rectangle
{
    private:
    double length;
    double width;

    public:
    Rectangle()
    {
        cout<<"Enter length : ";
        cin>>length;
        cout<<"Enter Width : ";
        cin>>width;
    }

    double area();
};

class Cuboid:public Rectangle
{
    private:
    double height;

    public:
    Cuboid()
    {
    cout<<"Enter height : ";
    cin>>height;
    }

    double volume();
};

double Rectangle::area()
{
     return length*width;
};

double Cuboid::volume()
{
    return area()*height;
};

int main()
{
    Rectangle R1;
    Cuboid C1;
    cout<<"Area : "<<R1.area()<<endl;
    cout<<"Volume : "<<C1.volume();
    return 0;
}
