#include<stdio.h>
#include<string.h>
main()
{
	char id[3],mobile[10];
	char name[10],subject[8];
	printf("enter id:");
	scanf("\n%s",id);
	printf("enter your name:");
	scanf("\n%s",name);
	printf("\nenter subject:");
	scanf("\n%s",subject);
	printf("\nenter your mobile namber:");
	scanf("\n%s",mobile);
	if(strcmp(id,mobile)==0)
	
	printf("\nid :%s",id);
	printf("\nname: %s",name);
	printf("\nsubject: %s",subject);
	printf("\nmobile: %s",mobile);
}
