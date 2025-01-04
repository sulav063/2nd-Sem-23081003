/*WAP to demonstrate namespace std object cin,cout,endl,String using
a. the :: operator
b. the using declaration
c. the using directive*/
#include<iostream>
#define pi 3.14
int main(){
    int x;
    std::cout<<"enter value of x:";
    std::cin>>x;
    std::cout<< "value of x is:"<<x<<"\n"<<"value of pi is:"<<pi;
    return 0;
}