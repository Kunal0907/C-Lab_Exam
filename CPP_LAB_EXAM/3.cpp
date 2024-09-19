/*
Create a class named Fruit with a data member to calculate the number of fruits in a basket. Create two
other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
Print the number of fruits of each type and the total number of fruits in the basket.(Inheritance)
*/
#include<iostream>
using namespace std;
class Apples{
	public:
		int show_A(int apple){
			cout<<"\nTotal apples present in basket are: "<<apple;
			cout<<"\n---------------------------------------";
		}
};
class Mangoes{
	public:
		int show_M(int mango){
			cout<<"\nTotal mangoes present in basket are: "<<mango;
			cout<<"\n---------------------------------------";
		}
};
class Fruits:public Apples,Mangoes
{
	private:
		int total=0;
	public:
		void process(int apple,int mango)
		{
			Apples::show_A(apple);
			Mangoes::show_M(mango);
			total=apple+mango;
		}
		void display(){
			cout<<"\nTotal fruits in basket are: "<<total;
		}
};
main()
{
	int a,m;
	cout<<"\nEnter apples present in basket: ";
	cin>>a;
	cout<<"\nEnter mangoes present in basket: ";
	cin>>m;
	Fruits obj;
	obj.process(a,m);
	obj.display();
}
