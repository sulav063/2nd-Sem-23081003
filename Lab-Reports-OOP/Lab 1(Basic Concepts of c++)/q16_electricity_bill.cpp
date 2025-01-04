/*An electricity board charges the following rates to domestic users to discourage large
consumption of energy:
For the first 100 units -- 40paisa per unit
For next 200 units – 50 p per unit
Beyond 300 units -- 60p per unit
If the total cost is more than Rs 250 then an additional surcharge of 15% is added. All
users are charged a minimum of Rs 500. Write a program to read the names of users
and number o units consumed and print out the charges with names.*/
/*An electricity board charges the following rates to domestic users to discourage large
consumption of energy:
For the first 100 units -- 40paisa per unit
For next 200 units – 50 p per unit
Beyond 300 units -- 60p per unit
If the total cost is more than Rs 250 then an additional surcharge of 15% is added. All
users are charged a minimum of Rs 500. Write a program to read the names of users
and number o units consumed and print out the charges with names.*/
#include<iostream>
using namespace std;
int main(){
    string name;
    int units;
    float total_charges;
    int minimum_charge= 500;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter unit consumed: ";
    cin>>units;
    if(units<=100){
        total_charges=(units*0.4);
        
    }
    else if(units<=300){
        total_charges=(units*0.5);
        
    }
    else{
        total_charges=(units*0.6);
        
    }
    if(total_charges>250){
        total_charges= (total_charges-250)*0.15 +total_charges;
    }
    cout<<"  ";
    
    cout<<"Name : "<<name<<endl;
    cout<<"  ";
cout<<"Total cost is :"<<total_charges+minimum_charge;
return 0;
    

}