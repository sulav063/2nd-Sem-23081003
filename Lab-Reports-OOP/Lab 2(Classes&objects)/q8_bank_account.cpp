/*qno8::Write a program according to the specification given below:
- Create a class Account with data members acc no, balance, and min_balance(static)
- Include methods for reading and displaying values of objects
- Define static member function to display min_balance
- Create array of objects to store data of 5 accounts and read and display values of each
object*/
#include<iostream>
using namespace std;
class Account{
	float accNo,balance;
	static float min_balance;
	public:
	void getdata();
	void display();
	static void display_min_balance(){
		cout<<"Minimum balance is :"<<min_balance<<endl;
	}
};

float Account::min_balance = 500;

void Account::getdata(){
	cout<<"Account Number :";
	cin>>accNo;
	cout<<"Balance :";
	cin>>balance;
}
void Account::display(){
	cout<<"Account Number : "<<accNo<<",";
	cout<<"Balance : "<<balance<<endl;
}
int main(){
	Account accs[5];
	int i=0;
	while(i<5){
		cout<<"Enter details of Account"<<i+1<<endl;
		accs[i].getdata();
		i++;
	}
	int j=0;
	while(j<5){
		cout<<"Account "<<j+1<<" : "<<endl;
		accs[j].display();
		j++;
	}
	cout<<endl;
	Account::display_min_balance();
	
}