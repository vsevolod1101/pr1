#include <stdio.h>
void pulse_1();
void pulse_2();

int main()
{
    printf("START ");
    pulse_1();
    printf("END\n");
    return 0;
}
void pulse_1()
{
    printf("ALPHA ");
    pulse_2();
    printf("GAMMA ");
}
void pulse_2()
{
    printf("BETA ");
}

