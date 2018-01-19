#include <stdio.h> 

 	  int power( int a, int b,int n)
 	  	{
 	  			 if(b==0) return 1;
 	  			else if(b%2==1) return (a*(power((a*a)%n,b/2,n)))%n;
 	  			 else return power(((a*a)%n,(b)/2,n));

		}
		
 
 int main()
 	{
 			   int a,b,n;
 			  scanf("%d %d %d",&a,&b,&n);
 			  printf("%d", power(a,b,n));

	}