#include <stdio.h>
#include<string.h>
int main ()
{
int n;
scanf("%d",&n);
char a[1000];
for (int i = 0; i < n; i++)
{
   scanf("%s",a);

   if (strlen(a)<=10)
{
    printf("%s\n",a);
}
else

{char f=a[0];
char l=a[strlen(a)-1];
int di=strlen(a)-2;
     printf("%c%d%c\n",f,di,l);}

     }



     
    return 0;
}