#include <bits/stdc++.h>
using namespace std;


 int dsum( long long int n)
 {		int sum=0;
 	 	while(n)
 	 		{	 sum+=n%10;
 	 				n/=10;
 	 		}
 	 		 return sum;
}


int main(int argc, char const *argv[])
{
	 long long  int  n,p,j,k; cin>>n; int a[n+1];
	 int digit_sum= dsum(n);  
	  int prime_sum=0;

		for (int i = 1; i <=n; ++i)
	  		a[i]=1;

	  	int x= sqrt(n);

	 for (int i = 2; i <=x; ++i)
	  	 {			p=i;
	  	 			j=i+1;
	  	 	        k=2;
	  	 	
	  		 	    while(j<=n)
	  		 		{
	  		 			j=k*(p);
	  		 			a[j]=0;
	  		 			k++;
	  		 		} }



 				 for (int i = 2; i <=n ; ++i)
 				 	 if (a[i]==1)
 				 	 {
 				 	 	prime_sum+=i;

 				 	 }



 				 	 if (prime_sum=digit_sum)
 				 	 		printf("1\n");
 				 	  else
 				 	  	printf("0\n");

	return 0;
}