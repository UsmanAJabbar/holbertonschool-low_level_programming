#ifndef _LISTS_H
#define _LISTS_H

/* Structure for Singly Linked Lists */
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Task Declarations/Prototypes */
size_t print_listint(const listint_t *h);

#endif