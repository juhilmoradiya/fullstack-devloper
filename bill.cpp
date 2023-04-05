#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

int main(){
	
	
	string firmname ="JBS SHOP";
	cout<<"**************************"<<firmname<<"**************************"<<endl;
	int Qyt,Amount,TotalProduct,Productname,TotalAmount;
	int a,x;
//	char Productname[50] = "Productname";
	

	
	
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
		
	cout<<endl<<endl<<"********************************************************************";
		
	cout<<endl<<"Enter number of Total Product :";
	cin>>TotalProduct;
	int *ItomNo = new int(TotalProduct);
	
	
	
	cout<<endl<<"Enter number of Total Product :";
	cin>>TotalProduct;
	int *arr =new int(TotalProduct);
	
	cout<<"Enter"<<TotalProduct<<"Productname"<<endl;
	
	for(Productname=0;Productname < TotalProduct;Productname++){
		cin>>arr[Productname];
		
	}
	
	cout<<"Productname :";
	for(Productname=0;Productname < TotalProduct;Productname++){
		cin>>arr[Productname]>>" ";
		


		
//	for (ItomNo[a]=1;ItomNo[a]<=TotalProduct;ItomNo[a]++){
//	   	cout<<endl<<"Enter ditels about ItomNo :"<<ItomNo[a];
//		
//	    cout <<endl<<"Enter Productname: ";
//	    cin>>Productname;
//		
//	       	cout <<endl<<"Enter Qyt: ";
//	       	cin>>Qyt;
//		
//	       	cout <<endl<<"Enter Amount of Product :";
//	       	cin>>Amount;
//	    	
//	    	   
//		}
//	cout<<endl<<endl<<"ItomNo."<<"\t"<<"\t";
//		 
//		 for(ItomNo[a]=1; ItomNo[a]<=TotalProduct;ItomNo[a]++){
//		 
//			cout<<ItomNo[a]<<"\t"<<"\t";
//		}
//		
//	cout<<endl<<endl<<"Productname.";
//
//		
//	cout<<"\t"<<Productname[a];
//
//	

    return 0;
}
