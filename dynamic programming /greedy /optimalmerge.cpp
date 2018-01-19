#include <bits/stdc++.h>
 using namespace std;
 int main()
 	{
 			 multiset< int > m;
 			 multiset< int >:: iterator it;

			  int n,p; cin>>n;
			    for (int i = 0; i < n; ++i)
			    {  cin>>p;
			    	 m.insert(p);

			   }

			   it =m.begin();
			   int counter=0;


			    while ( m.size()!=1)
			    {
			    	 int sum= (*it);
			    	 m.erase(*it);
			    	 it++;

			    	  sum+= *it;
			    	 m.erase(*(it));
			    	 m.insert(sum);

			    	counter+=sum;
			    	  it=m.begin();

				}
 
  printf("   %d",counter);

 	}