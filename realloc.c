#include "malloc.h"
/**
 *_realloc - array with the range of integer
 *@ptr: array
 *@old_size: old array size
 *@new_size: new array size
 *Return: int array with min to max
 */
void *_realloc(void *ptr, size_t size)
{
	char *array;
	unsigned int minimum, i;

	if (size == 0 && ptr != NULL)
	{
		_free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (_malloc(size));
	array = _malloc(size * sizeof(char));
	if (array == NULL)
	{
		_free(ptr);
		return (NULL);
	}
	minimum = size;
	for (i = 0; i < minimum; i++)
		array[i] = *((char *)ptr + i);
	_free(ptr);
	return ((void *)array);
}
