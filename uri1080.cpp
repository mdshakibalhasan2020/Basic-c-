#include<bits/stdc++.h>
using namespace std;
int main(){
    int maxi=0,arr[102],pos;
    for(int i=0;i<100;i++){
        cin >> arr[i];
    }
    for(int i=0;i<100;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
            pos = i+1;

        }
    }
    cout <<  maxi << "\n";
    cout <<  pos << "\n";
}
