#include <bits/stdc++.h>
 using namespace std;
 	 int main(int argc, char const *argv[])
 	 {
 	 	
 	 	 int n; cin>> n; int a[n];

 	 	for (int i = 0; i < n; ++i)
 	 		 cin>>a[i];

 		for (int i = 0; i < n; ++i)
 		{
 			for (int j = 0; j < n; ++j)
 			{
 					 if(a[j]%a[i]==0)
 					 	 continue;
 					 	else
 					 		printf("%d\n",a[i]);

 				
 			}
 		}

 	 	return 0;
 	 }