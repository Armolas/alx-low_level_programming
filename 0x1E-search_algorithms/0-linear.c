#include <stdio.h>
/**
*linear_search - searches for a value in an array of integers using the Linear search algorithm
*@array: the array to search
*@size: size of the array
*@value: value to search for in the array
*Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value){
    size_t i;

    for (i = 0 ; i < size ; i++){

        if (array[i] == value){
            return (i);
        }
        else{
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        }
    }
    return (-1);
}