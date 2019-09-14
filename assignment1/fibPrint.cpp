#include<iostream>
using namespace std;

int fib(int N){
    int n1=0;
    int n2=1;
    int currsum=1;
    cout<< n1<<" "<<n2<<" ";

    // important order of steps

    while (currsum<N){
        cout<<currsum<<" ";
        n1=n2;
        n2=currsum;
        currsum=n1+n2;
    }
}

    int main(){
        int inp;
        cout<<" Enter the number till which you want to print fibonaci series : ";
        cin>>inp;
        fib(inp);
        return 0;
    }
