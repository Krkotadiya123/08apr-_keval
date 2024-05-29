#include<stdio.h>
main()
{
	FILE *fl;
	
	int id[5];
	int a;
	char nm[20][10];
	fl=fopen("studentdata.txt","a");
	printf("enter total student:");
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
	printf("enter studentid:");
	scanf("%d",&id[i]);
	printf("enter student name:");
	scanf("%s",&nm[i]);
		fprintf(fl,"\n Id=%d",id[i]);
		fprintf(fl,"\n name=%s",nm[i]);
	}
	
	
}
