#include "main.h"


int main(int argc, char *argv[])
{
	//initialize the variables
	dlist *head1 = NULL, *tail1=NULL, *head2 = NULL, *tail2 =NULL, *headr = NULL, *tailr = NULL;

	int num1 = 0, num2 = 0, n1 = 4, options, len1, len2, flag = 1;
	char *q = argv[1];
	char *p, *s;

	printf("choose the type of operation\n1.addition\n2.multiplication\n3.division\n4.substraction\n");
	scanf("%d", &options);
	while(*q++);

	--q;
	p = q;
	q = argv[1];
	--p;
	while(p >= q)
	{
		while(n1)
		{
			num1 = (num1 * 10) + atoi(p);
			*p = '\0';
			p--;
			n1--;

		}
		num1 = reverse(num1);
		insert_node(&head1, &tail1, num1);
		n1 = 4;
		num1 = 0;
	}
	printf("first node: ");
	print_list(head1);

	q = argv[2];

	while(*q++);

	--q;
	p = q;
	q = argv[2];
	--p;
	while(p >= argv[2])
	{
		while(n1)
		{
			num2 = (num2 * 10) + atoi(p);
			*p = '\0';
			p--;
			n1--;

		}
		num2 = reverse(num2);
		insert_node(&head2, &tail2, num2);
		n1 = 4;
		num2 = 0;
	}

	printf("second node : ");
	print_list(head2);

	switch(options)
	{

		case 1: 
			compare_links(&head1, &tail1, &head2, &tail2);
			addition1(&head1, &tail1, &head2, &tail2, &headr, &tailr);
			break;


		case 2:
			multiplication(&head1, &tail1, &head2, &tail2, &headr, &tailr);
			break;

		case 3:
			division(&head1, &tail1, &head2, &tail2, &headr, &tailr);
			break;

		case 4:
			len1 = count(&head1, &tail1);

			len2 = count(&head2, &tail2);
			substract(&head1, &tail1, &head2, &tail2, &headr, &tailr, len1, len2, &flag);
			printf("sub result: ");
			print_list(headr);


			break;

	}
	printf("final node : \n");
	print_list(headr);



}
