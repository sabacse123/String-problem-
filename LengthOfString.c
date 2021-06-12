#include <stdio.h>

#include<string.h>

int main()
{
    char str[100];
    int len,i=0;

    printf("Please Enter Massage: ");
    gets(str);

    len=strlen(str); /// string length function


    printf(" Your Massage Length is: %d ",len);


    return 0;
}
