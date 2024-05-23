#include<stdio.h>
struct div
{
	int id;
	char nm[10],sub[10];
		
}st[5];
main()
{
	int i,n;
	printf("enter value of name:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter yourid:");
		scanf("%d",&st[i].id);
		printf("enter your nm:");
		scanf("%s",&st[i].nm);
		printf("enter your sub:");
		scanf("%s",&st[i].sub);
	}
	for(i=1;i<=n;i++)
	{
		printf("\nid:%d",st[i].id);
		printf("\nnm:%s",st[i].nm);
		printf("\nsub:%s",st[i].sub);
	}
}
