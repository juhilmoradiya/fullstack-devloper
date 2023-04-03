#include <iostream>
#include <ctime>

using namespace std;

int main(){
	
	
	string firmname ="JBS SHOP";
	cout<<"**************************"<<firmname<<"**************************"<<endl;
	int ItomNo,Productname,Qyt,Amount;
	
	
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
		
		
		
		cout<<endl<<endl<<"ItomNo."<<"*********"<<"Productname"<<"********"<<"Qyt"<<"********"<<"Amount";
		
		cout<<endl;
		cin>>ItomNo;
		cout<<"---------------";
		cin>>Productname;
		cout<<"---------------";
		cin>>Qyt;
}

