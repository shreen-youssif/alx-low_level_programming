#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key - cannot be empty
 * @value: The value associated with key - can be empty
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current && strcmp(current->key, key) != 0)
		current = current->next;

	/* Key exists, update value */
	if (current)
	{
		free(current->value);
		current->value = strdup(value);
		return (1); 
	}
    
	/* Key does not exist, add new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
