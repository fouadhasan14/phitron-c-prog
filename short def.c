


#include <stdio.h>

int main()
{
    int arr[100];
    int arr2[100];
    int i, j, num, temp,temp2;

    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr2[i]);
    }
    /*   Bubble sorting begins */
    for (i = 0; i < num; i++)
    {
        for (j = 0; j<(num-i-1); j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (i=0; i<num; i++)
    {
        for (j = 0; j < (num-i-1); j++)
        {
            if (arr2[j] < arr2[j + 1])
            {
                temp2 = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp2;
            }
        }
    }
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]-arr2[i]);
    }

}
