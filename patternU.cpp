#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,cnt=1;
    cin >> n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout << cnt++ << "\t";
        }
        cout<<"\n";
    }

}
