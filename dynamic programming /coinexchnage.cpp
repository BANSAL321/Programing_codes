//  coin exchange problem ;
	 /*
	 	http://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/
	*/
#include<bits/stdc++.h>
using namespace std;
  int sum=0;
   int  min(int a , int b)
   {
   	 if(a>b)
   	 	 return b;
   	  else 
   	  	 return a;

   }
      

	 int coinex(int v[], int coins, int paisa)
	 	{	
	 			static int count=0;
	 		if(paisa==0)
	 			return 0;
	 	
	 		int res= INT_MAX;
		    for (int i = 0; i < coins; ++i)
	 		  {
	 		  		 if( v[i]<=paisa)
	 				{			int sub_res= coinex(v, coins, paisa-v[i]);

	 	 						res=sub_res+1;	
						
					}	
	
			}
	 		  return count;

	 	}


 	   int main(int argc, char const *argv[])
 	   {

 	   		  int v[100];

 	   		  int n,p; cin>>n;
 	   		  for (int i = 0; i < n; ++i)
 	   		  cin>>v[i];
 	   		  int paisa ; cin>>paisa;
 	   		  cout<<coinex(v,n, paisa);
		return 0;
 	   }
	