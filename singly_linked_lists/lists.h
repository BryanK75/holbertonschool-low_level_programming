#ifndef LIST_H
#define LIST_H
#include <stddef.h>

/**
 * struct list_type - Struct for List Linked
 * @str: String
 * @len: Len of string
 * @next: Next linked
 */
typedef struct list_type
{
	char *str;
	int len;
	struct list_type *next;
} list_t;

int _putchar(char c);
int _strlen(char *s);

size_t print_list(const list_t *h);

#endif
