#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,1,3,4};
    for (int i=0;i<arr.size();i++){
        if (arr[i]>arr[i-1]){
            continue;
        }
        else{
            cout<<"false"<<endl;
            break;
        }
    }
}