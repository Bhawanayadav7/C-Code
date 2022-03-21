#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"enter marks=";
    cin>>marks;

    if(marks<25)
    {
        cout<<"F\n";
    } 

    else if(marks>=25 and marks<45)
    {
        cout<<"E\n";
    }
    else if(marks>=40 and marks<50)
    {
        cout<<"D";
    }
    else if(marks>=50 and marks<60)
    {
        cout<<"C";
    }
    else if(marks>=60 and marks<80)
    {
        cout<<"B";
    }
    else{
        cout<<"A";
    }

    return 0;
}    