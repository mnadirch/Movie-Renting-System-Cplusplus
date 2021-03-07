#include<iostream>
using namespace std;
int main(){
	cout<<"**           **  ######  **              ####   @@@@@       $$$$           $$$$  ###### "<<endl;
	cout<<"**           **  ##      **            #      @       @     $$ $$         $$ $$  ##      "<<endl; 
	cout<<"**    ***    **  ##      **          #       @         @    $$  $$       $$  $$  ## "<<endl;
	cout<<"**   ** **   **  #####   **         #        @         @    $$   $$     $$   $$  ####         "<<endl;
	cout<<"**  **   **  **  ##      **          #       @         @    $$    $$   $$    $$  ##             "<<endl;
	cout<<"** **     ** **  ##      **           #       @       @     $$      $$$$     $$  ##          "<<endl;
	cout<<"****       ****  ######  ********       ####    @@@@@       $$       $$      $$  ###### "<<endl;
	
	
	cout<<"                              *******  ***     "<<endl;
	cout<<"                                 *    *   *     "<<endl;
	cout<<"                                 *    *   *          "<<endl;
	cout<<"                                 *     ***        "<<endl;
	
	cout<<"                                 A R E N A "<<endl;
	cout<<"                                   CINEMA      " <<endl;
	cout<<endl;
    cout<<endl;
    int select ;
    int movieselect;
    int username , password;
    int rent , bill , days;
    cout<<"select your role:"<<endl;
    cout<<"1.user"<<endl;
    cout<<"2.admin"<<endl;
    cout<<"enter your select role:";
    cin>>select;
    if(select == 1){
	    cout<<"username: *\" 123 \" *"<<endl;	
    	cout<<"enter your username:";
    	cin>>username;
    	cout<<"password: $\" 1234 \"$ "<<endl;
    	cout<<"enter your password:";
    	cin>>password;
    	if(username==123 && password==1234){
    
	cout<<"LIST  OF  MOVIES  CHARACTER:"<<endl;
	cout<<"**********$$$$$$$***************"<<endl;	
	cout<<"1.Hollywood"<<endl;
	cout<<"2.Bollywood"<<endl;
	cout<<"3.Lollywood"<<endl;
	cout<<"4.Mashup song"<<endl;
	cout<<"*********************************"<<endl;
	cout<<"select your movie character:";
	cin>>movieselect;
	switch(movieselect){
		case 1 : 
	 cout<<"\n\n Enter number of days you want to rent: ";
     cin>>days;
     rent = 40;
     bill = days*rent;
     cout<<"\n Your Total Amount is: "<<bill;
     break;
		case 2:
	 cout<<"\n\n enter number of days you want to rent: ";
	 cin>>days;
	 rent = 35;
	 bill =	days*rent;
	 cout<<"\n your total Amount is:"<<bill;
	 break;
		case 3:
	 cout<<"\n\n Enter number of days you want to rent: ";
     cin>>days;
     rent = 200;
     bill = days*rent;
     cout<<"\n Your Total Amount is: "<<bill;
		break;
		case 4:
	 cout<<"\n\n Enter number of days you want to rent: ";
     cin>>days;
     rent = 50;
     bill = days*rent;
     cout<<"\n Your Total Amount is: "<<bill;
		break;
		default :
			cout<<"there is no number.";
		}	
		
	   }
	   
	   else{
	   	cout<<"there is no user and password. ";
	   }
    
       }

	else if(select==2) 
	{
	cout<<"please...log in as a user.";
	}
	
	else
	{
		cout<<" this is incorrect.";
	}	
	return 0;
}
