// written by bansal;

#include <bits/stdc++.h>
  using namespace std;
   void find(int a[], int n,int k)
  {					int l=0, r=n-1;
 						 while(l<r)
 						 {
 						 		 if(a[l]+a[r]==k)
 						 		 {
 						 		 	printf("Yes this element is present %d\n", k);

 						 		 	 l++;
 						 		 	 r--;

 						 		 }
 						 		 else if(a[l]+a[r]<k)
 						 		 		l++;
 						 		 	else
 						 		 		r--;
					}

  }

 int main() 
 	{
 		  int n; cin>>n;
 		  int a[n];
			 for( int i=0; i<n; i++)
			 cin>>a[i];

				 for(int i=0; i<n; i++)
				 sort(a, a+n);

					   for(int k=0; k<n; k++)
					   		{
					   			 int sum=a[k];
					   			 	find(a, n ,sum);
					   		}



 return 0;


 	}