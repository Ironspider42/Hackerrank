#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int t=*b;
    if (*b > *a)
    {
    *b = (*b) - (*a);
    }
    else
    {
    *b= (*a) - (*b);
    }
    *a= *a + t;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
