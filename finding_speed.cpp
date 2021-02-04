#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int u, v, a;
    float speed;

    cout<<"Enter v, u, a:"<<endl;
    cin>>v>>u>>a;
    speed = (pow(v,2) - pow(u,2)) / (2*a);
    //speed = (v*v - u*u) / (2*a);
    cout<<"the speed is "<<speed<<endl;

    return 0;
}
