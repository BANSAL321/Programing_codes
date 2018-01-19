#include <bits/stdc++.h>

using namespace std;

int gemstones(vector <string> arr){
     int a[27]={0};
      int count=0;
      

       for (int i = 0; i < arr.size(); ++i)
       {        string s=arr[i];
                sort(s.begin(), s.end());
                int l=s.length();

                   for (int i = 0; i < l; ++i)
                    {  if(s[i]!=s[i+1])
                       a[s[i]-96]++;
                    }
    }

          for (int i = 1; i < 27; ++i)
          {
               if(a[i]==arr.size())
               {     
                       count++;  
               }
        }
return count;

}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = gemstones(arr);
    cout << result << endl;
    return 0;
}
