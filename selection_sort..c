#include<stdio.h>
#include<assert.h>
#define MAX_SIZE 100

void selection(int a[], int m)
{
  int j, k, min, temp;
  for(j=0;j<m-1;j++)
    {
      min=j;
      for(k=j+1;k<m;k++)
	{
	  if(a[k]<a[min])
	    {
	      min=k;
	    } 
	}
      if(min!=j)
	{
	  temp = a[j];
	  a[j] = a[min];
	  a[min] = temp;
	}
    }
}

void printarr(int arr[], int g)
{
  int l;
  printf("\n Sorted elements are \n ");
  for(l=0;l<g;l++)
    {
  printf("\n %d \n", arr[l]);
    }
}

int main()
{
  int array[MAX_SIZE], n, i;
  printf("\n Enter size of the array\n");
  scanf("%d",&n);
  assert(n>0);
    printf("Enter your %d element", n);
  for(i=0;i<n;i++)
    {
      scanf("%d",& array[i]);
    }
  selection(array, n);
  printarr(array, n);
  return 0;
}
