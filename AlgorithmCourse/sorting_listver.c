#include "linkedlist_ver.h"
#include <stdlib.h>

node* lst_init()
{
	node* head = (node*)malloc(sizeof(node));
	head->next = 0;
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
}

void	remove_lst(node* head, node* lst)
{
	node* ptr = head;
	if (ptr == 0)
		return;
	while (ptr->next != NULL && ptr->next != lst)
		ptr = ptr->next;
	if (ptr == 0)
	{
		return;
	}
	ptr->next = lst->next;
	free(lst);
}

ldata	selection_sort_pop(node *head)
{
	ldata min;
	node* ptr = head->next;
	node* save;

	save = 0;
	min = 2147483647;
	while (1)
	{
		if (ptr == 0)
			break;
		//printf("X\n");
		if (ptr->data < min && ptr != 0)
		{
			min = ptr->data;
			save = ptr;
		}
		ptr = ptr -> next;
	}
	//printf("%p", head);
	remove_lst(head, save);
	return min;
}

void	insertion_sort_push(node* head, ldata data)
{
	node* ptr = head;
	node* save = head;
	node* newnode;

	while (ptr != NULL)
	{	
		save = ptr;
		ptr = ptr->next;
		if (ptr == 0)
			break;
		if (data < ptr->data && ptr != NULL)
			break;
		
	}
	newnode = new_lst(data);
	newnode->next = save->next;
	save->next = newnode;
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
void lst_print(node* head)
{
	node* ptr = head->next;
	while (1)
	{
		if (ptr == 0)
			return;
		printf("%d", ptr->data);
		ptr = ptr->next;
	}
}
void	selectionSortList(int data[], int size)
{
	printf("0\n");
	node* head = lst_init();
	//push: 순서대로 push  -> lstadd_last
	//pop: 가장 작은 걸 골라서 반환
	//printf("0\n");

	for (int i = 0; i < size; i++)//push
		lstadd_last(head, new_lst(data[i]));
	//lst_print(head);
	//printf("0\n");

	for (int i = 0; i < size; i++)
	{
		*(data + i) = selection_sort_pop(head);
		printf("0");
	}

	free(head);
}


void	insertionSortList(int data[], int size)
{
	//push할때 골라서 push
	node* head = lst_init();
	for (int i = 0; i < size; i++)
		insertion_sort_push(head, data[i]);
	for (int i = 0; i < size; i++)
		data[i] = pop(head);

	free(head);
}