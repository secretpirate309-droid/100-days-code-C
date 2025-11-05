#include<stdio.h>

//Find the digit that occurs the most times in an integer number in Array.


int main()
{
    int n;
    printf("Enter Number of elements in the array: ");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element : ");
        scanf("%d",&a[i]);
    }

    int freq[10] = {0};

    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        while (num > 0)
        {
            int digit = num % 10;
            freq[digit]++;
            num /= 10;
        }
    }

    int maxFreq = 0;
    int digitWithMaxFreq = -1;

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            digitWithMaxFreq = i;
        }
    }

    printf("Digit with maximum frequency: %d (Frequency: %d)\n", digitWithMaxFreq, maxFreq);
    return 0;
}


