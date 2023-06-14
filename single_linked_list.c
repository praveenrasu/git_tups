#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node * next;

}Node;

Node * head;
Node * temp;
Node * new;
Node * pre;

void create_list()
{    
	printf("creating list\n");
	//	new=(Node*)malloc(sizeof(Node));
	int c=1;
	int num;
	while(c)
	{
	printf("enter data");
	scanf("%d",&num);
	new=(Node*)malloc(sizeof(Node));
	if(new== NULL)
	{
		printf("malloc fail");
	}else{
		new->data=num;
		new->next=NULL;
		if(head== NULL)
		{
			head=new;
		}else
		{
			temp=head;
			while(temp->next != NULL)
			{
				temp=temp->next;
			}
			temp->next=new;
		}
	}printf("do u want to continue");
	scanf("%d",&c);
	}


}
void insert_first()
{
	int num;
	new=(Node*)malloc(sizeof(Node));
	printf("enter data");
	scanf("%d",&num);
	new->data=num;
	new->next=NULL;
	temp=head;
	new->next=head;
	head=new;


}
void insert_last()
{

	int num;
	new=(Node*)malloc(sizeof(Node));
	printf("enter data");
	scanf("%d",&num);
	new->data=num;
	new->next=NULL;
	temp =head;
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	temp->next=new;
}
void insert_node_position()
{
	printf("insert node at first \n");

		int i;
		int pos;
		int num;
		printf("enter position");
		scanf("%d",&pos);
		temp=head;
		i=1;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		printf("enter data");
		scanf("%d",&num);
		new=(Node*)malloc(sizeof(Node));
		new->data=num;
		new->next=NULL;
		new->next=temp->next;
		temp->next=new;


}

void delete_first()
{
	printf("first node deleted\n");
	temp=head;
	head=head->next;
	free(temp);
}
void delete_last()
{
	printf("delete last node\n");
	temp=head;
	while(temp->next->next !=NULL)
	{
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
}
void delete_position()
{

		int i;
		int pos;
		int num;
		printf("enter position");
		scanf("%d",&pos);
		temp=head;
		i=1;
		while(i<pos)
		{	
			pre=temp;
			temp=temp->next;
			i++;
		}
		pre->next=temp->next;
		free(temp);
}

void reverse_list()
{

	

}

void print_list()
{
	printf("print list\n");
	temp=head;
	while(temp != NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}

}

int main()
{
	create_list();
	print_list();
	insert_first();
	print_list();
	insert_last();
	print_list();
	insert_node_position();
	print_list();
	delete_first();
	print_list();
	delete_last();
	print_list();
	delete_position();
	print_list();
	reverse_list();
	print_list();

}

