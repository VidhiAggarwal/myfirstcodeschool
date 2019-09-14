#include<iostream>
using namespace std;

printPattern(int N){
    int n2=N/2;
    int n1= N-n2;

    for (int row=1; row<= n1; row++){
        for (int col=0; col < n1-row ; col++){
            cout<<" ";
        }
        for (int col=0; col< (2*row-1); col++){
            cout<<"*";
        }
        cout<<endl;
    }
    int starsCount=N-2;
    for (int row=1; row<=n2; row++){
        for (int col=0; col< row; col++){
            cout<<" ";
        }
        for (int col=0; col< starsCount; col++){
            cout<<"*";
        }
        cout<<endl;
        starsCount-=2;
    }
}

int main(){
    int inp=0;
    cout<<"Enter N- should be odd ";
    cin>>inp;
    if (inp%2==0){
        cout<<" Enter odd n- ERROR ";
    }
    else{
        printPattern(inp);
    }
    return 0;
}
