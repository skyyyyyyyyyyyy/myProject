#include <stdio.h>
int UAT(int test1)
{
    int n=1220, sum = 0;
    int i = 20;
    printf("\n");
  
    if (n <= test1) {
        sum += i;
    }
    printf("\n");
    return 0;
}

void UAT2(int test2)
{
    int n, m = 1;
    if ((m==6)||(n>2)) {
        n++;
    }
    printf("\n");
    return;
}

int UAT3(int test3)
{
    int hun, ten, ind, n;
    printf("result is:");
    for( n=100; n<1000; n++ ) 
    {
        hun = n / 100;
        ten = (n-hun*100) / 10;
        ind = n % 10;
        if(n == hun*hun*hun + ten*ten*ten + ind*ind*ind)
            printf("%d  ", n);
    }
   
    return 0;
}


