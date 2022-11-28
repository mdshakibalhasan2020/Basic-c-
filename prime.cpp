#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool is_prime=0;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            is_prime = 1;
            break;
        }
    }
    if(is_prime == 0) cout << " prime";
    else cout << "not prime";
}
