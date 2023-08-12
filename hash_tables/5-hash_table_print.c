#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *table;
    char *sepa;
	/*check hash table*/
    if (ht == NULL)
        return;

    printf("{");

    sepa = "";

    i = 0;
    while (i < ht->size)
    {
        table = ht->array[i];
        i++;
        while (table != NULL)
        {
            printf("%s'%s': '%s'", sepa, table->key, table->value);
            sepa = ", ";
            table = table->next;
        }
    }
    printf("}\n");
}
