#include <bits/stdc++.h>

using namespace std;

int alternatingCharacters(string s){
     int count=0;
     int len=s.length();
         for (int i = 0; i < len; ++i)
         {  
                if(s[i]!=s[i+1])
                    count++;
        }
         return len-count;


}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = alternatingCharacters(s);
        cout << result << endl;
    }
    return 0;
}
