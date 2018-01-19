#include<bits/stdc++.h>
 using namespace std;
   int main()
   {
   		 int n; cin>>n;
   		 int a[n];
   		 for (int i = 0; i < n; ++i)
   		  cin>>a[i];
   		 int l; cin>>l;
   		  int diff=0;

   		 for (int i = 0; i < n-l; ++i)
   		 {
   		 	if(a[i+l]-a[i]>diff)
   		 	diff=a[i+l]-a[i];

   	  	}
   	  	cout<<diff<<endl;
   	}