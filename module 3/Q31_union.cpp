
//WAP to show difference between Structure and Union.
#include <stdio.h>
#include <string.h>
union studentdata {
    int no;
    char name[15];
    int age;
    char subject[10];
}stdinfo;

main(){
	
    stdinfo.no=11;
    strcpy(stdinfo.name,"keval");
    stdinfo.age=20;
    strcpy(stdinfo.subject,"b.a");
    
    printf("%d\n",stdinfo.no);
    printf("%s\n",stdinfo.name);
    printf("%d\n",stdinfo.age);
    printf("%s\n",stdinfo.subject);
    
    
}


