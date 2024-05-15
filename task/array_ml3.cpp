#include<stdio.h>
main()
{
	int id[5],a,i;
	char name[5][10];
	printf("enter total student:");
	scanf("%d",&a);	
	for(i=0;i<a;i++)
	{
		
		printf("\nenter your id:");
		scanf("%d",&id[i]);
		printf("\nenter student name:");
		scanf("%s",&name[i]);
		
 	
		
	}
 	for(i=0;i<a;i++)
 	{
 		
 		printf("\nstudent %d :id=%d",i+1,id[i]);
 		printf("\nstudent %d:name=%s",i+1,name[i]);
 		printf("\n--------------------------------------");
	}
}
