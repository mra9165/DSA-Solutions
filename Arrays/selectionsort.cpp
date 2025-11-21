#include <bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!=i){
            swap(arr[i],arr[min_idx]);
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>vect(n);
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i++){
        cin>>vect[i];
    }
    cout<<"Sorted array would be :";
    selectionsort(vect,n);
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }
    return 0;
}