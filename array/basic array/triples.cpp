#include <bits/stdc++.h>
 using namespace std;
  int main(int argc, char const *argv[])
  {
  	int n,p,i; int d;
  	 cin>>n>>d;
      
  	  int a[100001]={0};
  	  for ( i = 0; i < n; ++i)
  	  {		 cin>>p;
  	  		 a[p]++;

  	   }

  	    int count=0;

  	    for(  i=0; i<100001; i++)
  	    {
  	    	 if( a[i]>0)
  	    	 		{
  	    	 			if(a[(i+d)]>0&&a[(i+2*d)]>0)
  	    	 					count++;

	  	    	 		}
  	    }

  	  cout<< count;

  	return 0;
  }