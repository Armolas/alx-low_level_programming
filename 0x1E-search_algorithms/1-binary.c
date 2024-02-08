#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: the array to search
 * @size: size of the array
 * @value: the value to search for
 * Return: index of the value
*/
int binary_search(int *array, size_t size, int value){
    int low, high, m, i;

    low = 0;
    high = size - 1;
    m = size;
    if (array == NULL || size == 0)
        return (-1);
    while (low <= high){
        m = (low + high) / 2;
        printf("Searching in array: ");
        for (i = low ; i < high ; i++){
            printf("%d, ", array[i]);
        }
        printf("%d\n", array[i]);
        if (array[m] < value){
            low = m + 1;
        }
        else if (array[m] > value)
        {
            high = m - 1;
        }
        else{
            return (m);
        }
        
    }
    return (-1);
}
