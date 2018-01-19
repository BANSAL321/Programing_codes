#include <bits/stdc++.h>
using namespace std;
 int main(int argc, char const *argv[])
 {
 	 int r[] ={ 1, 2, 5, 10, 20, 50, 100, 500, 1000};
 	 int  note ; cin>> note;
 	 int size= (sizeof(r)/sizeof(int));
 	 int value=0;
 	 {
 	 		 for (int i = size-1; i>=0 ; i--)
 	 		 {
 	 		 		if(note/r[i]>0)
 	 		 		{	value+=note/r[i];
						note=note%r[i];						
					}
 	 		 }
 	 		  printf("%d\n",value);

 	 }
 	return 0;
 }