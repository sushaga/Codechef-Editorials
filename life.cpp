/*#include <iostream>
using namespace std;
int main()
{
    int a,i,p,j,z;
    cin>>a;
        for(i=0;i<a;i++)
    {
        z=0;
        cin>>p;
        j=1;
        while((p/(5^j))>0)
        {
            z=z+(p/(5^j));
            j=j+1;
        }
        cout<<z<<"\n";
    }

}*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,i,p,z,c;
    cin>>a;
        for(i=0;i<a;i++)
    {
        z=0;
        cin>>p;
                c=5;
        while((p/c)>0)
        {
            z=z+(p/c);
            c=c*5;

        }
        cout<<z<<"\n";
    }

}
