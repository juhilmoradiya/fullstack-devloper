#include <stdio.h>
#include <string.h>
struct book{
		
		char name[50];
		float MRP;
		int pages;
		
	};
	
void main(){
	
	struct book book1;
	strcpy(book1.name, "Some text");
	
//	union laptop{
//		char caumpany[50];
//		float MRP;
//		int dis;
//	}laptop1;
	
//	struct book1={"C lang",80.90,79};
	//struct book1;
//	book1.name[50] = "c lang";
	book1.MRP = 100.25;
//	book1.pages = 50;
printf("%.2f",book1.MRP);
printf("%s",book1.name);
	//union lapto1={"Dell",55599.99,10};
	
//	printf("book:\n name:%s\n MRP:%f pages:%d",book.name,book.MRP,book.pages);
}
