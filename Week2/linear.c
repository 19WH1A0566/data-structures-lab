#include<stdio.h>
int linear_search(int n,int a[50],int key)
{
   static int i=0;
   if(i<n)
       if(a[i]==key)
         return i;
     else
    {   
         i++;
         linear_search(n,a,key);
    
    }
    else
    return -1;
}
int main()
{
         int i,pos,n,key,a[50];
         scanf("%d",&n);
         for(i=0;i<n;i++)
         scanf("%d",&a[i]);
         scanf("%d",&key);
         pos=linear_search(n,a,key);
         if(pos==-1)
         printf("element not present");
         else
         printf("element present at %d location",pos+1);
}
