//WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array
#include<stdio.h>
main(){
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("\nenter the matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	
		
			scanf("%d",&a[i][j]);	
		}
	}
	printf("\nenter the 2st matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			scanf("%d",&b[i][j]);
			
		}
	}
printf("\nthe first matrix is:\n");
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
	
		
	}
	printf("\nthe second matrix is:\n");
	for(i=0;i<2;i++){
		printf("\n");
	 for(j=0;j<2;j++){
	 	printf("%d\t",b[i][j]);
	 }
	
	}
	printf("\n add matrix is:");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);	
		}
		
	}	
	
		printf("\n add matrix is:");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);	
		}
		
	}	
	
		printf("\n add matrix is:");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf("%d\t",c[i][j]);	
		}
		
	}	

}
