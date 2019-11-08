#include <stdio.h>
int FindMax(int arr[], int max, int i, int n)
{
  if(arr[i]>max)
  {
    max = arr[i];
  }
  if(i==n-1)
  {
    return max;
  }
  max = FindMax(arr,max,i+1,n);
  return max;
}
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("%d\n",FindMax(arr,arr[0],0,n));
  return 0;
}
