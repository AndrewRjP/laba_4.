#include <stdio.h>
#define N 100
#define NX 20

int main(void)
{
    int arr [N];
    int coef = 0;    
    int arrx [N];
    
    for (int i = 0; i < NX; i++)
        arr[i] = i;
    
    int k;    
    printf("Enter k... 0 < k < 20\n");
    scanf("%d", &k);
    
    if (k < 0 || k > 50) printf("Error\n");
    else
    {
        for (int i = k; i < NX; i++)
            printf("%d, ", arr[i]);
        for (int i = 0; i < k; i++)
            printf("%d, ", arr[i]); 
            printf("\n");
        
        for (int i = 0; i < NX; i++)
        {
            arrx[coef] = arr[i];
            if (i % 5 == 0) 
            {
                coef++;
                arrx[coef] = 0;                    
            }
            coef++;
        }
        
        for (int i = k; i >= 0; i--)
            printf("%d, ", arrx[i]);
        for (int i = coef - 1; i > k; i--)
            printf("%d, ", arrx[i]);
            printf("\n");    
    }
}

