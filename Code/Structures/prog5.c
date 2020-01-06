//Write a program to search for a given element in a list of elements using Linear Search.
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node* add_end(struct node *,int);
int linear(struct node*,int);
void main()
{
	int n,x,pos,dat;
	struct node *head;
	head=NULL;
	printf("enter 1 to add node,0 to exit\n");
	while(1)						//Create a link list
	{
		printf("enter choice: ");
		scanf("%d",&n);
		switch(n)
		{
		case 1:
			printf("enter new data :");
			scanf("%d",&x);
			head=add_end(head,x);
			continue;
		case 0:
			break;
		}
		break;
	}
	printf("element to be searched:");
	scanf("%d",&dat);
	pos=linear(head,dat);					//Search position of element in link list
	if(pos==0)
		printf("Data not found\n");
	else
		printf("postion of element is %d\n",pos);
	
}

struct node* add_end(struct node *head,int x)			//Adding new nodes at end of link list
{
	struct node *trev,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{      
		temp->data=x;
		temp->next=NULL;
		return temp;
	}
	trev=head;
	while(trev->next!=NULL)
		trev=trev->next;
	trev->next=temp;
	temp->data=x;
	temp->next=NULL;
	return head;
}

int linear(struct node *head,int data)				//Function to search the required element
{
	int ct=0;
	if(head==NULL)
	{
		return 0;
	}
	while(head->next!=NULL)					//Traverse till end of link list
	{
		ct++;						//Increment ct at each pass
		if(head->data==data)
			return ct;				//Return ct is data is found
		head=head->next;
	}
	if(head->data==data)
			return ct+1;
}
