#include <bits/stdc++.h>
using namespace std;
 int  main(int argc, char const *argv[])
 {
 	 int n ; cin>>n;
 	 int a[n], b[n];

 	   for (int i = 0; i < n; ++i)
 	   	  cin>>a[i];
 	   	 for (int i = 0; i < n; ++i)
 	   	 	cin>>b[i];
 	   	 sort(a,a+n);
 	   	 sort(b,b+n);
 	   	  int count=0;

 	   	 for (int i = 0; i < n; ++i)
 	   	 {
 	   	 	if(a[i]==b[i])
 	   	 		count++;
		}
			 count++;

			 cout<<count;

 	   	 





 	return 0;
 }