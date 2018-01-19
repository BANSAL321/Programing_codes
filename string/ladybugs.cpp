#include <bits/stdc++.h>
  using namespace std;
   int main(int argc, char const *argv[])
 {
 		 int t;
 		cin>>t;
 		 while(t--)
 		 {
 		 		 int space=0;

 		 	 	 int x=0,y=0,z=0;
 		 	 int n; cin>>n;
 		 	 string s;
 		 	 cin>>s;

 		 	 while(next_permutation(s,s+n))
 		 	 	cout<<s;

 		 }



 	return 0;
 }