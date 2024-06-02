//Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age
#include<stdio.h>

struct empdata{
	
	int empno[5],age[5];
	char name[5][10],add[5][10];
}emp;

main(){
	
	int i;
	printf("enter 5 empoloyees data  \n");
	
	for(i=1;i<=5;i++){
		
	printf("empoloyee %d >>\n",i);
	
	printf("enter emp no. : ");
	scanf("%d",&emp.empno[i]);
	
	printf("enter emp Name : ");
	scanf("%s",&emp.name[i]);
	
	printf("enter emp address : ");
	scanf("%s",&emp.add[i]);
	
	printf("enter emp age : ");
	scanf("%d",&emp.age[i]);
	
	printf("\n");
#include <stdio.h>
#include <string.h>
//WAP to show difference between Structure and Union.
struct studentdata {
    int no;
    char name[15];
    int age;
    char subject[10];
}stdinfo;

main(){
	//in structure all values are can be used .
    stdinfo.no=11;
    strcpy(stdinfo.name,"Rahul");
    stdinfo.age=20;
    strcpy(stdinfo.subject,"bca");
    
    printf("%d\n",stdinfo.no);
    printf("%s\n",stdinfo.name);
    printf("%d\n",stdinfo.age);
    printf("%s\n",stdinfo.subject);
}


	
	}	
	
	printf("\n--empoloyees data--\n");
	
	for(i=1;i<=5;i++){
		
	printf("\nempoloyee %d >>\n",i);
	printf("emp no. : %d",emp.empno[i]);
	printf("\nemp name : %s",emp.name[i]);
	printf("\nempn address : %s",emp.add[i]);
	printf("\nemp age : %d",emp.age[i]);
	printf("\n");
	
	}
}
