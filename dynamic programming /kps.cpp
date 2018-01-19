#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
		  int n, weight ;  cin>>n;
		  int w[n];
		  int p[n];
		  for (int i = 0; i < n; ++i)cin>>w[i];
		  for (int i = 0; i < n; ++i)cin>>p[i];
		  cin>>weight;

		  int compute[n][weight+1]={0};

		  for (int i = 0; i < n; ++i)
		 	compute[i][0]=0;

		  for (int i = 0; i <=weight; ++i)
			if(w[0]<i)
		  	compute[0][i]=p[0];

		  for (int i = 1; i < n; ++i)
		  {
		  	 for (int j = 0;j <=weight; ++j)
		  	 {	compute[i][j]=compute[i-1][j];
				if( (j>=w[i]) && (compute[i][j]<p[i]+compute[i-1][j-w[i]]) )
		  	 	compute[i][j]=p[i]+compute[i-1][j-w[i]];
			 }
	  }

		  	 cout<<compute[n-1][weight];
return 0;
}