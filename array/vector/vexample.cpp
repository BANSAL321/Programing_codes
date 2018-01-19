#include <bits/stdc++.h>
 using namespace std;
 int main()
  {
  		 vector<int> a;
  		 vector<int>::iterator i;
  		 cout<<a.size();
  		 cout<<"enter the value of n";
  		  int n;
  		 cin>>n;
  		 int p;

  		 for(int i=0; i<n; i++)
  		 	{	cin>>p;	 
  		 		a.push_back(p);
  		 	}
  		 			a.pop_back();

  		 	cout<<a.size();	
  		 	a.erase(a.begin(), a.end())	;
  		 	cout<<a.size();

}