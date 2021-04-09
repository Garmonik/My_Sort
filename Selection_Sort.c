#include <stdio.h>
#include <malloc.h>
 
int main()
{
    int size;
  
    printf("Input size: ");
    scanf_s("%d", &size);
  
    int* array;
    array = (int *)malloc(size * sizeof(int));
  
    printf("Input the array elements:\n");
  
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
  
    //сортировка методом выбора
    int minPosition, tmp;
 
    for (int i = 0; i < size; i++)
    {
        minPosition = i;
      
        for (int j = i + 1; j < N; j++)
            if (array[minPosition] > array[j])
                minPosition = j;
      
        tmp = array[minPosition];
        array[minPosition] = array[i];
        array[i] = tmp;
    }
 
    printf("Sorted array:\n");
  
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
  
    free(array);
    return 0;
}
