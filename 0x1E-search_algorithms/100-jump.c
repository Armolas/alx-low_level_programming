#include "search_algos.h"

/**
* jump search - searches for a value in a sorted array of
* integers using the Jump search algorithm
* @array: the array to be searched
* @size: size of the array
* @value: the value to find
* Return: thin index of the value or -1
*/
int jump_search(int *array, size_t size, int value){
    size_t i, j;
    int jump;

    if (array == NULL || size == 0)
        return (-1);
    jump = (int)sqrt(size);
    for (i = 0 ; i < size ; i += jump){
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] >= value)
            break;
    }
    printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
    for (j = i - jump ; j <= i && j < size ; j++){
        printf("Value checked array[%ld] = [%d]\n", j, array[j]);
        if (array[j] == value)
            return (j);
    }
    return (-1);
}