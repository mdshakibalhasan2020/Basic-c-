#include<bits/stdc++.h>
using namespace std;
int main(){
    double x1,x2,y1,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    double dif1 = (x2-x1)*(x2-x1);
    double dif2 = (y2-y1)*(y2-y1);
    double total = dif1+dif2;
    double ans = sqrt(total);
    cout << setprecision(4) << ans << "\n";


}
