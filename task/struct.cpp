#include<stdio.h>
struct studinfo
{
	int rno;
	char name[10],sub[10];
	
}st,st2;
main()
{
	//studinfo st;//object of struct
	printf("enter your roll no:");
	scanf("%d",&st.rno);
	printf("enter your name:");
	scanf("%s",&st.name);
	printf("enter your subject:");
	scanf("%s",&st.sub);
	
	printf("\nrollno:%d",st.rno);
	printf("\n name:%s",st.name);
	printf("\nsubject:%s",st.sub);
	
	
	printf("\nenter sec roll no:");
	scanf("%d",&st2.rno);
	printf("\nenter sec name:");
	scanf("%s",&st2.name);
	printf("\nenter sec subject:");
	scanf("%s",&st2.sub);
	
	printf("\nrollno:%d",st.rno);
	printf("\nname:%s",st.name);
	printf("\nsubject:%s",st.sub);
}
