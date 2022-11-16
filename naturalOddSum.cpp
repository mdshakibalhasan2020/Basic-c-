
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin >> n;
    for(int i=1;i<=n;i+=2){
        sum = sum+i;
    }
    cout << sum;
}
