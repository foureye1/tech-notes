#include<iostream>
using namespace std;
int main() { 
    
   /* int n;

    cin>>n;  // cin>> used for giving the input
    cout<<"value of n is :"<< n <<endl; //cout<< for the display and print
    
    if(n>0) {                //if condition 
        cout<<"n is a positive number"<<endl;
       }
        else {
        cout<<"n is a negative number"<<endl;
        } */

       /* int a,b;        
        cin>> a >> b;
        cout<<"value of a and b is :"<< a <<"\n"<< b <<endl; 

        */

       /* int j,k;
        j = cin.get();  // it gives the value of character but here we defined j as an integer type 
cout<<"value of j is:"<<j<<endl; */




/* int l,f; 
// find the greater number 

cout<<"enter the value of l:"<<endl;
cin>>l;
cout<<"enter the value of f:"<<endl;
cin>>f;

if(l>f) {
    cout<<"l is greater than f"<<endl;
}
if(f>l) {
    cout<<"f is greater than l"<<endl;
} */

// To know whether the number is positive , negative and zero 

/*   int a;
cout<<"enter the value of a:"<<endl;
cin>>a;

if(a>0) {
    cout<<"A is positive "<<endl;

}
else{
    if(a<0) {
        cout<<"A is negative"<<endl;
    }
else{
    cout<<"A is o";

        }
     } */


     // program using if-else-if

     /*   int a;
     cout<< "enter the valua of a" <<endl;
     cin>>a;

     if(a>0) {
        cout<<"A is positive"<<endl;
     }
     else if(a<0) {
    cout<<"A is negative"<<endl;
         }
    else {
    cout<<"A is 0"<<endl; 
        } */




 //Program to know the value is equal to 9 or positive and negative       

/*int a;
cout<<"Enter the value of a:"<<endl;
cin>>a;

if(a == 9)  {
      cout<<"NINEY";
}

if(a>0) {
       cout<<"POSITIVE";
}
else{
    cout<<"NEGATIVE";
}*/



/*int a = 2;
int b = a+1;

if( (a=3)==b) {
    cout<<a;
}
else{
    cout<<a+1;
}



int a = 24;

if(a > 20) {
    cout<< "LORD";
}
else if(a ==24) {
    cout<<"GOD";
}
else{
    cout<<"GODESS";
}
cout<<a; */



// char ch;
/*This is lowercase    ('a'-'z')
This is uppercase ('A'-'Z')
This is numeric ('0'-'9')*/


char ch;
cout<<"Enter the value of character:"<<endl;
cin>>ch;

if(ch >='a' && ch <='z') {
    cout<<"value is lowercase"<<endl;
}
else if(ch >= 'A' && ch<='Z') {
    cout<<"value is uppercase"<<endl;
}
else if(ch >= '0' && ch <='9') {
    cout<<"value is numeric"<<endl;
}
else{
    cout<<"Special character"<<endl;
} 

