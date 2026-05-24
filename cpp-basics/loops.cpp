#include<iostream>
using namespace std;
int main() {


//loops  (first program with loops)

/* int n;
cout<<"Enter the value of n :"<<endl;
cin >> n;
int i = 1;

while(i<=n) {
    cout<<i<<" "<<endl;
    i=i+1;
} */


//addition upto n numbers

/*int n;
cout<<"Enter the number n:"<<endl;
cin>>n;

int i = 1;
int sum = 0;

while(i<=n) {
    sum = sum + i;
    i = i + 1;
}

cout<< "value of sum is" <<sum<<endl;
*/


//sum of even no

/*int n;
cout<<"Enter the number n:"<<endl;
cin>>n;

int i = 2;
int sum = 0;

while(i<=n) {
    sum = sum + i;
    i = i + 2;
}

cout<< "value of sum is" <<sum<<endl;*/


//Fahrenheit to  degree Celsius conversion


/*float f, c;

cout<<"enter the temperture in fahrenheit:"<<endl;
cin>>f;

c = (5.0/9.0)*(f-32);

cout<<"temperature in degree celsius = "<<c<<endl;  */

//program for knowing that the number is prime or not

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

