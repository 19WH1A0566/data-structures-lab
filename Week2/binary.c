#include<stdio.h>
int binary_search(int first,int last,int a[50],int key)
{
     int pos,mid;
	 if(first<=last)
	 {  
	     mid =(first+last)/2;
		 if(a[mid]==key)
		        return mid;
		 else if(a[mid]<key)
                binary_serach(mid + 11,last,a,key);
         else
                binary_serach(first,mid - 1,a,key);		 
	 }
	 return pos;
}
int main()
{
         int i,pos,n,key,a[50];
         scanf("%d",&n);
         for(i=0;i<n;i++)
         scanf("%d",&a[i]);
         scanf("%d",&key);
         pos=binary_search(n,a,key);
         if(pos==-1)
         printf("element not present");
         else
         printf("element present at %d location",pos+1);
}
