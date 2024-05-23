#include<stdio.h>
void getdata(int a,int b)
{
    printf("sum:%d",a+b);
    
}
void getsub(int a,int b)
{
	printf("/nsub:%d",a-b);
}
void getmul(int a,int b)
{
	printf("/nmul:%d",a-b);
}


main()
{
	int n1,n2;
	printf("enter namber1:");
	scanf("%d",&n1);
	printf("enter namber2:");
	scanf("%d",&n2);
	getdata(n1,n2);
	getsub(n1,n2);
	getmul(n1,n2);
}
