#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,4,7,7,5};
    int largest = 0;
    int slargest = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            slargest = largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    cout<<slargest<<endl;
}