#include<bits/stdc++.h>
 using namespace std;
   int main()
   {		 set< long long int > s;
   		      long long int n,p,max; cin>>n;
   		   	 cin>>p;
   		   	 s.insert(p);
   		      long long int ans=1000000000;
   		     	set< long long  int> :: iterator temp;

   		      long long  int diff;
   		      	 max=p;

   		  	for (int i = 2; i <=n ; ++i)
   		   	 {
   		   	 		cin>>p;
   		   	 		s.insert(p);
   		   	 		if(p<max)
				{	temp=s.upper_bound(p);
		   	 		diff=*temp-p;
   		   		    if(ans>diff)
   		   	 		 ans=diff;
				}
				 else
				 	max=p;
			}
			printf("%lld",ans);
  	}