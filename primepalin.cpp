#include <iostream>
#include <cmath>
    using namespace std;
    int a,b,k,c,d,e,q,s,x,i,p,g,f;
    float n;

      /*  int length1(int y)
    {
    k=1;
    c=y/(pow(10,k));
   while(c>0)
   {
   k=k+1;
   c=y/(pow(10,k));
   }
         return k;
    }*/
    bool isprime(int z)
    {
    f=1;
    n=sqrt(z);
    if((z%2)==0)
    {
    f=0;
    }
    else
    {
        for(s=3;s<n;s=s+2)
    {
    if((z%s)==0)
    {
    f=0;
    break;
    }
    }
    }
    return f;
    }
    int reverse1(int x)
    {
        q=0;
    for(e=0;e>=0;e++)
    {
    q=q*10+(x%10);
    x=x/10;
    if(x==0)
    break;
    }
    return q;
    }
    int main()
    {
        cin>>a;
       p=0;
        for(i=a;i>p;i++)
        {
        if((i==reverse1(i))&&(isprime(i)==1))
        {
        p=i;
        break;
        }
        }
        cout<<p;
    }

