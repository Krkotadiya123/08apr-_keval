//WAP to find factorial using recursion
#include<stdio.h>
int factorial(int num)
{
	int fact;
	if(num ==0){
		return 1;
	}
	else{
		fact =num*factorial(num-1);
		return fact;
	}
	
}
 main(){
	int num,fact;
	printf("\n enter the number:");
	scanf("%d",&num);
	fact = factorial(num);
	printf("\n factrol of %d",fact);
	
	return 0;
}


