/*BUBBLE SORT
  45 25 36 98 54 67 23 12 9 */
#include<stdio.h>//25 36 45 54 67 23 12 9 98
/*void bubble_sort(int *arr,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
			if(arr[j]<arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
       } 
	}
}*/
void bubble_sort(int *arr,int n)
{
   int p,i,j,temp,sc;
   for(p=0;p<=n;p++)
   {
   	     sc=0;
	     for(i=0,j=1;j<n-p;i++,j++)
	     {
	         if(arr[i]>arr[j])
	     	{ 
	     	    sc++;
	     		temp=arr[i];
	     		arr[i]=arr[j];
	     		arr[j]=temp;
			}
		 }
		 if(sc==0)
		 {
		 	break;
		 	
		 }
    }
   
 
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
	  printf("%d ",arr[i]);
    }
}
