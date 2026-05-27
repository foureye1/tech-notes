#include<iostream>
using namespace std;
int main() {

    // print pattern 1234...... 
    /*
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=n) { 
            cout<<j;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1; */



//print pattern 321....

int n;
cout<<"Enter the number:"<<endl;
cin>>n;

/* int i = 1;
while(i<=n) {
    int j = 1;
    while(j<=n) {
        cout<<n-j+1;
        j=j+1;    
    }
    cout<<endl;
    i = i + 1; 
} */


//print pattern 1234....

/* int i = 1;
int count = 1;
while(i<=n) {

    int j = 1;
    while(j<=n) {
        cout<<count<<" ";
        count = count + 1;
        j=j+1;
    } 
    cout<<endl;
    i = i + 1;
}*/


// triangle star pattern

/* int i =1;
while(i<=n) {
    int j = 1;
    while(j<=i) {
        cout<<"*";
        j = j+1;
    }
    cout<<endl;
    i = i + 1; */

// print numbers in triangle pattern 
/*
int i = 1;
while(i<=n) {
    int j = 1;
    while(j<=i) {
        cout<<i;
        j = j+1;
    }
    cout<<endl;
    i = i + 1;
}*/

/*
int i = 1;
int count = 1;
while(i<=n) { 
    int j = 1;
    while(j<=i){   // row<=col
        cout<<count; // for having the ouput of count
        count=count+1; // for increasing the numbers such as 1,2,3,4....
        j = j+1;

    } cout<<endl;
    i=i+1;
} */


// printing pattern 

/*
int i = 1;

while(i<=n) {

    int j = 1;
    int value = i;   
    while(j<=i) {
        cout<<value;
        value = value + 1;
        j=j+1;
    }
    cout<<endl;
    i = i + 1;
}   */

//Another pattern

/* int i = 1;
while(i<=n) {
    int j = 1;
    while(j<=i) {
        cout<<i-j+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1; */

//another pattern program

/* int i = 1;
while(i<=n) {  // print the character as many times as the input given by user from A-C
    int j = 1;
    while(j<=n) { 
        char ch = 'A' + i - 1;
        cout<< ch;
        j=j+1;
    }
    cout<<endl;
    i=i+1; 
   }  */

// program for a new pattern        

   /* int i = 1;
   char start  = 'A';
while(i<=n) {  // print the character as many time as the input given by user from ABC... in equal no. of rows and columns
    int j = 1;
    while(j<=n) { 
        
        cout<< start;
        start = start + 1;
        j=j+1;
    }
    cout<<endl;
    i=i+1; 
   }  */

// Another program of pattern


 /* int i = 1;
 char ch = 'A';
while(i<=n) {  // print the character as many time as the input given by user from ABC... in equal no. of rows and columns
    int j = 1;
    while(j<=n) { 
        char ch = 'A' + j - 1;
        cout<< ch ;
        
        j=j+1;
    }
    cout<<endl;
    i=i+1; 
   }  */


   // Another pattern 

  /* int i = 1;
  char start = 'A';
  

  while(i<=n) {  // program to print ABCD....as in no. of the row and column given as input 
    int j = 1;
    while(j<=n) { 
        
        cout<<start;
        start = start + 1;
        
        j=j+1;
    }
    cout<<endl;
    i=i+1; 
   }  */

   
/*int i = 1;
char ch = 'A';
while(i<=n) {
    int j = 1;
    while(j<=n) {
        char ch = 'A'+i+j-2;
        cout<<ch;
        j=j+1;
    } cout<<endl;
    i=i+1;
} */

/*int i = 1;
char ch = 'A';
while(i<=n){
    int j = 1;
    while(j<=i) {
        char ch = 'A' + i - 1;
        cout<<ch;
        j = j+1;

    } cout<<endl;
    i=i+1;
} */
  

// Another pattern 
/*int i = 1;
char value = 'A';
while(i<=n) {
    int j = 1;
    while(j<=i) {
        cout<<value;
        value=value+1;
        j=j+1;
    } cout<<endl;
    i=i+1;
} */

//Another pattern program

/*int i = 1;
char ch = 'A';
while(i<=n) {
   int j = 1;
   while(j<=i) {
    char ch = 'A'+i+j-2;
    cout<<ch;
    j=j+1;
   }cout<<endl;
   i=i+1;

} */

//Another pattern program

/* int i = 1;
char start = 'A'; //define the character 
while(i<=n) { 
    int j = 1;
    char start = 'A' + n - i;  
    while(j<=i) {
        cout<< start;
        start = start + 1;
        j = j+1;
    }cout<<endl;
    i = i+1;
}
*/
//Another pattern program 

/* int i = 1;
char start = 'A';
while(i<=n) {
    int j = 1;
    while(j<=n) {
        char start = 'A'+i+j-2;
        cout<<start;
        start = start + 1;
        j = j+1;
    }cout<<endl;
    i=i+1;
}
*/

// Another pattern program start pattern along with spaces at right side in decreasing order 

/* int i = 1;
while(i<=n) {
    int space = n-i;
    while(space) {
        cout<<" ";
        space=space-1;
    }
    int j = 1;
    while(j<=i) {
        cout<<"*";
        j = j+1;
    } cout<<endl;
    i=i+1;
} */


// homework star pattern

/* int i = 1;
while(i<=n) {
    int space = n-i;
    while(space) {
        cout<<"*";
        space=space-1;
    
    } cout<<endl;
    i=i+1;
} */


// another star pattern question 

/* int i = 1;
while (i<=n) {
    //spaces


    int space = i-1;
    while(space) {
         cout<<" ";
         space = space - 1;
         }
   
//star
    int star = n-i+1;

    while(star) {
        cout<<"*";
        star = star-1;
    }
    cout<<endl;
    i = i + 1;

      } */


      // Another pattern problem 
      /*
int i = 1;
while (i<=n) {
      int space = i-1;
    while(space) {
         cout<<" ";
         space = space - 1;
         }

         int num = n-i+1;
         while(num) {
            cout<<i;
            num = num - 1;
            
            
         }cout<<endl;
i=i+1;

        }*/



        // Another pattern 

        /*int i = 1;
while (i<=n) {
      int space = n-i;
    while(space) {
         cout<<" ";
         space = space - 1;
         }

         int num = i;
         while(num) {
            cout<<i;
            num = num -1;
            
            
         }cout<<endl;
i=i+1;

        }*/


        // Another pattern problem 
 /* int i = 1;
while (i<=n) {
      int space = i-1;
    while(space) {
         cout<<" ";
         space = space - 1;
         }

         int count = i;
         while(count<=n) {
            cout<<count;
            count = count+1;
            
            
         }cout<<endl;
i=i+1;

        }*/


        //Another pattern problem 

      /*int i = 1;
    int count = 1;

    while(i <= n) {

        // spaces
        int space = n - i;

        while(space) {
            cout << "  ";
            space = space - 1;
        }

        // numbers
        int j = 1;

        while(j <= i) {

            cout << count << " ";
            count = count + 1;

            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    } */

    int i = 1;
    while(i<=n) {
        //numbers
        int j = 1;
        while(j<=n-i+1) {
            cout<<j;
            j = j+1;
        } //star
        int star1 = 1;
        while(star1<=i-1){
            cout<<"*";
            star1 = star1 + 1;
        }
        //star
    int star2=1;
        while(star2<=i-1){
            cout<<"*";
            star2 = star2 + 1;
        }
        //number
        int num = n-i+1;
        while(num>=1){
            cout<<num;
            num=num-1;
        }
        cout<<endl;
        i=i+1;
    }
}
      
    




