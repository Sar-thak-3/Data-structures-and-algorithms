// ***************************QUESTION 1****************************
// In-place algorithms - In-sort algorithms do not use extra memory apart from input. It usually overwrites the input memory with output and even if it uses extra memory then also it should be small & constant. E.g - quicksort, bubble sort, heap sort etc.

// Out-place algorithms - Out-place algorithms also called not-in-place or out-of-place algorithm. In these algorithms extra space used depending on the input size. E.g - merge sort

// **************************QUESTION 2************************

#include "bits/stdc++.h"
using namespace std;

// INSERTION SORT IN IN-PLACE ALGO
void inplaceSort(vector<int> &arr,int n){
    int a,b;
    for(int i=1;i<n;i++){
        b = arr[i];
        a = i-1;
        while(a>=0 && arr[a]>b){
            arr[a+1] = arr[a];
            a = a-1; 
        }
        arr[a+1] = b;
    }
}

// INSERTION SORT IN OUT-PLACE ALGO
vector<int> outplaceSort(vector<int> arr , int n){
    vector<int> arr1(n);
    int a,b;
    for(int i=1;i<n;i++){
        b = arr[i];
        a = i-1;
        if(a==0){
            arr1[a] = arr[a];
        }
        while(a>=0 && arr1[a]>b){
            arr1[a+1] = arr1[a];
            a = a-1; 
        }
        arr1[a+1] = b;
    }
    return arr1;
}

signed main(){
    vector<int> arr = {12,11,13,5,6};
    inplaceSort(arr , 5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    arr = {12,11,13,5,6};
    vector<int> arr1 = outplaceSort(arr , 5);
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}

// **************************QUESTION 3*****************************
// In-place techniques - Changing Password 
// Out-place techniques - Deleting a node from stack