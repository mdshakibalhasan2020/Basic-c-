#include<bits/stdc++.h>
using namespace std;
int main(){
    int number,guess;
    srand(time(NULL));
    number = rand()%10+1;
    do{
        cout << "enter the number (1 to 10): ";
        cin >> number;
        if(number > guess) cout << "the number is big"<< "\n";
        else{
            cout << "the number less" << "\n";
        }
    }while(number != guess);
    cout << "the number is correct" << "\n";

}
