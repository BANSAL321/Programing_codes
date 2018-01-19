#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

string gameOfThrones(char* s){
				    
				     string s1= "YES";
				      string s2= "NO";

		   int a[27] ={0};
		   int len = strlen(s);
		    int count=0;

		   	 for (int i = 0; i <len ; ++i)
		   	 {
		   	 	a[s[i]-96]++;
			}

			 for (int i = 1; i <27 ; ++i)
			 {		if (a[i]%2==1) 
			 	    count++;
			}

	  if(count==0||count==1)
	  	 return s1;
	  	else
	  		return s2;

}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    string result = gameOfThrones(s);
    printf("%s\n", result);
    return 0;
}
