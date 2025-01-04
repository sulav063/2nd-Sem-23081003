//qn16
#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	float cost=500;
	int o;
	cout<<"Enter your name :";
	cin>>name;
	cout<<"Electricity Consumption :";
	cin>>o;
	int c=o;
	if ((100-o)>=0){
		cost=cost+0.4*0;
	}
	else if((o-100)>0 && (300-o)>=0)
	{
		cost=cost+0.4*100+0.5*(o-100);
	}
	else{
		cost=cost+0.4*100+0.5*200+0.6*(o-300);
	}
	if(cost>250){
		cost=cost+0.15*cost;
	}
	cout<<"Name:"<<name<<endl;
	cout<<"Total cost:"<<cost<<endl;
	return 0;
}
