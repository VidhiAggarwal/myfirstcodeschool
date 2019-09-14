#include<iostream>
using namespace std;

bool isPrime (int n){
    for (int i=2; i<=n/2; i++){
        if(n%i==0){
            return false;  // not prime
        }
    }
    return true;
}

void printPrimeNumbers(int N){
    cout<<2<<" ";
    for (int i=3; i<=N; i++){
        if (isPrime(i)==true){
            cout<<i<<" ";
        }
    }
}

int main(){
    int inp=0;
    cout<<"Enter the number till which you want to print Primes: ";
    cin>>inp;
    printPrimeNumbers(inp);
    return 0;
}
