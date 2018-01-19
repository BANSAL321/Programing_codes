	 #include <bits/stdc++.h>
	 using namespace std;
	  int main(int argc, char const *argv[])
	  {
	  	 int t; cin>> t;

	  	 	  while(t--)
	  	 	  {	
	  	 	  	int n, nof5=0, nof3=0; cin>>n;
	  	 	  		
	  	 	  		for (int i = 0; i < 1000; ++i)
	  	 	  	  	{
	  	 	  	  			 if((n-5*i)>=0)
	  	 	  	  		 	{	
	  	 	  	  		 		if((n-5*i)%3==0)
		  	 	  				{
		  	 	  					nof5=n-5*i;
		  	 	  				 	nof3=5*i;
		  	 	  				}
		  	 	  				 break;
		  	 	  			}
		  	 	  	}
	  	 				 


	  	 			

	  	 			 if (nof5==0&&nof3==0)
	  	 			  printf("-1");

	  	 			  else
	  	 			 {
	  	 			 	for (int i = 0; i < nof5; ++i)
	  	 			 	{
	  	 			 		printf("5");
	  	 			 	}
	  	 			 	for (int i = 0; i < nof3; ++i)
	  	 			 	{
	  	 			 		printf("3");
	  	 			 	}


	  	 		  }
	 				 cout<<endl;


	  	 	  }
	  	return 0;
	  }