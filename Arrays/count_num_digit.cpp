#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int digit=0;
    while(num>0){
        digit++;
        num=num/10;
    }
    cout<<"Number of digit :"<<digit;
    return 0;
}