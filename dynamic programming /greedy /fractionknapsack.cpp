#include <bits/stdc++.h>
 using namespace std;
 	 int main(int argc, char const *argv[])
 	 {
 	 	 map<float ,int, greater< float> > m;
 	     int paisa,weight,totalweight;
 	 	 int jobs ; cin>>jobs;
 	 	  for (int i = 0; i < jobs; ++i)
 	 	  {	
 	 	  	cin>> paisa>> weight;
 	 	  	m.insert(pair<float,int>(paisa/weight,weight));
		 }
		 	 cin>> totalweight;
		 	  int profit =0;

			map<float,int>::iterator it;

			for (it=m.begin(); it!=m.end(); it++)
		    {
		    		 if((totalweight-(it->second))>=0)
		    		 profit+=(it->first)*(it->second);
		    		 else if(totalweight>0)
		    		 profit+=(totalweight) *(it->first);

		    		 totalweight= totalweight- (it->second);
		    }


		   printf("%d\n", profit);
return 0;
 	 }