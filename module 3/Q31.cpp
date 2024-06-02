//WAP to show difference between Structure and Union.
#include <stdio.h>
#include <string.h>

struct studentdata {
    int rollno;
    char name[15];
    int age;
    char subject[10];
}stdinfo;

main(){

    stdinfo.rollno=1;
    strcpy(stdinfo.name,"keval");
    stdinfo.age=20;
    strcpy(stdinfo.subject,"b.a");
    
    printf("%d\n",stdinfo.rollno);
    printf("%s\n",stdinfo.name);
    printf("%d\n",stdinfo.age);
    printf("%s\n",stdinfo.subject);
}


