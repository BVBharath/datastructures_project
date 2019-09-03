#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUCCESS 1
#define FAILURE 0
#define LIST_EMPTY -1
#define GREATER 5
#define EQUAL 6
#define LESSER 7
typedef unsigned int data_t;
typedef struct node
{
	data_t data;
	struct node *prev;
	struct node *next;
}dlist;

//
int insert_node(dlist **head, dlist **tail, unsigned long num);


int insert_first(dlist **head, dlist **tail, data_t data);

int delete_last(dlist **head, dlist **tail);

void print_list(dlist *head);

int reverse(int num);

int compare_links(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2);
int count(dlist **head, dlist **tail);
 
int addition(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headr, dlist **tailr);

int addition1(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headr, dlist **tailr);

int substract(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headr, dlist **tailr, int len1, int len2, int *flag);


int multiplication(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headr, dlist **tailr);

int division(dlist **head1, dlist **tail1, dlist **head2, dlist **tail2, dlist **headr, dlist **tailr);

int compare(dlist **head1,dlist **tail1,dlist **head2,dlist **tail2,int len1,int len2); 
#endif
