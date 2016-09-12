#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libhello.h"
char* hello(void)
{
    char* str = (char*)malloc(sizeof(char)*20);
    strcpy(str, "Hello world!");
    return str;
}