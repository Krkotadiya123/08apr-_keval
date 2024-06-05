#include<stdio.h>
#include<string.h>
main()
{
	int i,ch,l;
	char a[10],b[5];
	printf("main menu:\n");
	
	printf("\n1.reverse");
	printf("\n2.concatenation");
	printf("\n3.palindrome");
	
	printf("\n4.copy");
	printf("\n5.length of string");
	printf("\n6.frequency of character in s string");
	printf("\n7find number of vowels and consonats");
	printf("\n8.find number of blank space and digits");
	printf("\nseclect any ch:");
	scanf("\n%d",&ch);
	printf("enter name:");
	scanf("%s",a);
	switch(ch){
		case 1:
			printf("\nreverse:%s",strrev(a));
			
			break;
		case 2:
			printf("enter second string:");
			scanf("%s",&b);
			printf("\n concatenation:%s",strcat(a,b));
			
			break;
		case 3:
			l=strlen(a);
			for(i=0;i<l;i++){
				if(a[i]!=a[l-i-1]){
					printf("\n not palindrome");
				}
				else {
					printf("\n palindrome");
				}
				break;
			}
			
			break;
		case 4:
			strcpy(b,a);
			printf("\n%s",a);
			printf("\n%s",b);
			
			
			break;
		case 5:
				printf("\nlenth: %d",strlen(a));
			break;
		case 6:
			
			break;
		case 7:
			
			break;
		case 8:
			
			break;
	}
	
	
}
