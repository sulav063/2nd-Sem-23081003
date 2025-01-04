/*Imagine a ticket selling booth at a fair. People passing by are requested to purchase a ticket. A
ticket is priced at rs 2.50. the booth keeps track of the number of people that have visited the
booth, and of the total amount of money collected.
Model this ticket selling booth with a class called ticketbooth including following members.
Data members: number of people visited, total amount of money collected
Member functions:

i) Default constructor
ii) Static method to increment people who only visited, ticket is not sold
iii) Static method to increment people who purchased ticket and amout
iv) To display all data (number of peple visited, total ticket sold, total
amount collected*/
#include<iostream>
using namespace std;
class TicketBooth{
	static int numPeopleVisited;
	static int numTicketsSold;
	static float totalAmountCollected;
	public:
	TicketBooth(){};
	static void visitor(){
		numPeopleVisited++;
	}
	static void ticketsSold(){
		numTicketsSold++;
		totalAmountCollected+=2.5;
	}
	static void displayData(){
		cout<<"The total number of visitors is : "<<numPeopleVisited<<endl;
		cout<<"The total number of tickets sold is : "<<numTicketsSold<<endl;
		cout<<"The total amount collected id : "<<totalAmountCollected<<endl;
	}
};
int TicketBooth::numPeopleVisited = 0;
int TicketBooth::numTicketsSold = 0;
float TicketBooth::totalAmountCollected = 0.0;
int main(){
	int i=0,j=0;
	int userInpVisitor,userInpTicsSold;
	cout<<"Enter number of Visitors : ";
	cin>>userInpVisitor;
	cout<<"Enter number of Sold Tickets : ";
	cin>>userInpTicsSold;
	
	for(i;i<userInpVisitor;i++){
		TicketBooth::visitor();
	}
	for(j;j<userInpTicsSold;j++){
		TicketBooth::ticketsSold();
	}
	TicketBooth::displayData();
	return 0;
}
