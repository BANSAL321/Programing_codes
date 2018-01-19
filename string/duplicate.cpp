
#include <bits/stdc++.h>
using namespace std;

  int main(int argc, char const *argv[])
  {
  	 int t; cin>>t;
  	 while(t--){
  	 			 string s;
  	 			 cin>>s;
  	     		 if(s.length()>=10)
  	   		 	 printf("YES\n");
  	   		 	  else
  	   		 	  {
  	   		 	  				 int  a[27]={0};
  	   		 	  				 int count =0;
  	   		 	  				  int x=0;

  	   		 	  		 		for (int i = 0; i < s.length(); ++i)
  	   		 	  		 		  a[s[i]-96]++;

  	   		 	  		 		  for (int i = 1; i <27 ; ++i)
  	   		 	  		 		  {	 if(a[i]>0)
  	   		 	  		 		  		{
  	   		 	  		 		  			a[i]--;
  	   		 	  		 		  			count++;
  	   		 	  		 		  		}
  	   		 	  		 		 }

  	   		 	  		 		   for (int i = 1; i <27 ; ++i)
  	   		 	  		 		  {	 if(a[i]>1)
  	   		 	  		 		  		{
  	   		 	  		 		  			a[i]--;
  	   		 	  		 		  			a[i]--;
  	   		 	  		 		  			count++;
  	   		 						  	}
  	   		 	  		 		 }
  	   		 	  		 		 	   for (int i = 1; i <27 ; ++i)
  	   		 	  		 		  {	 if(a[i]>2)
  	   		 	  		 		  		{
  	   		 	  		 		  			a[i]--;
  	   		 	  		 		  			a[i]--;
  	   		 	  		 		  			a[i]--;
											count++;
  	   		 						  	}
  	   		 	  		 		 }
  	   		 	  		 		   for (int i = 1; i < 27; ++i)
  	   		 	  		 		   {	
  	   		 	  		 		   	 if(a[i]>0)	
  	   		 	  		 		   	 	x++;
									}
									count+=x/2;




  	   		 	  		 		   if (count>=4)
  	   		 	  		 		   printf("YES\n");
  	   		 	  		 			else
  	   		 	  		 			printf("NO\n");

  	   		 	  	}

  	 			 }
  	return 0;
  }