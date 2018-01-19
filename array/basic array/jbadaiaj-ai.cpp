 #include <bits/stdc++.h>
using namespace std;
int main()
{
	/* code */
		 int n; cin>>n;
 		 int a[n];
		for( int i=0; i<n; i++)
		cin>>a[i];
		int min=a[0];
		int max_diff=a[1]-a[0];
		int first_index, final_index;


		 	 for(  int i=1; i<n; i++)
		 	{
		 		if(a[i]-min>max_diff)
		 		{max_diff=a[i]-min;
		 			final_index=i;

		 		}
		 		if(a[i]<min)
		 		{min=a[i];
		 			first_index=i;

		 		}
		 }
		 cout<<"max_diff is"<<max_diff<< endl<<"intial i "<<first_index<<endl<<"final j "<<final_index;

		 return 0;

}