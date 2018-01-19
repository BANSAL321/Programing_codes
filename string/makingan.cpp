#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

 int max( int a, int b)
 {
 	if(a>b)
 		return a;
 	 else	
 	 	return b;

 }
				int lcs( char *s1, char *s2, int len1, int len2)
		   {	      		
		   				if(len2==0||len1==0)
	    			 	return 0;
	    			 if(s1[len1-1]==s2[len2-1])
	    			 1+lcs(s1,s2,len1-1, len2-1);
	    			 else
	    			return	max(lcs(s1,s2,len1, len2-1), lcs(s1,s2,len1-1, len2));	
	    	}

int makingAnagrams(char* s1, char* s2){
	   int len1= strlen(s1);
	  int len2 = strlen(s2);
	   int count=lcs(s1,s2,len1,len2);
		return len1+len2-2*count;

  
}

int main() {
    char* s1 = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s1);
    char* s2 = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s2);
    int result = makingAnagrams(s1, s2);
    printf("%d\n", result);
    return 0;
}
