//documentation section 
/* Exercise 5 - 2D array */

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section 
int main(){
    
   int num[5];
   int sum = 0; 
   int i; 

   printf("Enter 5 value :\n");
       
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }

    int average = sum / 5;
    printf("Average value is %d", average); 

    return 0;
}


//user-defined section 
