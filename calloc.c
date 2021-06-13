#include "malloc.h"

/**
 * _calloc - emulates calloc funcionality
 * @nmemb: number of elements
 * @size: size of elements
 * Return: allocated memory
*/
void *_calloc(size_t nmemb, size_t size)
{
	size_t required_size = 0;
	void *index = NULL;

	required_size = nmemb * size;
	index = _malloc(required_size);
	if (!index)
		return (NULL);
	memset(index, 0, required_size);
	return (index);
}
