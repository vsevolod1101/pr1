#include <stdio.h>
void load_mem();
void load_cpu();

int main()
{
    printf("BOOT:");
    load_mem();
    printf("|");
    load_cpu();
    printf(":END\n");
    return 0;
}
void load_mem()
{
    printf("MEM_OK");
}
void load_cpu()
{
    printf("CPU_OK");
}