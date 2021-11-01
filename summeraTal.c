
#include <stdio.h>                  // standard input/output library
#include <stdlib.h>

int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main()
{
    int x;
    
    scanf("%d", &x);          
    int y[x];



    for (int i = 0; i < x; i++ ) {
        scanf("%d", &y[i]);  
    }

    qsort (y, sizeof(y)/sizeof(*y), sizeof(*y), comp);

    int result = 0;
    int elements = 0;
    if(sizeof(y) % 2 == 0){
        elements = sizeof(y)/sizeof(*y)/2;
    }else{
        elements = (sizeof(y)/sizeof(*y)+1)/2;
    }

    for (int i = elements; i < x; i++ ) {
        result += y[i];
    }

    printf("%d\n", result);              
}

