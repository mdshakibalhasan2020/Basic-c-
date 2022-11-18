#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
           cout << col;
        }
        cout << "\n";
    }
    for(int row=n;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout << col;
        }
        cout << "\n";
    }

}
