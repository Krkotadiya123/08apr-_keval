#include<stdio.h>
#include<string.h>
main()
{
	char id[3],mobile[10];
	char name[10],subject[8];
	printf("enter id:");
	scanf("\n%s",id);
	if(strlen(id)>3)
	{
		printf("plase enter volid id");
		
	}
	else
	{
	
	printf("enter your name:");
	scanf("\n%s",name);
	printf("\nenter subject:");
	scanf("\n%s",subject);
	printf("\nenter your mobile namber:");

	scanf("\n%s",mobile);
	if(strlen(mobile)>10)
	{
		printf("enter  volid mobile namber");
		
	}
	else
	{
	
	
	printf("\nid :%s",id);
	printf("\nname: %s",name);
	printf("\nsubject: %s",subject);
	printf("\nmobile: %s",mobile);
	}
	}
}
