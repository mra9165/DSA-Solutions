#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(8);
    cout<<"Enter the elements of the vector: ";
    cout<<endl;
    for(int i=0;i<8;i++){
        cin>>v[i];
    }
    int element;
    cout<<"Enter the element:";
    cin>>element;
    int count=0;
    //v={4,5,9,8,1,5,6,5}
    for(int i=0;i<v.size();i++){
        if(v[i]==element){
            count++;
        }
    }
    cout<<"No. of occurences of a particular element:"<<count;
    
    return 0;
}