#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        float a,b,c;
        cin >> a >> b >> c;
        float total = (a*2)+(b*3)+(c*5);
        float avg = total/(2+3+5);
        cout << setprecision(2) <<  avg << "\n";
    }
}
