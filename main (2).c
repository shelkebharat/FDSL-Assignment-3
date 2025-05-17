#include <stdio.h>

int main() 
{
    int n, i, j, temp;
    int a[10];
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        printf("pass %d: ", i + 1);
        for (int k = 0; k < n; k++) 
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
    
    printf("The sorted elements are:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
