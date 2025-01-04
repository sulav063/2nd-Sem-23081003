#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout << "Enter the first_number: ";
    cin >> num1;
    cout << "Enter the second_number: ";
    cin >> num2;
    /*sum of two numbers*/
    int sum = num1+num2;
    cout<<"the sum is:";
    cout<<sum<<endl;
    /*subtraction of two numbers*/
    int diff= num1-num2;
    cout<<"the difference is:";
    cout<<diff<<endl;
    /*division of two numbers*/
    double div=(double) num1/num2;
    cout<<"the remainder is:";
    cout<<div<<endl;
    /*multiplication of two numbers*/
    double mul=(double) num1*num2;
    cout<<"the product is :";
    cout<<mul;
    return 0;
}
