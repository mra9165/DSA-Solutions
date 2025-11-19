#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5);
    cout<<"Enter the element of the vector:";
    //{5,3,8,9,6}
    for(int i=0;i<5;i++){
        cin>>v[i];
        cout<<endl;
    }
    int element;
    cout<<"Enter the element:";
    cin>>element;
    int count=0;
    for(int i=0;i<5;i++){
        if(v[i]>element){
            count++;
        }
    }
    cout<<"No. of elemnets strictly greater than element:"<<count;
    return 0;
}