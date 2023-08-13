#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *table;

	if (ht == NULL)
		return;

	i = 0;
	while (i < ht->size)
	{
		table = ht->array[i];
		while (table != NULL)
		{
			free(table->key);
			free(table->value);
			free(table);
			table = table->next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
