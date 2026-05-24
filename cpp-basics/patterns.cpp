#include<iostream>
using namespace std;
int main() {

// Patterns :

/* int n;
cin>>n;

int i = 1;

while(i<=n) {      // i=row , j= column // no. of times loop will run for e.g. n=4 then 1,2,3,4 
 int j = 1;
 while(j<=n) { // no. of row= no. of columns=n
    cout<<"*";
    j = j+1; // otherwise it'll run in infinite loop
  } 
  cout<<endl;
  i = i+1; // same infinite loop condition
}
*/

int n;
cin>>n;

int i = 1;

while(i<=n) {      // i=row , j= column // no. of times loop will run for e.g. n=4 then 1,2,3,4 
 int j = 1;
 while(j<=n) { // no. of row= no. of columns=n
    cout << i;      
    j = j+1; // otherwise it'll run in infinite loop
  } 
  cout<<endl;
  i = i+1; // same infinite loop condition
   } 
}