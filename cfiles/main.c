#include<stdio.h>
int main()
{ int m,n,i,j,target;
printf("please input m and n");
scanf("%d",&m);
scanf("%d",&n);  
int a[m][n];
for(i=0;i<m;i++)
  for(j=0;j<n;j++)
    {printf("plesae input the elements for the martix");
scanf("%d",&a[i][j]);
    }
printf("Please input target");
scanf("%d",&target);
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  if(a[i][j]==target)
  {printf("true"); 
  return 0;
  }
}
if (i==m)
printf("flase");
}
