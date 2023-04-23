#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], n, position, swap, k;
    printf("Enter number of elementsn");
    scanf("%d", &n);
    printf("Enter %d Numbersn", n);

    //Selection Sort
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n - 1; i++){
        position = i;
        for(int j = i + 1; j < n; j++){
            k++;
            if(a[position] > a[j])
                position=j;
            }
            if(position != i){
                swap=a[i];
                a[i]=a[position];
                a[position]=swap;
            }
    }
    printf("Selection Sorted Array:");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nk=%d", k); //number of itarations
    k=0;
    swap=0;
    n=0;

    printf("\nEnter number of elementsn");
    scanf("%d", &n);
    printf("Enter %d Numbersn", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    //Bubble sort
    for (int c = 0 ; c < n - 1; c++)
    {
        for (int d = 0 ; d < n - c - 1; d++)
        {
        if (a[d] > a[d+1])
        {
            swap = a[d];
            a[d] = a[d+1];
            a[d+1] = swap;
            k++;
        }
        }
    }

    printf("\n Bubble Sorted list:\n");

    for (int c = 0; c < n; c++)
        printf("%d ", a[c]);
    printf("\nk=%d", k); //number of itarations
    return 0;

}