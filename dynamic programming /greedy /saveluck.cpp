#include <bits/stdc++.h>
using namespace std;
int main()
{
	 vector<int> v; 
	 int p, i,q, k,n;cin>> n>>k;
	   int imp=0,unimp=0;

	     for (i = 0; i < n; ++i)
	     {	  
	     		cin>>p>>q;
					 if(q)
					{  imp+=p;	
					 v.push_back(p);
					 	
					}
					 else
					 	unimp+=p;
		}
			   sort(v.begin(),v.end());
		    	
			 //    cout<<imp<<" "<<unimp;



			  for ( i =0; i < v.size()-k; ++i)
			  	imp=imp-2*v[i];


			   cout<<imp+unimp;



	 return 0;

}