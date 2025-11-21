#include <bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    vector<int>vect(n);
    cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++){
        cin>>vect[i];
        
    }
    bubblesort(vect,n);
    cout<<"Sorted array would be :";
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";;
    }
    return 0;
}