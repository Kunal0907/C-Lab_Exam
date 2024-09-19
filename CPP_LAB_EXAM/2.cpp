/*
Write a C++ program to accpet worker information Worker_Name,
No_Of_Hours_Worked, Pay_Rate and Salary. Write necessary functions 
to calculate and display the salary of Worker.
(Use Default values for Pay_Rate Rs. 500 per hours)
*/
#include<iostream>
using namespace std;
class Worker{
	private:
		string worker_name;
		float no_of_hours,pay_rate,salary;
	public:
		Worker(string n,float hrs,float sal,float rate=500){
			worker_name=n;
			no_of_hours=hrs;
			salary=sal;
			pay_rate=rate;
		}
		void process(){
			for(int i=1;i<=no_of_hours;i++){
				salary+=pay_rate;
			}
		}
		void display(){
			cout<<"\n"<<worker_name<<" has worked for "<<no_of_hours<<" hours , his salary after adding pay rate is: "<<salary;
		}
};
main()
{
	string name;
	float hrs,sal;
	cout<<"\nEnter name of worker: ";
	getline(cin,name);
	cout<<"\nNumber of hours worked: ";
	cin>>hrs;
	cout<<"\nEnter salary of worker: ";
	cin>>sal;
	cout<<"\n------------------------------------"<<endl;
	cout<<"\nSalary of "<<name<<" is: "<<sal;
	cout<<"\n------------------------------------";
	Worker obj1(name,hrs,sal);
	obj1.process();
	obj1.display();
}