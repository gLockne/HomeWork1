#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
int main()
{
    int a;
    scanf("%d", &a);
    foo(&a);
    printf("%d\n", a);
    system("pause");
    return 0;
}
