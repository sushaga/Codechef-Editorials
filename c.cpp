#include <iostream>
 using namespace std;
int main()
{   int a,b,i,j;
int p = 0;
    cin>>a;
    cin>>b;
    for(i=0;i<a;i++)
    {
    cin>>j;
    if(j%b==0)
    {
    p=p+1;
    }
        }
    cout<<p;
}
