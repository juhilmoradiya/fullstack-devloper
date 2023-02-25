#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=1;
	clrscr();
	printf ("Enter table Value : ");
	scanf("%d",&a);
	printf("Enter table end point:");
	scanf("%d",&b);
	do{
		printf("\n%d %d %d",a,c,a*c);
		c++;
	}while(b>=c) ;
	getch();


}