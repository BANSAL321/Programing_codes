#include <bits/stdc++.h>

using namespace std;
int main() {
    	string s[1000];

      scanf ("%[^\n]%*c", s);
      int len=strlen(s);
       int x;
        int a[27]={0};
         int i,sum=0;

      for(i=0; i<len; i++)
      {
      		 if(s[i]>=65&&s[i]<=90)
      		 		{x=s[i]+32;
      		 		 x=x-96;
      		 		 	 if(a[x]==0)
      		 			 a[x]++;
      		 		 	continue;

   					}
   			else if( s[i]>=97&&s[i]<=122)
   					{   x=s[i]-96;
   						if(a[x]==0)
   							a[x]++;
					}

      }
        for(i=1; i<=26; i++)
             	printf("%d ",a[i]);

              if(sum==26)
              	printf("YES\n");
              	else
              		printf("NO\n");
   


    return 0;
}
