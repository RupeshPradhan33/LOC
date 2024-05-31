
/* Write a c++ program to enter the radius of a circle 
and find its diameter, circumference and area.*/

 
#include <iostream>
using namespace std;
int main(){
    float r,d,c,a;
    cout << " Enter the radius of a circle : ";
    cin >> r;
    d = r/2;
    c = 2*3.14*r;
    a = 3.14*r*r;
    cout << "Diameter of circle is : " << d << endl;
    cout << "Circumference of circle is : " << c << endl;
    cout << "Area of circle is : " << a << endl;
    
    return 0;

}