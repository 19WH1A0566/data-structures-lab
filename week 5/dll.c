#include<stdio.h>
#include<stdlib.h>
struct node
{
        float data;
		struct node*prev;
		struct node*next;
};
struct node*head=NULL,*tall=NULL,*cur,*t1,*t2;
void create()
{
     int i,n;
	 printf("enter the number of nodes\n");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	     cur=(struct node*)malloc(sizeof(struct node));
		 printf("enter current nodes\n");
		 scanf("%f",&cur->data);
		 cur->prev=NULL;
		 cur->next=NULL;
		 if(head==NULL)
		 head=tail=cur;
	     else
		 {
		    tail->next=cur;
			cur->prev=tail;
			tail=cur;
		 }
	 }
}		
void insert_at_begin()
{
     cur=(struct node*)malloc(sizeof(struct node));
	 printf("enter data\n");
	 scanf("%f",&cur->data);
	 cur->prev=NULL;
	 cur->next=head;
	 head->prev=cur;
	 head=cur;
}	 
void insert_at_position()
{
     int pos,c=1;
	 cur=(struct node*)malloc(sizeof(struct node));
	 printf("enter data\n");
	 scanf("%f",&cur->data);
	 printf("enter position\n");
	 scanf("%d",&pos);
	 t1=head;
	 while(c<pos && t1!=NULL)
	 {
	     t2=t1;
		 t1=t1->next;
		 c++;
	 }
     t2->next=cur;
     cur->prev=t2;
     cur->next=t1;
     t1->prev=cur;
}
void insert_at_end()
{
     cur=(struct node*)malloc(sizeof(struct node));
	 printf("enter data\n");
	 scanf("%f",&cur->data);	 
	 cur->next=NULL;
	 cur->prev=tail;
	 tail->next=cur;
	 tail=cur;
}
void insert_before()
{
     float value;
     cur=(struct node*)malloc(sizeof(struct node));
	 printf("enter data\n");
	 scanf("%f",&cur->data);
     printf("enter data to insert before which node");
     scanf("%f",&value);
     t1=head;
     while(t1->data!=value && t1!=NULL)	 
	 {
	     t2=t1;
	     t1=t1->next;
	 }
	 t2->next=cur;
	 cur->prev=t2;
	 cur->next=t1;
	 t1->prev=cur;
}
void insert_after()
{
     float value;
     cur=(struct node*)malloc(sizeof(struct node));
	 printf("enter data\n");
	 scanf("%f",&cur->data);	 
	 printf("enter data to insert after which node");
     scanf("%f",&value);
     t1=head;
     while(t1->data!=value && t1!=NULL)	 
	 {
	     t1=t1->next;
	 }
     cur->next=t1->next;
     t1->next->prev=cur;
     t1->next=cur;
     cur->prev=t1;
}
void delete_at_begin()
{
     cur=head;
     head=head->next;
     head->prev=NULL;
     cur->next=NULL;
     printf("deleted elements is %f\n",cur->data);
     free(cur)	 
}
void delete_at_position()
{
     int pos,c=1;
     printf("enter position of deletion\n");
     scanf("%d",&pos);
	 t1=head;
	 while(c<pos && t1!=NULL)
	 {
	     t2=t1;
		 t1=t1->next;
		 c++;
	 }
     t2->next=t1->next;
     t1->next->prev=t2;
     printf("deleted element is %f\n",t1->data);
     free(t1);	 
}
void delete_at_end()
{
     cur=tail;
     tail=tail->prev;
     tail->next=NULL;
     cur->prev=NULL;
     printf("deleted elements is %f\n",cur->data);
     free(cur);
}
void delete_before()
{
     float value;
     printf("enter before which node we need to delete\n");
     scanf("%d",&pos);
	 t1=head;
	 while(t1->next->data!=value && t1->next!=NULL)
	 {
	     t2=t1;
		 t1=t1->next;
	 }
     t2->next=t1->next;
     t1->next->prev=t2;
     printf("deleted element is %f\n",t1->data);
     free(t1); 
}
void delete_after()
{
     float value;
     printf("enter before which node we need to delete\n");
     scanf("%d",&pos);
	 t1=head;
	 while(t1->data!=value && t1!=NULL)	 
	 {
	      t1=t1->next;
	 }
     t2=t1->next;
     t1->next=t2->next;
     t2->next->prev=t1;
     printf("deleted element is %f\n",t2->data);
     free(t2)	 
}
void display_in_forward()
{
     if(head==NULL)
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 