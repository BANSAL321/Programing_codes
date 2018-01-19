#include <stdio.h>
 int cmpfunc( const void *a , const void *b)
 	{
 		return ( *(int *)a-*(int *)b);

 	}
  void find(int a[], int n,int k)
  {					int l=0, r=n-1;
 						 while(l<r)
 						 {
 						 		 if(a[l]+a[r]==k)
 						 		 {
 						 		 	printf("Yes\n");

 						 		 	 l++;
 						 		 	 r--;

 						 		 }
 						 		 else if(a[l]+a[r]<k)
 						 		 		l++;
 						 		 	else
 						 		 		r--;
					}

  }

	 int main()
 	{
 				 int n  ; scanf("%d", &n);
 			   	int a[100000];
 			    for(int i=0; i<n; i++)
 			    scanf("%d", &a[i]);
 				printf("Enetr the element whose sum is searched \n");
 				int  k; scanf("%d",&k);

 				// brute force aprroch
				/*				for(int i=0; i<n; i++)
 								for( int j=i+1; j<n; j++)
 								{
 									 if(a[i]+a[j]==k)
 									 		{
 									 			printf("Yes\n");
 									 				return 0;
 									 		}
 								}
 					*/
 					qsort(a, n, sizeof(int), cmpfunc);
 					  find(a,n,k);

 						

return 0;

 	}