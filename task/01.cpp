#include <stdio.h>

main() 
{
    int n = 10; 
    
    printf("Even numbers:\n");
    for (int i = 2; i <= n; i += 2)
	{
        printf("%d\n", i);
    }
    
    printf("\nOdd numbers:\n");
    for (int i = 1; i <= n; i += 2) 
	{
        printf("%d\n", i);
    }  
}

