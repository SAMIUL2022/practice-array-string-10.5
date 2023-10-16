#include <stdio.h>
#include <limits.h>
int main ()
{
int n;
scanf("%d",&n);
int a[n];

for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
     int min=INT_MAX,max=INT_MIN,temp,minpos,maxpos;
for (int i = 0; i < n; i++)
{
if (min>a[i])
{
    min=a[i];
    minpos=i;
}
if (max<a[i])
{
    max=a[i];
    maxpos=i;
}

   
   
}
//  printf("%d ",maxpos);
//  printf("%d ",minpos);
//  printf("%d\n",temp);
for (int i = 0; i < n; i++)
{
    a[minpos]=max;
   a[maxpos]=min;

    printf("%d ",a[i]);
}



    return 0;
}