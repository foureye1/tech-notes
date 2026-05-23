#include<iostream>
using namespace std;
int main(){
   /*/ cout<<"hello world"<<endl;
    return 0;
} */

/* cout<<"hello namaste \n"; 

*/
/* cout<<"my name is unnati" ;
cout<< "\n" ;*/
int a = 123; // use to show for integer value 
cout<<a<<endl;
int b = 'd';  //ASCII value
cout<< b <<endl;
char c = 'n';  // show value in character
cout<< c <<endl;
bool b1 = true;
cout<<b1<<endl;
bool b2 = false;
cout<<b2<<endl;

float f=1.2;
cout<<f<<endl;

double d=1.24;
cout<<d<<endl;
int size = sizeof(d);  // to know the size 
cout<<size<< endl;
cout<<"size of d is :" <<size<<endl;
int e = 'e';    //  ( typecasting , string value into an integer value )
cout<< e <<endl;
char ch = 98;  //typecasting int value to char
cout<<ch<<endl;
 char ch1 = 12342;
 cout<< ch1 <<endl;

 unsigned int z = 112; // do not use -ve symbol
 cout<< z <<endl;

  // operators 
  int x = 67/6; 
  cout<< x <<endl;

  double y = 345.6/56;
  cout<< y <<endl;


  // Relational operator ( comparison operator)

  int j = 24;
  int k = 67;

  bool first = (a==b);
  cout<<first<<endl;

  bool second = (a<b);
  cout<<second<<endl;

  bool third = (a>b);
  cout<<third<<endl;

  bool forth = (a!=b);
  cout<<forth<<endl;

  int i = 26;
  cout<< !i <<endl;
return 0;
}