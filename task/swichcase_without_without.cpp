#include<stdio.h>
void circle()
{
	int r;
	printf("area of circle:");
	scanf("%d",&r);
	printf("area of sqaure:%f",3.14*r*r);	
}
void square()
{
	int r,size;
	printf("area of square:");
	scanf("%d",&r);
	printf("are of seuare:%f",size*size);
}
void rectangle()
{
		
	int length,width;
	printf("Enter rectangle length=");
	scanf("%d",&length);
	printf("Enter rectangle width=");
	scanf("%d",&width);
	printf("\narea of rectangle:%d",length*width);
}
main()
{
	int choice;
	printf("enter choice");
	scanf("%d",choice);
	switch(choice)
	{
		case '1':
		square ();
		break;
		
		case '2':
		rectangle ();
		break;
		
	}
	
}


