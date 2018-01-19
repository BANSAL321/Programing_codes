#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
         string r=s;
           string s1="Funny";
           string  s2= "Not Funny";
          reverse(r.begin(), r.end());
         int len=s.length();
          int flag=0;


    for (int i = 0; i < len-1; ++i)
    {
         if(abs(s[i]-s[i+1])==abs(r[i]-r[i+1]) )
            continue;
            else
            {    flag=1;      
                break;
            }
    }

     if(flag)
        return s2;
        else
            return s1;


}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}
