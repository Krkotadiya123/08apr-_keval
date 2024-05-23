#include<stdio.h>
int getsum()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	return a+b;	
}
void answer()
{
	int ans;
	ans=getsum();
	printf("\nsum:%d",ans);
}
main()
{
	answer();
}

