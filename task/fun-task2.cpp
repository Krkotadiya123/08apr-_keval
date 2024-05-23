#include<stdio.h>
void getdata(int id,char nm[20])
{
	printf("\nid:%d",id);
	printf("\nname:%s",nm);
}
main()
{
	int id,i,a;
	char nm[20];
	printf("enter total student:");
	scanf("%d",&a);

	for(i=1;i<=a;i++)
	{
	  printf("\nenter id:");
	  scanf("\n%d",&id);
	  printf("\nenter name:");
	  scanf("\n%s",&nm);
	  getdata(id,nm);
	}

}
