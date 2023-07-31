#include "lists.h"

/**
 * sum_listint - A program that returns the sum of all the data
 * @head: pointer to the head node of the linked list.
 * Return: Sum of all the data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int data;

	data = 0;
	while (head != NULL)
	{
		data += head->n;
		head = head->next;
	}
	return (data);
}
