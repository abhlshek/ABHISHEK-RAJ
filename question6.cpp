#include <iostream>
using namespace std;
main()
{
    int r;
    cout << "Enter the radius of circle: ";
    cin >> r;
    int d=2*r;
    cout << "diameter"<< d;
    float cir=22.0*r*2/7;
    cout << " Circumference"<<cir;
    float ar=22.0*r*r/7;
    cout << " Area" <<ar;
}
