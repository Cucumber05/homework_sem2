#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], n, i, j, position, swap, k;
    printf("Enter number of elementsn");
    scanf("%d", &n);
    printf("Enter %d Numbersn", n);

    //Selection Sort
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        for(i = 0; i < n - 1; i++){
            position=i;
            for(j = i + 1; j < n; j++){
                k++;
                if(a[position] > a[j])
                    position=j;
                }
                if(position != i)
                {
                swap=a[i];
                a[i]=a[position];
                a[position]=swap;
                
                }
    }
    

}