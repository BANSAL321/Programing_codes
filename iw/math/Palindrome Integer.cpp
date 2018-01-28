#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        int x;
        cin >> n >> m >> x;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        vector<int> b(m);
        for(int b_i = 0; b_i < m; b_i++){
           cin >> b[b_i];
        }
        // your code goes here
             int i=0,j=0;
             int sum=0;
         int     counter=0;
        
         while(1)
         {
               if(i<n||j<m)
             {   
             if(a[i]<b[j])
             {    sum+=a[i];
                    counter++;
                i++;
              
             }
             
               else 
               {
                   sum+=b[j];
                   counter++;
                   j++;
               }
                  
              if(sum>x)
                   break;
             
             
             
         }
       
        
         else
         break;
     }
         

          cout<<counter-1<<endl;
        
        
         
    }
    return 0;
}
