
#include <bits/stdc++.h>
 using namespace std;

 int main(int argc, char const *argv[])
 
 {
 		 	int n; cin>>n;
 		  	int a[n];
			 for( int i=0; i<n; i++)
			 cin>>a[i];
			cout<<" Maxdiff is "<<(*max_element(a,a+n)-*min_element(a,a+n));
			return 0;
 }