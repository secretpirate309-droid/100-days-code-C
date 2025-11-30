#include<stdio.h>


//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.


int main() 
{
    FILE *file;
    int num, count = 0;
    int sum = 0;
    float avg;
    file = fopen("numbers.txt", "r");
    if (file == NULL) 
    {
        printf("Error\n");
        return 1;
    }
    while (fscanf(file, "%d", &num) == 1) 
    {
        sum = sum + num;
        count++;
    }
     fclose(file);
    if (count == 0) 
    {

        printf("No numbers found in the file.\n");
        return 0;
    }

    avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}