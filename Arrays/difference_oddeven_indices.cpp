#include <bits/stdc++.h>
using namespace std;
int sumatevenidx(vector<int>&v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            sum+=v[i];
        }
    }
    return sum;

}
int sumatoddidx(vector<int>&v){
    int sum1=0;
    for(int i=0;i<v.size();i++){
        if(i%2==!0){
            sum1+=v[i];
        }
    } 
    return sum1;

}
int diffoddevenidx(vector<int>&v){
    int difference = sumatevenidx(v)-sumatoddidx(v);
    return difference;

}
int main(){
    vector<int>v(5);
    cout<<"Enter the element of the vector:";
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    cout<<"difference is :"<<diffoddevenidx(v);

    return 0;
}