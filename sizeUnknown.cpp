#include"bits/stdc++.h"
using namespace std;

#define n 200

int find(vector<int> vec,int target){
    int low = 0;
    int high = 1;
    while(vec[high]<target){
        low = high;
        high = high<<1;
    }
    while(low<=high){
        int mid = (low+high)/2;
        if(vec[mid]==target){
            return mid;
        }
        else if(vec[mid] > target){
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

signed main(){
    int number;
    cin>>number;
    vector<int> vec(n,INT_MAX);
    for(int i=0;i<number;i++){
        cin>>vec[i];
    }
    int target;
    cin>>target;
    cout<<find(vec,target);
    return 0;
}