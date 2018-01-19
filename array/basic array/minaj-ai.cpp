// written by shubham bansal;

#include <bits/stdc++.h>
using namespace std;
 int main()
 {
 	 int n; cin>>n;
 		  int a[n];
			 for( int i=0; i<n; i++)
			 cin>>a[i];

				 //for(int i=0; i<n; i++)
				 sort(a, a+n);
				 int diffmin=100000;

				 	 for(int  i=0; i<n-1; i++)
				 	 if(abs(a[i]-a[i+1])<diffmin)
				 	 diffmin=abs(a[i]-a[i+1]);
				 	 cout<<"minimum difference "<<diffmin<<endl;
				 	


				 	 

 }