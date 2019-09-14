#include <iostream>
using namespace std;

int findGCD (int n1, int n2){
    int dividend, divisor, remainder= 0;
    if (n1==n2){
        return n1;
    }
    else if(n1>n2){
        dividend=n1;
        divisor=n2;
    }
    else{
        dividend=n2;
        divisor=n1;
    }

    remainder= dividend%divisor;
    if (remainder==0){
        return divisor;
    }

    while (remainder!=0){
        dividend=divisor;
        divisor=remainder;
        remainder=dividend%divisor;
    }
    return divisor;
}


int main (){
    int inp1, inp2, ans=0;
    cout<<"Enter the 2 numbers whose GCD you want to find with a space in between ";
    cin>>inp1>>inp2;
    ans= findGCD(inp1, inp2);
    cout<< ans;
    return 0;
}
