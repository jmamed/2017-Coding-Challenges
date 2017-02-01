#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


#In this challenge, we're practicing reading input from stdin and printing output to stdout.
#Read 3 numbers from stdin and print their sum to stdout.

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    int b;
    int c;
    
    cin >> a ;
    cin >> b ;
    cin >> c ;
    
    cout << a+b+c << endl;
    return 0;
}

#Today, we're learning and practicing an algorithmic concept called Recursion.
#Write a factorial function that takes a positive integer, N as a parameter and pritns the results of N!

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n) {
    if (n>1) {
        return n*factorial(n-1);
    }
    else {
        return 1;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;    
    cout<<factorial(n);
    return 0;
}