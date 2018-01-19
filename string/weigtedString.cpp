#include<bits/stdc++.h>
using namespace std;
 int main(int argc, char const *argv[])
 {
 	 int t; scanf("%d",&t);
 	 while(t--)
 	 {
 	 string s,m;
 	 cin>>s;
 	 cin>>m;

 	  int i,number;

 	 int len=s.length();
 	 int matchlen=m.length();

 	  int a[27]={0};
 	  int match[27]={0};

 	  for( i=0; i<len; i++)
 	  		a[s[i]-96]++;
 	   for( i=0; i<matchlen; i++)
 	  		match[m[i]-96]++;


 	  	 int flag=0;


 	  	 for(i=1; i<=26; i++)
 	  	 if((a[i]>=1)&&(match[i]>=1))
 	  	 flag=1;

   				if( flag==0)
   				printf("NO\n");
   				else
   					printf("YES\n");
 
   			}
 	return 0;
 }