#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf ("Enter Value : ");
	scanf("%d",&b);

	printf("Enter Choice Number : ");
	scanf("%d",&a);
	switch(a)
	{       case 2 :
		if(b%2==0)
		{
			printf("Even");
		}
		break;
	       case 1:
		if(b%2==1)
		{
			printf("Odd Number");
		}
		break;
	}
	getch();


}


