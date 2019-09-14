#include <iostream>

using namespace std;

long fact (int n){
    long currnum=1;
    for (int i=1; i<=n; i++){
        currnum=currnum*i;
    }
    return currnum;
}

int main()
{
    int inp;
    long ans;
    cout << "Enter number whose factorial you want to calculate" << endl;
    cin>> inp;
    ans=fact(inp);
    cout<<ans;
    return 0;
}
