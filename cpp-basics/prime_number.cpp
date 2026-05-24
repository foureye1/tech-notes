#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"enter the number:"<<endl;
cin>>n;

int i=2;
while(i<n) {
    if(n%i==0) {
        cout<<"number is not prime for:" <<i<<endl;
    }
    else{
        cout<<"number is prime for:"<<i<<endl;
    } 
    i=i+1;
}
}