#include <stdio.h>
int main()
{
    char name[] = "Vsevolod";
    char group[] = "ИС-642";
    char hostname[] = "Node0";
    printf("%s\t{9}\n%s\t%s\t{13}\n", name, group, hostname);
    return 0;
}