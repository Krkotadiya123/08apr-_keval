#include<stdio.h>
main(){
	int a,b;
	char choice;
	printf("enter namber a:");
	scanf("%d",&a);
	printf("enter namber b:");
	scanf("%d",&b);
	printf("enter namber ");
	scanf("%d",& choice);
	switch(choice)
	{
	  case '+':
	  printf("%d",a+b);
	  break;
	  	
	 case '-':
	 printf("%d",a-b);
	 break;
	 
	 case '*':
	 printf("%d",a*b);
	 break;
	  
	  case'/':
	  	printf("%d",a/b);
	  break;
	}
}
