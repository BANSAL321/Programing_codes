#include <bits/stdc++.h>
using namespace std;
 int main(int argc, char const *argv[])
 {
 	 long long int n, k; cin>>n>>k;
 	 long long int a[n],i,j;
 	  for ( i = 0; i < n; ++i)
 		 cin>>a[i];
 	long long int sum=0;
     long long 	 int p=0, q=0;

     	  sort(a, a+n,greater< long long int>());
			for ( i = 0; i < n; ++i)
 		  { for(  j= p; j<(k+p)&&(j<n); ++j)
 		  			 sum+=(q+1)*a[j];
 		  	           q++;
 		               p=p+k;
 		           	   i=i+p-1;	
		
		}
 		  	  	
 	  
 	   printf("%lld\n",sum);

 	return 0;
 }