#include <bits/stdc++.h>
using namespace std;
int main()
 {
 	  int t; scanf("%d",&t);
 	  if(t>0&&t<11)

{ 	  while(t--)
 	  {		int flag=1;

 	    char s[200];
 	    scanf("%s",s);
 		int len=strlen(s);
 		 if(len>100)
 		 	flag=0;

 		int capital=0,small=0;
 	
 		for( int i=0;i<len; i++)
 				{
 					 	if(s[i]>=48&&s[i]<=57)
 					 		continue;
 					 	else if(s[i]>=65&&s[i]<=90)
 					 		capital++;
 					 	else if( s[i]>=97&&s[i]<=122)
 					 		small++;
 					 	else
 					{
 					 	//printf("invaild input\n");
 					 	flag=0;
 					 	break;

	 			    }

	 			  }
	 			    if(flag==1)
	 			      {
	 			      	if(capital==0&&small==0)
	 			      		printf("Invalid Input\n");
	 			      		
	 			      	else if(capital>small)
	 			      	 	printf("%d\n",small);
	 			         else
	 			      	 	printf("%d\n",capital);
	 			      }	
	 			     else
	 			      {
	 			      	printf("Invalid Input\n");
	 			      }
	 			  }
	 }
	 else
	 	printf("Invalid Test\n");

	 			  return 0;


 }
 