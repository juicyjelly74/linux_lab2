#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libgoodbye.h"
char* goodbye(void)
{
    char* str = (char*)malloc(sizeof(char)*20);
    strcpy(str, "Goodbye world.");
    return str;
}