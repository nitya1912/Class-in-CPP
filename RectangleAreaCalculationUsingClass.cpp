#include <iostream>
using namespace std;

class Rectangle
{
  private:
  double length;
  double width;

  public:
  
 Rectangle()
{
    cout<<"Enter the length: "<<endl;
    cin>>length;
    cout<<"Enter the width: ";
    cin>>width;
}

double area()
  {
    return length*width;
  }
};

int main()
{
    Rectangle R1;
    cout<<"Area: "<<R1.area();
    return 0;
}