#include<stdio.h>
main()
{
	FILE *fl;
	int id;
	char nm[10],city[10];
	fl=fopen("stdata.txt","a");
	
	printf("enter an id:");
	scanf("%d",&id);
	printf("enter a name:");
	scanf("%s",&nm);
	printf("enter a city:");
	scanf("%s",&city);
	
	
	
	fprintf(fl,"id:%d",id);
	fprintf(fl,"\nnm:%s",nm);
	fprintf(fl,"\ncity:%s",city);
}
