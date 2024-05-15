#include<stdio.h>
main()
{
	char nm[6][8],a,i;
	printf("enter total name:",a);
	scanf("%s",&a);
	for(i=0;i<a;i++){
		printf("\nenter name:",i);
		scanf("\n%s",nm[i]);
		printf("\n%s",nm[i]);
	}
}
