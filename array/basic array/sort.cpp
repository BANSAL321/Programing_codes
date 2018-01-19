#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main() {
      map<int,int > m;
       map<int , int > :: iterator it;

      int n,p; cin>> n;
      for(int i=0; i<n; i++)
    	  {		cin>>p;
      		 m.insert(pair<int,int>(p,i));
      	   }

      	    for(it=m.begin(); it!=m.end(); it++)
      	    	cout<<it->first<<" "<< it->second<< endl;
      	   

return 0;

	}
              