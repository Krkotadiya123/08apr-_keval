#include<include>
int sum(int n)
{
	if(n>0)
	{
		return n+sum(n-1);
		
	}
}
main()
{
	int ans;
	ans=sum(10);
	printf("/ntotal:%d",ans);
}

