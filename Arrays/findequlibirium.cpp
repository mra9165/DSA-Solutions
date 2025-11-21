#include <bits/stdc++.h>
using namespace std;
//[-7,1 , 5, 2, -4, 3, 0]
int findequlibirium(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        int left_sum=0;
        int right_sum=0;
        for(int j=0;j<i;j++){
            left_sum+=arr[j];
        }
        for(int j=i+1;j<arr.size();j++){
            right_sum+=arr[j];
        }
        if(left_sum==right_sum){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the size of the vector:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the vector :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=findequlibirium(arr);
    cout<<"Equilibirium point is: "<<result;
    return 0;
}