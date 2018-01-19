#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string m="hackerrank";
        
        // your code goes here
            int len= s.length();
            int matchlen=m.length();

                 int j=0;

                 for( int i=0; i<len; i++)
                 { if(m[j]==s[i])
                    j++;
                }
                if(j==matchlen)
                printf("YES\n");
                else
                    printf("NO\n");


    }
    return 0;
}
