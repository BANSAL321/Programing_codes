#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s){
    // Complete this function

				     string s1= "YES";
				      string s2= "NO";

		   int a[27] ={0};
		   int len = s.length();
		    int count=0;

		   	 for (int i = 0; i <len ; ++i)
		   	 {
		   	 	a[s[i]-96]++;
			}

			 for (int i = 1; i <27 ; ++i)
			 {		if (a[i]%2==1) 
			 	    count++;
			}

	  if(count==0||count==1)
	  	 return s1;
	  	else
	  		return s2;

}

int main() {
    string s;
    cin >> s;
    string result = gameOfThrones(s);
    cout << result << endl;
    return 0;
}
