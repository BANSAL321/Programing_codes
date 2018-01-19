#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int , int > &a, const pair< int , int> &b){	return(a.second<b.second);}
int main(int argc, char const *argv[])
  {
  			vector <  pair<int , int > >v;
  			 int n,p,q;cin>> n;
  		
  			 for (int i = 0; i < n; ++i)
  			 {	    cin>>p>>q;
  			        v.push_back( make_pair(p,q));
		     }

  		    sort(v.begin(),v.end(), sortbysec);
			 int count=1,second=v[0].second;

  		 	 for (int i = 1; i <n; ++i)
  		 	 {
  		 	 	 if(v[i].first>second)
  		 	 	 {
  		 	 	 	count++;
					second=v[i].second;

  		 	 	 }
  		 	 }

  		 	  cout<<count;

  			 		 
	return 0;
  }