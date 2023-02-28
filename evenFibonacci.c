#include<stdio.h>

#define MAX 1000000
int main(void)
{
    int pprev = 0, prev = 1;
    int num = 0;
    int tot = 0;
    
    while (tot < MAX) {
        num = prev + pprev;
        prev = pprev;
        pprev = num;
        if (num % 2 == 0) {
            tot = tot + num;
        }
    }
    printf("%d\n", tot);
    
    return 0;
}