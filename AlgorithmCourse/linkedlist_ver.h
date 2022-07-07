#pragma once


typedef int ldata;

typedef struct _node{
	ldata data;
	struct _node* next;
}node;

node *lst_init();
node* new_lst(ldata data);
void	lstadd_last(node* head, node* lst);
void	remove_lst(node* head, node* lst);
void	selectionSortList(int data[], int size);
void	insertionSortList(int data[], int size);
ldata	selection_sort_pop(node *head);
void lst_print(node* head);
ldata	pop(node* head);
