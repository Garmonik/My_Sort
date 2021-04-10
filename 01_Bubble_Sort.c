#include <stdio.h>
#include <malloc.h>

void swap(int* a, int* b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

    //сортировка пузырьком
void bubble_sort(int* array, int size){
    int tmp;
    bool noSwap;

    for(int i = size - 1; i >= 0; i--){
        noSwap = 1;
        for(int j = 0; j < i; j++){

            if(array[j] > array[j + 1]){
                swap(&array[j], &array[j + 1]);
                noSwap = 0;
            }
        }
        if(noSwap == 1)
            break;
    }
}

void write_sort(int* array, int size){
    printf("Sorted array:\n");

    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(){
    int size;
    printf("Input size: ");
    scanf("%d", &size);

    int* array;
    array = (int *)malloc(size * sizeof(int));
    
    printf("Input the array elements:\n");
    for(int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    bubble_sort(array, size);
    write_sort(array, size);
    
    free(array);
    return 0;
}
