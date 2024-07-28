#include<iostream>
using namespace std;
 int main(){
    int a,b;
    char op;
    cout<<"Enter the value of First operand:";
    cin>> a;
    cout<<"Enter the value of Second operand:";
    cin>> b;
    cout<< "Enter the operation you want to perform";
    cin>> op;

    switch(op){

        case '+' : cout<< " ADDITION OF THE OPERANDS IS :"<<(a+b) <<endl;
        break;
        case '-' : cout<< " SUBSTRACTION OF THE OPERANDS IS :"<<(a+b) <<endl;
        break;
        case '*' : cout<< " MULTIPLICATION OF THE OPERANDS IS :"<<(a*b) <<endl;
        break;
        case '/' : cout<< " DIVISION OF THE OPERANDS IS :"<<(a/b) <<endl;
        break;
        case '%' : cout<< " SUBSTRACTION OF THE OPERANDS IS :"<<(a+b) <<endl;
        break;





   }
 }