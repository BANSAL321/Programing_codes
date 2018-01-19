#include <bits/stdc++.h>
 using namespace std;
 int main(int argc, char const *argv[])
 {	
 	 int t; cin>>t ;
 	while(t--)
 	{
 		char s[1000];scanf("%s",s);
 		int len=strlen((s));
 		 int a, b;
 		 int flag=0;

 		if (len==1)
 		{	   a= s[0]-'0';
 			  if(a%8==0) flag=1;

 			  	//	printf("YES\n");

 		}
 		 else if(len==2)
 		 {
 		 	  a= 10*(s[0]-'0')+(s[1]-'0');
 		 	  b= 10*(s[1]-'0')+(s[0]-'0');

 		 	    if(a%8==0||b%8==0)  flag=1;

 		 	    //printf("yes\n");



 		 }
 		 else
 		 {

 		 	 for (int i = 0; i < len; ++i)
 		 	 {
 		 	 	for (int j= 0; j< len; ++j)
 		 	 	{
 		 	 		 for (int k = 0; k < len; ++k)
 		 	 		 {
 		 	 		 	 a=100*(s[i]-'0')+10*(s[j]-'0')+(s[k]='0');

 		 	 		 	 if (a%8==0) flag=1;

 		 	 		 	 
 		 	 		 }

 		 	 		
 		 	 	}
 		 	 }

		}
		if (flag) cout<<"YES"<<endl;
 		 	else cout<<"NO"<<endl;



 	}
	return 0;
 }