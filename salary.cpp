#include<iostream>

using namespace std;

int main()
{
    float basic_salary, pAllow, pDeduct, net_salary;

    cout<<"Please enter basic salary, percentage of allowance, percentage of deduction : "<<endl;
    cin>>basic_salary>>pAllow>>pDeduct;

    net_salary = basic_salary + basic_salary * pAllow/100 - basic_salary * pDeduct/100;

    cout<<"Your net salary is "<<net_salary;

    return 0;
}
