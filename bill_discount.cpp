#include<iostream>

using namespace std;

int main ()
{
    float bill, discount, total;

    cout<< "Please enter your bill amount : "<<endl;
    cin>>bill;

    if(bill >= 500){
        total = bill - bill * 20 / 100;
        cout<< "Your total bill is "<< total<<endl;
    }
    else if (bill >= 100 && bill < 500){
        total = bill - bill *10 / 100;
        cout<< "Your total bill is : " << total << endl;
    }
    else {
            cout << "Your bill is : " << bill << endl;
    }

    return 0;
}
