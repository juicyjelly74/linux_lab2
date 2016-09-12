#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* hello();
char* goodbye();
int main()
{
    char* h_str = hello();
    char* g_str = goodbye();
    printf("%s\n", h_str);
    printf("%s\n", g_str);
    return 0;
}