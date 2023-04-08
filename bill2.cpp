#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

int main();
void show_data(int searchkey);     
void get_data(int i);         
void search_product(int searchkey);
void add_product();     
void edit_product(int idnumber);      
void fullscreen();
int totalitems;

struct product   
{ 
  int itemno; 
  string productname;
  int qty;
  float amount;
};
product rec[50];


int main(){	

	system("CLS");
	system("color F0");
	int choice; 
	int idnumber; 
	int searchkey;
	
	string firmname ="JBS SHOP";
	cout<<"**************************"<<firmname<<"**************************"<<endl;
		
	time_t now = time(0);
	char* dt =ctime(&now);
	tm* ltm=localtime(&now);
	
	cout<<"Date: "<<ltm->tm_mday;
	cout<<"-"<<1+ ltm->tm_mon;
	cout<<"-"<<1900+ ltm->tm_year<<endl;
	
	switch(ltm->tm_wday){
		
		case 1:
		cout<<"Day: Monday";
		break;
		
		case 2:
		cout<<"Day: Tuesday";
		break;
			
		case 3:
		cout<<"Day: Wednesday";
		break;
		
		case 4:
		cout<<"Day: Thurday";
		break;	
		
		case 5:
		cout<<"Day: Friday";
		break;
		
		case 6:
		cout<<"Day: Saturday";
		break;
		
		case 7:
		cout<<"Day: Sunday";
		break;
	}
	cout<<endl<<"Invoice no."<<ltm->tm_mday;
	cout<<"0"<<1+ ltm->tm_mon;
	cout<<"0"<<1900+ ltm->tm_year;
	cout<<"0"<<ltm->tm_hour;
	cout<<"0"<<ltm->tm_min;
	cout<<ltm->tm_sec;
		
	cout<<endl<<endl<<"********************************************************************"<<endl;
	
	cout<<"Enter The Total Number of Items(s)- Max 50: ";
	cin>>totalitems;	

	while (totalitems--)
	{
		cout<<"\n\t\tWhat do you want to do?"<<endl;
		cout<<"\t\t------------------------------"<<endl;
		cout<<"\t\t1-Add Product"<<endl;
		cout<<"\t\t2-Edit Product"<<endl;
		cout<<"\t\t3-Search Product"<<endl;
		cout<<"\t\t4-Quit Program"<<endl;
		cout<<"\t\t------------------------------"<<endl;
		cout<<"Enter yout choice: ";
		
		cin>>choice;
		switch(choice)
		{
			case 1:
			add_product();
			break;
			
			case 2:
			if (rec[0].itemno==0){
				 cout<<"Please Add Product first."<<endl;
  					system("pause");
					main();
			}
			
			
		}

	}
	
	
}
		
