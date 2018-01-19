#include <bits/stdc++.h>
using namespace std;
 int main()
 	{		 int t; cin>>t;
 			while(t--)
 			{
 			char s[202];
 			scanf("%s",s);
 			int len=strlen(s);
 			int a[27]={0};
 			
 			for( int i=0; i<len; i++)
 			{	int x= s[i];
 					x=x-96;
 				 if(a[x]==0)
 				 {
 				 	a[x]=1;
 				 	printf("%c",s[i]);
 				 }

 			} 
 			cout<<endl;
 			
 		}
 