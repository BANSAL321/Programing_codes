#include <bits/stdc++.h>
using namespace std;

   int main(int argc, char const *argv[])
   {
   	  int t; cin>>t;
   	  while( t--)
   	  {

   	  	  string str;
   	  	  cin>>str;
   	  	  int  n= str.length();
   	  	  int i;
   	  	  for(i=0; i<n-1; i++)
   	  	  	   		{
   	  	  	   			if(abs(str[i+1]-str[i])==1||abs(str[i+1]-str[i])==25)
   	  	  	   				continue;
   	  	  	   			else
   	  	  	   				break;


   	  	  	   		}
   	  	  	   		i==n-1?cout<<"YES\n":cout<<"N0\n";

   	  	  }


   	  
   	return 0;
   }