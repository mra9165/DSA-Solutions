#include <bits/stdc++.h>
using namespace std;
bool check_sortedarray(vector<int>&v){
    int size=v.size();
    for(int i=1;i<size;i++){
        if(v[i]<v[i-1]){
            return false;
        }
        }
        return true;
}
int main(){
    vector<int>v(6);
    cout<<"Enter the elements of a vector:";
    //{12,18,14,15,16,17}
    for(int i=0;i<6;i++){
        cin>>v[i];
        cout<<endl;
    }
    int is_sortedarray=check_sortedarray(v);
    if(is_sortedarray){
        cout<<"The given array is sorted";
    }
    else{
        cout<<"The given array is not sorted";
    }
    return 0;
}