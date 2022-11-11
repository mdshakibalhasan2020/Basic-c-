//sort without function.it is the bubble sort with out swap function.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin >> arr[i];

    }
    // assending oder 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){ // desending oder '<'
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << "\n";
    }
    return 0;
}


//for the sort function
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout << arr[i] << "\n";
    }

}


