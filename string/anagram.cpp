#include <bits/stdc++.h>

using namespace std;
  int min( int a , int b)
  {
  	 if (a>b)
  	 	 return b;
  	 else
  	 		return a;

  }

int makingAnagrams(string s1, string s2){
   	 int a[27]={0};
   	 int b[27]={0};
   	 	  int len1= s1.length();
   	 	  int len2= s2.length();
   	 	  	 int count=0;

   	 	   for (int i = 0; i <len1; ++i)
   	 	   a[s1[i]-96]++;

   	   for (int i = 0; i <len2; ++i)
   	 	   b[s2[i]-96]++;
   	 	
   	 		for (int i = 1; i <27 ; ++i)
   	 		{
   	 			 if(a[i]>0&&b[i]>0)
					 count+=min(a[i], b[i]);


   	 		}

    return len1+len2- 2* count;


}

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = makingAnagrams(s1, s2);
    cout << result << endl;
    return 0;
}
