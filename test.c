#include <stdio.h>
#include <unistd.h>

unsigned long long int x = 0x1234567812345678ULL;

int main(void) {
    puts("First print");
    puts("Second print");
    sleep(1);
    printf("Third print: %llx\n", x);
    return 0;
}
