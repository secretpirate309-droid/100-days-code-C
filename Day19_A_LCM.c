#include<stdio.h>

//Q37: Write a program to find the LCM of two numbers.



int main() {
    int n1, n2;     
    int max;        
    int lcm;        
    
    printf("Enter the first positive integer (n1): ");
    
    if (scanf("%d", &n1) != 1 || n1 <= 0) {
        printf("Invalid input. Please enter a positive integer > 0.\n");
        return 1;
    }
    
    printf("Enter the second positive integer (n2): ");
    
    if (scanf("%d", &n2) != 1 || n2 <= 0) {
        printf("Invalid input. Please enter a positive integer > 0.\n");
        return 1;
    }


    if (n1 > n2) {
        max = n1;
    } else {
        max = n2;
    }

    
    lcm = max; 

   
    while (1) {
       
        if (lcm % n1 == 0 && lcm % n2 == 0) {
            
            break;
        }
       
        lcm++;
    }

    
    printf("The LCM of %d and %d is: %d\n", n1, n2, lcm);

    return 0;
}
