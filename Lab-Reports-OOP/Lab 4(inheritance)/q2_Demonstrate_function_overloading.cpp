/*Qno2:Write a program to demonstrate function overriding concept.*/
#include<iostream>
using namespace std;

class MainClass{
	public:
		void print(){
			cout<<"This is function of Main Class"<<endl;
		}
};
class BabyClass : public MainClass{
	public:
		void print(){
			cout<<"This is function of Baby Class"<<endl;
		}
};

int main(){
	BabyClass b1;
	b1.print();
	b1.MainClass::print();
	return 0;
}