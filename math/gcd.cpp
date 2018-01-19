	#include <cmath>
	#include <cstdio>
	#include <vector>
	#include <iostream>
	#include <algorithm>
	using namespace std;


	  long long int gcd(   long long int a, long long  int b)
	 	{
	 		  if( b==0)
	 		  		 return a;
	 		   else
	 		   	 return gcd ( b, a%b);

	 	}

	int main() {

		 	int t; scanf("%d", &t);
		 	 while (t--)
		 	 {
		 	 	long  long  int n,a,b,ans=0; cin>>n;
		 	 		 for (int i = 0; i < n; ++i)
		 	 	  			{		 cin>>b;
		 	 	  					 ans= gcd( ans, b);
		 	 	   	  	   }
		 	 
		 	  if(ans==1)
			 printf("YES\n");
			 else
			 	 printf("NO\n");

	 	}

	    return 0;
	}
