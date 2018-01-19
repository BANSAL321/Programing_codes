#include <bits/stdc++.h>
using namespace std;
unsigned long long int max(unsigned long long int a,unsigned long long int b)
 { 	 if(a>b)	   return a;
	  else
	     return b;
}

int main() {
    
    unsigned long long int n,k;
    	cin>>n>>k;
    	 int a[n];
     unsigned	long long  int counter[101]={0};

  		unsigned long long  int count=0;


    		 for (int i = 0; i < n; ++i)
    			{   cin>>a[i];
    				counter[a[i]%k]++;
    			}

    				 if(k==1)
    				 {	 printf("1\n");
    					return 0; 

    				 }

				 for (int i = 0; i <=100; ++i)
    			 {
    			 	   if(counter[i]>0)
    			 	  {

    			 		if((i==k-i) && counter[i]>=1||i==0)
    			 			count++;
    			 		else if(k-i>0)
						count+=max(counter[i],counter[k-i]);

							counter[i]=0;
							counter[k-i]=0;


    			 	   }
   				}
   			cout<<count;

       			 


    return 0;
}
