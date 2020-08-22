#include<stdio.h>
#include<assert.h>

#define MAX_SIZE 100
void insertion(int array[], int m)
{
  int j,k,temp;
  for(j=1;j<m;j++)
    {
      temp = array[j];
      k=j-1;
      while(k>=0 && array[j]>temp)
	{
	  array[k+1]=array[k];
	  k=k-1;
	}
      array[k+1]=temp;
         }
  
}

void printarr(int array[], int g)

{ int i;
    printf("\n Sorted elements are");
    	for(i=0;i<g;i++)
	  {
	    printf("\n %d \n ", array[i]);
      	  } 
}


int main()
{
  int a[MAX_SIZE], n, i;

  printf("Size of array\n");
  scanf("%d",&n);
  assert(n>0);
    printf("\nEnetr all the elements");
    for(i=0;i<n;i++)
      {
	scanf("%d",& a[i]);
	      }
    insertion(a, n);
    printarr(a, n);
	return 0;
      }
