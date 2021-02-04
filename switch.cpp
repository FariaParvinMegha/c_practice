#include<iostream>

using namespace std;

int main ()
{
    int day;

    cout<<"Enter day num : "<<endl;
    cin>>day;

    switch(day)
    {
        case 1: cout<<"sat"<<endl;
        break;
        case 2: cout<<"sun"<<endl;
        break;
        case 3: cout<<"mon"<<endl;
        break;
        case 4: cout<<"tue"<<endl;
        break;
        case 5: cout<<"wed"<<endl;
        break;
        case 6: cout<<"thu"<<endl;
        break;
        case 7: cout<<"fri"<<endl;
        break;
        default: cout<<"undefined"<<endl;
    }

    return 0;
}
