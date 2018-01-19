#include <bits/stdc++.h>
using namespace std;
 int main(int argc, char const *argv[])
 {
 	list<int> l;
 	list<int> iterator i;
 	 int n,p; scanf("%d",&n);
     for (int i = 0; i < n; ++i)
 	{	 cin>>p;
 			l.push_front(p);
 	}
   		cout<<l.front();
   		


 	return 0;
 }