#include <stdio.h>

int main()
{
    char *name[]={"ts","sahil","tssahil"};
    printf("%s",*name+1);       //s
    printf("%s",*(name+1));     //sahil
    printf("%s",(*(name+1)+4)); //l

    return 0;
}
