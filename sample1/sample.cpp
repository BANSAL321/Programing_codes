#include <bits/stdc++.h>
using namespace std;
 int mod=100000;
int main()
{
     int t; cin>>t;
        while(t--)
        {
                  unsigned long long int n,i,count=0;
                  cin>>n; 
                     for ( i = 1; i*i <(n); ++i)
                     if((n%i==0))
                        {
                          if(i%2==0)
                            count++;
                          if((n/i)%2==0)
                            count++;

                        }

                  
                      if ((i)*(i)==n)
                      if(i%2==0)
                      count++;
                                          
                       cout<<count<<endl;

   } 
    return 0;
}