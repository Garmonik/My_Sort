#include <stdio.h>
#include <malloc.h>

int main()
{
    int size;
    printf("Input size: ");
    scanf("%d", &size);
    int* array;
    array = (int *)malloc(size * sizeof(int));
    printf("Input the array elements:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    //сортировка пузырьком
    int tmp;
    bool noSwap;

    for (int i = size - 1; i >= 0; i--)
    {
        noSwap = 1;
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                noSwap = 0;
            }
        }
        if (noSwap == 1)
            break;
    }
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
    free(array);
    return 0;
}
