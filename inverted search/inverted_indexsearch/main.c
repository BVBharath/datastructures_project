/***************************************************************************************************************************************************
 *Author		:Emertxe(http://www.emertxe.com)
 *Date		:Mon 22 May 2017 14:00:05 IST
 *File		:main.c
 *Title		:Driver function
 *Description	:This function acts like the driver function for the project inverted search
 ****************************************************************************************************************************************************/
#include "main.h"

int main( )
{
	/* Define the main function here */
	int options, value, i, flag = 1;
	char file_name[10], buffer[10] = {0}, search_name[10] = {0}, file_name2[10];
	FILE *fp1;

	//
	slist *head[26] = {NULL};
	slist *search_ptr;


	while(1)
	{
		printf("\n1.create_database\n2.print_database\n3.search_databse\n4.save\n5.quit\n");
		scanf("%d", &options);


		switch(options)
		{
			case 1:
				printf("enter the file name\n");
				scanf("%s", file_name);

				//
				flag = 1;
				fp1 = fopen(file_name, "r");
				for(i = 0; i < 26; i++)
				{
					if(head[i] != NULL)
					{
						if(check_filenames(head[i], file_name) == FAILURE)
						{
							flag = 0;
						}
					}
				}

				if(flag)
				{
					while(fscanf(fp1, "%s", buffer) != EOF)
					{
						value = convert(buffer[0]);
						create_database(&head[value], buffer, file_name);
						memset(buffer, 0, 10);

					}
				}
				else
				{

							printf("database for that file is created\n");
				}

				break;

			case 2:
				for(i = 0; i < 26; i++)
				{
					if(head[i] != NULL)
					{

						print_database(head[i]);
					}
				}
				break;

			case 3:
				printf("enter the string to search\n");
				scanf("%s", search_name);
				value = convert(search_name[0]);
				if(head[value] == NULL)
				{
					printf("string not found\n");
				}

				search(head[value], search_name);
				break;

			case 4:
				printf("enter the file name to save your database\n");
				scanf("%s", file_name2);

				for(i = 0; i < 26; i++)
				{
					if(head[i] != NULL)
					{
						save_database(head[i], file_name2);
					}
				}
				break;

			case 5 :
				exit(1);


		}
	}
}

