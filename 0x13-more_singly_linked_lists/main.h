#include <stdio.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int size_t print_listint(const listint_t *h);
