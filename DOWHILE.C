#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=1;
	clrscr();
	printf ("Enter Value : ");
	scanf("%d",&a);
	do{
		printf("\n%d %d %d",a,b,a*b);
		b++;
	}while(b<=10) ;
	getch();


}