#include "linkedlist_ver.h"
#include <stdlib.h>

node* lst_init()
{
	node* head = new_lst(0);
	return head;
}
node* new_lst(ldata data)
{
	node* newnode = (node*)malloc(sizeof(node));
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}
void	lstadd_last(node* head, node* lst)
{
	node* ptr = head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = lst;
	lst->next = NULL;
}

void	remove_lst(node* head, node* lst)
{
	node* ptr = head;
	while (ptr->next != lst)
		ptr = ptr->next;
	ptr->next = lst->next;
	free(lst);
}

ldata	selection_sort_pop(node *head)
{
	ldata min;
	node* ptr = head;
	node* save;

	save = 0;
	min = 2147483647;
	while (ptr != NULL)
	{
		if (ptr->data < min)
		{
			min = ptr->data;
			save = ptr;
		}
		ptr = ptr -> next;
	}
	remove_lst(head, save);
	return min;
}

void	insertion_sort_push(node* head, ldata data)
{
	node* ptr = head;

	while (ptr != NULL)
	{
		if (ptr->next->data > data && ptr->next != NULL)
			break;
		ptr = ptr->next;
	}
	lstadd_last(head, new_lst(data));
}

ldata pop(node* head)
{
	if (head == 0)
		return 0;
	node* ptr = head;
	node* rptr;
	ldata save;
	rptr = head->next;
	save = rptr->data;
	head->next = rptr->next;
	free(rptr);
	return save;
}
void	selectionSortList (int data[], int size)
{
	node* head = lst_init();
	//push: 순서대로 push  -> lstadd_last
	//pop: 가장 작은 걸 골라서 반환
	for (int i = 0; i < size; i++)//push
		lstadd_last(head, new_lst(data[i]));
	for (int i = 0; i < size; i++)
		data[i] = selection_sort_pop(head);
}


void	insertionSortList(int data[], int size)
{
	//push할때 골라서 push
	node* head = lst_init();
	for (int i = 0; i < size; i++)
		insertion_sort_push(head, data[i]);
	for (int i = 0; i < size; i++)
		data[i] = pop(head);
}