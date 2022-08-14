#include <stdio.h>

#define MAX_SIZE 100 
void printArray(int arr[], int size);


int main()
{
    int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
    int size, i;

    int *source_ptr = source_arr;
    int *dest_ptr   = dest_arr;   

    int *end_ptr;

    printf("Enter size of array: \n");
    scanf("%d", &size);
    printf("Enter elements in array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (source_ptr + i));
    }
    end_ptr = &source_arr[size - 1];
    printf("\narray before copying: \n");
    printArray(source_arr, size);

    while(source_ptr <= end_ptr)
    {
        *dest_ptr = *source_ptr;
        source_ptr++;
        dest_ptr++;
    }
    printf("\narray after copying: \n");
    printArray(source_arr, size);

    return 0;
}
void printArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
