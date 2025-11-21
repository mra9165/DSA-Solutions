#include <bits/stdc++.h>
using namespace std;
int largestelement(vector<int>&v){
    int size=v.size();
    int max=INT_MIN;
    int maxidx=-1;
    for(int i=0;i<size;i++){
        if(v[i]>max){
            max=v[i];
            maxidx=i;
        }
    }
    return maxidx;
}
int main(){
    //{10,8,6,14,19,2,24}
    vector<int>v={10,8,6,14,19,2,24};
    int largest_idx=largestelement(v);
    v[largest_idx]=-1;
    int second_largest=largestelement(v);
    cout<<"Second largest element in the given array is: "<<v[second_largest];
    
    return 0;
}