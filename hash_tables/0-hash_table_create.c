#include "hash_tables.h"
/**
 *hash_table_create - function that creates a hash table
 *@size: size of the array
 *Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int a;

	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * table->size);

	a = 0;

	while (a < table->size)
	{
		table->array[a] = NULL;
		a++;
	}

	return (table);
}
