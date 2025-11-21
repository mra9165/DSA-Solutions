#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vect={1,2,3,4,5};
    int k;
    cout<<"Enter the steps: ";
    cin>>k;
    k=k%vect.size();
    reverse(vect.begin(),vect.end());
    reverse(vect.begin(),vect.begin()+k);
    reverse(vect.begin()+k,vect.end());
    for(int a:vect){
        cout<<a<<" ";
    }
    return 0;
}