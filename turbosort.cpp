#include <iostream>
    using namespace std;
    int main()
    {
      int i,p,j;
            int temp;
            cin>>p;
      int num[p];
      for(i=0;i<p;i++)
      {
          cin>>num[i];
      }
      for(i = 1;i <= p; i++)
     {
           for (j=0; j < (p-i); j++)
         {
               if (num[j+1] < num[j])
              {
                    temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    }
          }
     }

for(i=0;i<p;i++)
      {
          cout<<num[i]<<"\n";
      }
    }
