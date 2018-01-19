#include <bits/stdc++.h>
 using namespace std;

  int main()
{
		//	 iterator <string> it;
  int t ; cin>>t;
  		while(t--)
  		{
		 string str;
		 cin>>str;
		string  str1=str;
		reverse(str.begin(),str.end());	
		 if(str.compare(str1)==0)
		{ cout<<"YES ";
			 if((str.length())%2==0)
			 	printf("EVEN\n");
			 else
			 		printf("ODD\n");
		}
		 else
		  cout<<"NO\n";


		}
	
		return 0;

}