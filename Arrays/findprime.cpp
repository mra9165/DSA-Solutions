#include <bits/stdc++.h>
using namespace std;
bool checkprime(int i){
    for(int j=2;j*j<=i;j++){
        if(i%j==0){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    int num1;
    cout<<"Enter the first number: ";
    cin>>num1;
    int num2;
    cout<<"Enter the  second number :";
    cin>>num2;
    for(int i=num1;i<=num2;i++){
        int is_prime=checkprime(i);
        if(is_prime){
            cout<<i<<" ";
        }
        
    }
    return 0;
}