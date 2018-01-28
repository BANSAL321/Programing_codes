#include <bits/stdc++.h>
 using namespace std;
  int main(int argc, char const *argv[])
  {
  	 int n ,m;
  	 cin>>n>>m;
  	 int  a[1000][1000]={};
  	 	int x,y;
  	 		 int flag=0;

  	 	 for (int i = 1; i <= m; ++i)
  	 	 {
 				cin>>x>>y;
 				a[x][y]=1;

  	 	 }

  	 	  for (int i = 1; i <1000 ; ++i)
  	 	  if((a[i][i+1]==1)&&(a[i+1][i+2]==1)&&(a[i+2][i+3]==1)&&(a[i+3][i]==1) )
  	 	  flag=1;

  	 	 if(flag==1)
  	 	 	cout<<"Yes";

  	 	 else
  	 	 	cout<<"No";


  	 	  	   	   	
  	 	  	
  	 
  	return 0;
  }