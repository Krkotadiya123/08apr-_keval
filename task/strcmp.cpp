#include<stdio.h>
#include<string.h>
main()
{
	char str[8],str1[6];
	printf("\nenrtr your string:");
	scanf("\n%s",str);
	printf("sting:%s",str);
	printf("\nenter your string1:");
	scanf("\n%s",str1);
	printf("\nstring1: %s",str1);
	if(strcmp(str,str1)==0)
	{
		printf("same");
		
	}
	else
	{
		printf("not same");
	}
}

