#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#if from 1 to 9, print one, two, three, etc
#if greater than 9, print Greater than 9.

int main(){
    int n; 
    scanf("%d",&n);
    // your code goes here
    if (n>9){
        printf ("Greater than 9");
    }
    else if (n==1){
        printf ("one");
    }
    else if (n==2){
        printf ("two");
    }
    else if (n==3){
        printf ("three");
    }
    else if (n==4){
        printf ("four");
    }
    else if (n==5){
        printf ("five");
    }
    else if (n==6){
        printf ("six");
    }
    else if (n==7){
        printf ("seven");
    }
    else if (n==8){
        printf ("eight");
    }
    else if (n==9){
        printf ("nine");
    }
    return 0;
}