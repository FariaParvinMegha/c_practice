#include<iostream>
using namespace std;

//ENUM for defining datatype
    enum day {sat=1, sun, mon, tue, wed, thu, fri};
 //enum day {sat=10, sun, mon, tue, wed, thu, fri};
//enum day {sat=1, sun, mon, tue=10, wed, thu, fri};

//DEFINE
//#define mon 5

//TYPEDEF for defining datatype
typedef int marks;

int main()
{
    day d;
    d=tue;
    cout<<d<<endl;

    /*cout<<sat<<endl;
    cout<<sun<<endl;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;*/

    marks m1, m2;
    m1 = 50;
    m2 = 90;

    cout<<m1<<", "<<m2<<endl;
    return 0;
}
