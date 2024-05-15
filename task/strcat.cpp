#include<stdio.h>
#include<string.h>
main()
{
	char fname[10],lname[5];
	printf("enter your fname:");
	scanf("%s",fname);
	printf("/nstring name:%s",fname);
	printf("\nenter your lname:");
	scanf("\n%s",lname);
	printf("\nstrcat: %s",strcat(fname,lname));	

	
	
}
