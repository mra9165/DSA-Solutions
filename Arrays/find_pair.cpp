#include <bits/stdc++.h>
using namespace std;
findpairs(vector<int>&v,int element){
    int size=v.size();
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(v[i]+v[j]==element){
                pairs++;
            }
        }
    }
    return pairs;
}
int main(){
    vector<int>v(6);
    //{2,3,1,6,7,4}
    cout<<"Enter the number of elemenst of a vector:";
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int element;
    cout<<"Enter the element:";
    cin>>element;
    int numofpairs= findpairs(v,element);
    cout<<"num of pairs whose sum is equal to a particular element:"<<numofpairs;
    return 0;
}