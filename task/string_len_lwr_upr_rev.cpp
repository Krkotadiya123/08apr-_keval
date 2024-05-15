#include<stdio.h>
#include<string.h>
main()
{
	char str[10];
	printf("enter your name:");
	scanf("%s",str);
	printf("/nstring name:%s",str);
	
	printf("\nlenth: %d",strlen(str));
	printf("\nlower: %s",strlwr(str));
	printf("\nupper: %s",strupr(str));
	printf("\nreverse: %s",strrev(str));
	
	
}
