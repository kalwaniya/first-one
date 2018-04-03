#include <stdio.h>
#define MAX 100

int main()
{
    double x = 12354.456787;
	int n; 
    char buf[MAX];

    n= printf("%f",x);
    gcvt(x, n-1, buf);

    printf("buffer is: %s\n", buf);

    return 0;
}

