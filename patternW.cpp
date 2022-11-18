#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int row=n;row>=1;row--){
        for(int col=1;col<=n-row+1;col++){
            cout<< " ";
        }
        for(int col=1;col<=row;col++){
            cout << col;
        }
        for(int col=row-1;col>=1;col--){
            cout << col;
        }
        cout << " \n";
    }

}
