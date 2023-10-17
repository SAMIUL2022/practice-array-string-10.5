#include <stdio.h>
#include<string.h>
int main ()
{
char a[1001];
scanf("%s",a);
int l=strlen(a)-1;
// printf("%d ",l);
 
for (int i = 0; i <=l/2; i++)
{
    // printf("%c %c ",a[l],a[0]);
  
  {
     if (a[i]==a[l-i])
   {
    printf("YES");
    
   }
   else
    printf("NO");
    break;
   i++;
   l--;
}
  }
  
 
    
    return 0;
}