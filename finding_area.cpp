#include<iostream>
using namespace std;
int main()
{
    float r, area;
    cout<<"Enter radius"<<endl;
    cin>>r;
    //area = (float) 22 / 7 * r * r;
    //area = 22 / 7.0 * r * r;
    area = 3.1416f * r * r;
    cout<<"The area of the circle is "<<area;
    return 0;
}
