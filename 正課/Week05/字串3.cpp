#include <stdio.h>

int main()
{
    char line[10] ="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};


    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[10]="";
    char line4[10]={'p','r','o','p','e','r'};
    printf("%s\n", line3);
    printf("%s\n", line4);
}
