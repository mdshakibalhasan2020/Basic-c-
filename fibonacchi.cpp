#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7;
    int a=0,b=1;
    cout << a << " " << b << "  ";
    for(int i=1;i<n;i++){
        int sum = a+b;
        a=b;
        b=sum;
        cout << sum << " ";
    }

}
