/*
Banking Record System.
File handling has been effectively used for each feature of this project
Operations
 Add Record:
 Show/List Data:
 Search Record:
 Edit Record:
 Delete Record:
*/
#include<iostream>
#include<fstream>
using namespace std;
void create()
{
		string name;
		float balance;
		int account_no;
		cout<<"\nEnter name of customer: ";
		cin>>name;
		cout<<"\nEnter balance of "<<name<<" :";
		cin>>balance;
		cout<<"\nEnter account number of "<<name<<" :";
		cin>>account_no;
		
		ofstream MyFile("Bank_Records.txt",ios::app);
		MyFile<<"---------DENA BANK---------"<<endl;
		MyFile<<"Name of customer: "<<name<<"\t";
		MyFile<<"Account number of "<<name<<" :"<<account_no<<"\t";
		MyFile<<"Balance of "<<name<<" :"<<balance<<"\t";
		
		MyFile.close();
}
void display()
{
	ifstream in("Bank_Records.txt");
	string line;
	while(getline(in,line)){
		cout<<line<<endl;
	}
	in.close();
}
void edit()
{
	ofstream File;
	File.open("Bank_Records.txt",ios::app);

	while(true)
	{
		int value;	
		string name;
		float balance;
		int account_no;
		cout<<"\nEnter name of customer: ";
		cin>>name;
		cout<<"\nEnter balance of "<<name<<" :";
		cin>>balance;
		cout<<"\nEnter account number of "<<name<<" :";
		cin>>account_no;
		
		File<<"Name of customer: "<<name<<"\t"<<"Account number of "<<name<<" :"<<account_no<<"\t"<<"Balance of "<<name<<" :"<<balance<<"\n";
		
		cout<<"\nEnter 0 if you want to exit: ";
		cin>>value;
		if(value==0)
			break;
	}
	File.close();
}
main()
{
	int ch;
	int val;
	do
	{
		cout<<"---------DENA BANK---------"<<endl;
		cout<<"\n1.Create";
		cout<<"\n2.Show";
		cout<<"\n0.Exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				edit();
				break;
			case 2:
				display();
				break;
			case 0:
				cout<<"\nThanks for visiting DENA BANK!!!";
				break;
			default:
				cout<<"\nINVALID CASE!";
		}
		cout<<"\nType 1 if you want to exit.";
		cin>>val;
	}while(val==0);
}
