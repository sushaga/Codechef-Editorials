#include <iostream>
    using namespace std;
    int k;
    int mod1(int a)
    {
        if(a>0)
           k=a;
        else
           k=-a;
           return k;
    }

        int main()
    {
      int i,p,j,q,l,s;
            cin>>p;
      int num[p];
      int num1[p];
      int num3[p];
      int num2[p];
       s=0;

      for(i=0;i<p;i++)
      {
               cin>>num[i];
          cin>>num1[i];
          num2[i]=s+num[i]-num1[i];
          num3[i]=mod1(num2[i]);
      }
      j=num3[0];
      q=0;
      for(i = 1;i<p; i++)
     {
         if(num3[i]>j)
         {
             j=num3[i];
             q=i;
         }
     }
     l=2;
     if (num2[q]>0)
              l=1;
              cout<<l<<" "<<num3[q];

    }
