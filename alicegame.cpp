#include <iostream>
#include <string>
    using namespace std;
    int main()
    {
    int a,i,p;
    string z;
        cin>>a;
    int myarray[a];
    for(i=0;i<a;i++)
    {
    cin>>myarray[i];
    }
    for(i=0;i<a;i++)
    {
    z="BOB";
    p=myarray[i];
    if((p%2)==0)
    {
    z="ALICE";
    }
    cout<<z<<"\n";
    }
    }
