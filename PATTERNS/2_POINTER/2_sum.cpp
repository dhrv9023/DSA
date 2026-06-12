#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,5,7};
    int target =6;
    sort(arr.begin(),arr.end()); // only needed when finding the numbers in 2 sum
    int i = 0;
    int j = arr.size()-1;
    while(i <j){
        if (arr[i]+arr[j]==target){
            cout<< i << j << endl;
            break;
        }
        else if (arr[i]+arr[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
}