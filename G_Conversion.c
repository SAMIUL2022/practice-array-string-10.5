#include <stdio.h>
#include<string.h>
int main ()
{
char a[100001];
fgets(a,100001,stdin);
for (int  i = 0; i<strlen(a); i++)
{
    if (a[i]>= 'a'&& a[i]<='z')
    {
        a[i]=a[i]-32;
        
    }
    else if (a[i]>= 'A'&& a[i]<='Z')
    {
        a[i]=a[i]+32;
        
    }
    if (a[i]==',')
    {
       a[i]=' ';
    }
    
    
   printf("%c",a[i]);
}


// printf("%s",a);

     
    return 0;
}