#include <bits/stdc++.h>
 int main(int argc, char const *argv[])
 {
 	int t; scanf("%d",&t);
 	 	while(t--)
 	 	{
 	 		string s;
 	 		cin>>s;
 	 		int len=s.length();
 	 		 int flag=0
 	 		 for( int i=1; i<len; i++)
 	 		 		{
 	 		 			 for(int j=i; j<n; j=j+i)
 	 		 			 	{	if((s[j]-s[j+1])==1)
 	 		 			 		continue;
 	 		 			 	}
 	 		 			 	if(j==n)
 	 		 			 		{flag=1;

 	 		 			 		}
 	 		 		}	

 	
 	 			
		}
 	return 0;

 }