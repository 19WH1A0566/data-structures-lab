//queuearray
#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int f=-1,r=-1,queue[maxsize];
int isfull()
{
	if(r==maxsize-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(f==-1)
	return 1;
	else
	return 0;
}
void enqueue(int data)
{
	if(f==-1)
		f=0;
	queue[++r]=data;
}
int dequeue()
{
	int x=queue[f];
	if(f==r)
		f=r=-1;
	else
		f++;
	return x;
}
void display()
{
	for(int i=f;i<=r;i++)
		printf("%d\t",queue[i]);
}
int main()
{
	int ch,x;
	while(1)
	{
		printf("\n\n");
	        printf("PROGRAM FOR QUEUE:\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("ENTER YOUR CHOICE:\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: if(isfull())
				printf("Queue Overflow\n");
				else
				{
					printf("Enter data to insert: \n");
					scanf("%d",&x);
					enqueue(x);
				}
				break;
		case 2: if(isempty())
				printf("Queue Underflow\n");
				else
				{
					printf("Deleted element is %d\n",dequeue());

				}
				break;
		case 3: display();
			break;
		case 4: exit(0);
		}
	}
}

//queuesll
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
	
};
struct node*f=NULL,*r=NULL,*cur;
void enqueue()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter data to insert:\n");
	scanf("%d",&(cur->data));
	cur->link=NULL;
	if(f==NULL)
		f=r=cur;
	else
	{
		r->link=cur;
		r=cur;
	}
}
void dequeue()
{
	if(f==NULL)
		printf("Queue Underflow.\n");
	else if(f==r)
	{
		printf("Deleted data is %d: \n",f->data);
		f=r=NULL;
	}
	else
	{
		cur=f;
		f=f->link;
		printf("Deleted data is %d  \n",cur->data);
		free(cur);
	}
}
void display()
{
	if(f==NULL)
		printf("Queue is empty");
	else
	{
		cur=f;
		while(cur!=NULL)
		{
			printf("%d -> ",cur->data);
			cur=cur->link;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n\n");
	    printf("PROGRAM FOR QUEUE:\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("ENTER YOUR CHOICE:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:exit(0);
		}
	}
}


//cqueuearray
#include<stdio.h>
#include<stdlib.h>
#define maxsize 6
int f=-1,r=-1,cq[maxsize];
int isfull()
{
	if(f==(r+1)%maxsize)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(f==-1)
	return 1;
	else
	return 0;
}
void enqueue(int data)
{
	if(f==-1)
	{
		f=r=0;
		cq[r]=data;
	}
	else
	{
		r=(r+1)%maxsize;
		cq[r]=data;
	}
}
int dequeue()
{
	int x=cq[f];
	if(f==r)
		f=r=-1;
	else
		f=(f+1)%maxsize;
	return x;
}
void display()
{
	if(f==-1)
		printf("cq is empty\n");
	else
	{
		int i;
		for(i=f;i!=r;i=(i+1)%maxsize)
			printf("%d\t",cq[i]);
		printf("%d\t",cq[i]);
	}
}
int main()
{
	int ch,x;
	while(1)
	{
		printf("\n\n");
	        printf("PROGRAM FOR CQUEUE:\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("ENTER YOUR CHOICE:\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: if(isfull())
				printf("CQueue Overflow\n");
				else
				{
					printf("Enter data to insert: \n");
					scanf("%d",&x);
					enqueue(x);
				}
				break;
		case 2: if(isempty())
				printf("CQueue Underflow\n");
				else
				{
					printf("Deleted element is %d\n",dequeue());
					
				}
				break;
		case 3: display();
			break;
		case 4: exit(0);
		}
	}
}
 
//cqueuesll
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
	
};
struct node*f=NULL,*r=NULL,*cur;
void enqueue()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter data to insert:\n");
	scanf("%d",&(cur->data));
	if(f==NULL)
	{
		cur->link=cur;
		f=r=cur;
	}
	else
	{
		r->link=cur;
		cur->link=f;
		r=cur;
	}
}
void dequeue()
{
	if(f==NULL)
		printf("CQueue Underflow.\n");
	else if(f==r)
	{
		printf("Deleted data is %d: \n",f->data);
		f=r=NULL;
	}
	else
	{
		cur=f;
		f=f->link;
		r->link=f;
		printf("Deleted data is %d  \n",cur->data);
		free(cur);
	}
}
void display()
{
	if(f==NULL)
		printf("CQueue is empty");
	else
	{
		cur=f;
		while(cur->link!=f)
		{
			printf("%d -> ",cur->data);
			cur=cur->link;
		}
		printf("%d -> ",cur->data);
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n\n");
	    printf("PROGRAM FOR CQUEUE:\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("ENTER YOUR CHOICE:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:exit(0);
		}
	}
}	