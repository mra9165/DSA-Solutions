#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int steps;
    cout<<"Enter the steps for which you want to rotate: ";
    cin>>steps;
    int array[size];
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int n=size-steps;
    int ans[size];
    int j=0;
    steps=steps%size;
    for(int i=n;i<size;i++){
        ans[j++]=array[i];
    }
    for(int i=0;i<=steps;i++){
        ans[j++]=array[i];
    }
    cout<<"Array after rotation: ";
    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
