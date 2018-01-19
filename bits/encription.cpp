#include <bits/stdc++.h>
 int main(int argc, char const *argv[])
 {
 	 int n,k;
 	 cin>>n>>k;
 	 string s;
	 cin>>s;
	   string printed;
	    printed=s[0];
	    int xeor= printed-'0';


	 for (int i = 0; i < s.length(); ++i)
	 {
	 	if(i==0)
	 		{cout<<s;
	 			k--;
			}
		 if(i>1&&k>0)
		 {
		 	if(s[i]==1)
		 }

	 }

 	return 0;
 }