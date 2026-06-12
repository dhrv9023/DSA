#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {3,2,1,5,2};
    int largest = 0;
    for(int i =0;i<arr.size()-1;i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }
    cout<<largest<<endl;
}