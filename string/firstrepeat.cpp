#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
          int capital[27]={0};
          int small[27]={0};
          int len=s.length();
             int i;
             string n;
              for ( i = 0; i < len; ++i)
              {
                  if (s[i]>=65&&s[i]<=90)
                  {
                      // capital
                         if(capital[s[i]-64]>0)
                            {    n  =s[i];


                             break;
                         }
                         else
                            capital[s[i]-64]++;

                  }
                    else
                    {          //samll
                         if(small[s[i]-96]>0)
                                {  n =s[i];
                                    break;
                                }
                            else
                        small[s[i]-96]++;

                      }
              }
               return n;



}

int main() {
   
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    
    return 0;
}
