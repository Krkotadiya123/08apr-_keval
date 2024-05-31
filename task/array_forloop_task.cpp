#include<stdio.h>
main()
{
	char nm[5][10];
	int n,i,id[5];
	printf("enter  total student: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter your id:");
		scanf("%d",&id[i]);
		printf("enter your nm:");
		scanf("%s",&nm[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("id[%d]=%d",i,id[i]);
		printf("nm[%d]=%s",i,nm[i]);
	}
	
}
