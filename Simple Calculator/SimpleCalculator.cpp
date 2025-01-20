#include <iostream>
using namespace std;
int main() {
    char op;//operator variable
    double num1, num2;//Num1 and Num2 variable
    cout<<"--------LETS CALCULATE--------"<<endl;
    cout << "Enter an operator(+, -, *, /):- "<<endl;//Take input operator
    cin >> op;
    
    //Take inputs of first and second number
    cout<<"Enter First Number:-"<<endl;
    cin>>num1;
    cout<<"Enter Second Number:-"<<endl;
    cin>>num2;
    //Switch statement
    switch(op) {
        case '+':
            //Addition case
            cout<<"The addition of numbers "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
            break;
        case '-':
            //Subtraction case
            cout<<"The subtraction of numbers "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
            break;
        case '*':
            //Multiplication case
            cout<<"The multiplication of numbers "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
            break;
        case '/':
            //Division case
            if(num2 != 0)
            cout<<"The division of numbers "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;
            else
                cout << "Division by zero is not allowed"<<endl;
            break;
        default:
            cout << "Incorrect Operator is used"<<endl;//This case is executed when the operator used is not defined in the case
            break;
    }
    cout<<"*****THANK YOU*****"<<endl;

    return 0;
}

 