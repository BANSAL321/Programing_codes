#include <bits/stdc++.h>

using namespace std;

string isValid(string s)
{
        string s1="YES";
        string s2="NO";
        	 int a[27]={0};
        	 for( int i=0; i<s.length(); i++)
				a[s[i]-96]++;
			
			sort(a+1,a+27, greater<int>());
			int flag =1;
			
			 	if(a[1]!=a[2])
				 a[1]--;
		  		else
		  		{
		  			  for( int i=1; i<=26; i++)
		  			  	if(a[i]==0)
		  			  	{
		  			  		if(a[i-1]==a[1-2])
		  			  			break;
		  			  		else if(a[i-1]==a[i-2]-1)
		  			  			a[i-1]++;

		  			  		break;
		  			  	}
		  	    }

		  	      for( int i=1; i<=26; i++)
		  	      		{
		  	      			if(a[i]==0)
		  	      			{
		  	      				break;

		  	      			}
		  	      			else if(a[i]==a[i+1])		  	      			
		  	      				continue;

		  	      			else
		  	      				flag=0;

		  	      		}
		  	      		  if(flag)
		  	      		  	return s2;
		  	      		  else 
		  	      		  	return s1;


			
}

int main() {
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    return 0;
}
