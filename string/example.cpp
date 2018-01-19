#include <bits/stdc++.h>
 using namespace std;
  int main()
  	{	 
  		
  			
			 int n,k,acsiivalue;
			 cin>>n;  		
			 char s[1000001];
			 scanf("%s",s);
			  cin>>k;
			  
			   for(int i=0; i<n; i++)
			   {	
			   		 int x=s[i];
			  if(x>=65&&x<=90||x>=97&&x<=122)
			   	{	
			   		 acsiivalue=x+k%26;

			   		if((x>=65&&x<=90)&&(acsiivalue>90))
			   		acsiivalue=acsiivalue-26;
			    	
			    	else if((x>=97&&x<=122)&&(acsiivalue>122))
			    	acsiivalue=acsiivalue-26;
			    	


			   		  char asciichar=acsiivalue;
			   		  cout<<asciichar;
			   	}
			   	 else
			   	 	cout<<s[i];


			   	}
			   	cout<<endl;

		 

  	}	