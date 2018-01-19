#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int stringConstruction(char* s) {
    int a[27]={0};

                 int len= strlen(s);
                 int  count=0;


              for (int i = 0; i < len; ++i)
              a[s[i]-96]++;
              

               for (int i = 1; i < 27; ++i)
               {
                     if (a[i]>0)
                            count++;

                }

                return count;
                



    // Complete this function
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = stringConstruction(s);
        printf("%d\n", result);
    }
    return 0;
}
