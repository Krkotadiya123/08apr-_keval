#include<stdio.h>
main()
{
	FILE *fl;
	char str[200];
	fl=fopen("stdata.txt","r");
	//fscanf(fl,"%s",&str);
	//fgets(str,200,fl);
	while(fgets(str,200,fl))
	{
		printf("%s",str);
	}
}
