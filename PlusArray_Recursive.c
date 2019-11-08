#include <stdio.h>

void PlusArray(int n, int m, int a[][m], int b[][m], int i, int j, int c[][m])
{
  c[i][j] = a[i][j] + b[i][j];
  if(j<m)
  {
    PlusArray(n,m,a,b,i,j+1,c);
  }
  else if(i<n)
  {
    PlusArray(n,m,a,b,i+1,0,c);
  }
}
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int Array_a[n][m],Array_b[n][m],Sum[n][m];
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m ; j++)
    {
      scanf("%d",&Array_a[i][j]);
    }
  }
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m ; j++)
    {
      scanf("%d",&Array_b[i][j]);
    }
  }
  PlusArray(n,m,Array_a,Array_b,0,0,Sum);

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m ; j++)
    {
      printf("%d ",Sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}
