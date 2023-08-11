#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to update
 * @key: is the key
 * @value: value associated with the key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *node;
    unsigned int i;

    /*check that key and the new hash table are valid*/
    if (key == NULL || ht == NULL)
        return (0);

    /*calculate index for the key*/
    i = key_index((unsigned char *)key, ht->size);
    node = ht->array[i];

    /*handle collisions and update key*/
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
        {
            /*updaete the value and return success*/
            free(node->value);
            node->value = strdup(value);
            return(1);
        }
        node = node->next;
    } /*end while*/

    /*allocating memory for the new node*/
    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (0);
    
    /*set the key, value and update the linked list*/
    node->key = strdup(key);
    node->value = strdup(value);
    node->next = ht->array[i];
    ht->array[i] = node;

    return (1);
}
