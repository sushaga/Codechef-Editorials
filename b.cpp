#include <iostream>
using namespace std;
int main()
{
int a;
double b;
    cin>>a;
    cin>>b;
    if ((b>a)&&(a%5==0))
    {
    cout<<(b-a-0.50);
    }
    else
    {
    cout<<b;
    }

}


