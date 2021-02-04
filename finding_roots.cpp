
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a, b, c, r1, r2;
    cout<<"Please enter a, b, c"<<endl;
    cin>>a>>b>>c;
    r1 = (- b - sqrt(b*b - 4*a*c)) / (2*a);
    r2 = (- b + sqrt(b*b - 4*a*c)) / (2*a);
    cout<<"The roots of the equation are r1 = "<<r1<<" and r2 = "<<r2<<endl;
    return 0;
}
