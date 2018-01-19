#include <bits/stdc++.h>

using namespace std;

long theGreatXor(long x){
    // Complete this function
    
        unsigned long long i=0;
        unsigned long long val=0;
    while(x!=0){
        if((x&1)==0){
            val+=pow(2,i) ;
        }
        i++;
        x>>=1;
    }
    return val;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        long x;
        cin >> x;
        long result = theGreatXor(x);
        cout << result << endl;
    }
    return 0;
}
