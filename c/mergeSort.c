#include <stdio.h>

void merge(int *array, int start, int mid, int end)
{
    int left_length = mid - start + 1;
    int rigth_length = end - mid;
    int left_array[left_length];
    int rigth_array[rigth_length];

    for (int i = 0; i < left_length; i++)
    {
        left_array[i] = array[start + i];
    }
    for (int j = 0; j < rigth_length; j++)
    {
        rigth_array[j] = array[mid + 1 + j];
    }

    int i = 0, j = 0;
    int k = start;

    while (i < left_length && j < rigth_length)
    {
        if (left_array[i] <= rigth_array[j])
        {
            array[k] = left_array[i];
            i++;
        }
        else
        {
            array[k] = rigth_array[j];
            j++;
        }
        k++;
    }

    while (i < left_length)
    {
        array[k] = left_array[i];
        i++;
        k++;
    }
    while (j < rigth_length)
    {
        array[k] = rigth_array[j];
        j++;
        k++;
    }
}

void mergeSort(int *array, int start, int end)
{
    if (end <= start)
    {
        return;
    }
    int midpoint = (start + end) / 2;
    mergeSort(array, start, midpoint);
    mergeSort(array, midpoint + 1, end);
    merge(array, start, midpoint, end);
}

int main()
{
    int start = 0;
    int end;
    printf("Enter the size of the array: ");
    scanf("%d", &end);
    int array[end];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < end; i++)
    {
        scanf("%d", &array[i]);
    }
    mergeSort(array, start, end - 1);
    printf("Sorted array: ");
    for (int i = 0; i < end; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}