#include <bits/stdc++.h>
 using namespace std;
  int main(int argc, char const *argv[])
  {

       vector<int> a;
       vector<int> b;    
       vector<int> c;
    
         int n1, n2,n3;
         cin>>n1>>n2>>n3;
         int sum1=0, sum2=0, sum3=0;
         int x;


          for (int i = 0; i <n1; ++i)
         {   cin>>x;
             sum1+=x;
             a.push_back(x);
         }


            for (int i = 0; i <n2; ++i)
          {   cin>>x;
             sum2+=x;
             b.push_back(x);
          }

         for (int i = 0; i <n1; ++i)
         {   cin>>x;
             sum3+=x;
             c.push_back(x);
        }

          while(1)
          {
            
          }




    return 0;

  }

  