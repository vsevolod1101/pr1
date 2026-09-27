#include <stdio.h>
void pulse();

int main()
{
    pulse();
    printf("\n");
    pulse();
    pulse();
    printf("\n");
    pulse();
    pulse();
    pulse();
    printf("\n");
    return 0;
}
void pulse()
{
    printf("#");
}