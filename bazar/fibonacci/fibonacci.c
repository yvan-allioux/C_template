#include <stdio.h>
#include <stdlib.h>

int fibonacci(int val){
    if (val == 1)
    {
        return 1;
    }else if (val == 0){
        return 0;
    }else{
        return fibonacci(val-1) + fibonacci(val-2);
    }
}

int main()
{
    int x = 6;
    int n = 2;
    int m = 1;
    int l = 0;
    int h = l + m;

    printf("fibonacci de combien ? \n");
    scanf("%d", &x);

    while (n != x){
        
        l = m;
        m = h;
        h = l + m;
        n++;
    }
    printf("fibonacci de %d et egal a %d\n", x, h);

    printf("fibonacci recurcif de %d et egal a %d\n", x, fibonacci(x));

    return 0;//0 success, 1 (ou any non-0) failure
}
