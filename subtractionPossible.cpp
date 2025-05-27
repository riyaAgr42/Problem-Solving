#include <iostream>

int main() {
    int num1=777;
    int num2=111;
    int carry=0;
    int borrowCount=0;
    if(num1<num2){
        std::cout<<"Subtraction not possible";
    }
    else{
    while(num1 || num2){
        int digit1=num1%10;
        int digit2=num2%10;
        digit1-=carry;
        if(digit1<digit2){
            borrowCount++;
            carry=1;
        }
        else{
            carry=0;
        }
        num1/=10;
        num2/=10;
    }
    std::cout<<borrowCount;
    }
    return 0;
}