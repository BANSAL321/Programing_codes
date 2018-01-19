#include <bits/stdc++.h>
  using namespace std;
   int main(int argc, char const *argv[])
 {
         int t;
        cin>>t;
         while(t--)
         {
             int space=0;
             int r=0,b=0,y=0;
            // int n; cin>>n;
             string s;
             cin>>s;
             for (int i = 0; i < s.length(); ++i)
             {
                if(s[i]==66)
                     b++;
                if(s[i]==82)
                    r++;
                if(s[i]==89)
                    y++;
                 if (s[i]==95)
                  space++;
             }
             cout<<space<<" "<<b<<" "<<r<<" "<<y;  
         }



    return 0;
 }