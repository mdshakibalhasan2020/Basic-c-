#include<bits/stdc++.h>
using namespace std;
int main(){
    int total_second;
    cin >> total_second;
    int hours = total_second/3600;
    int minitue = (total_second%3600)/60;
    int second = total_second%60;
    cout << hours << ":" << minitue << ":" << second << '\n';
    return 0;
}
