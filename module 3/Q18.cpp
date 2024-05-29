//Q.18Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
 main()
 {
 	int n[10],i,sum=0,total;
 	printf("enter namber:");
 	scanf("%d",&total);

 	for(i=0;i<total;i++){
 		printf("enter digit value:");
 		scanf("%d",&n[i]);
	 
 		sum+=n[i];
	 }
	 printf("sum of digit = %d",sum);
 }
