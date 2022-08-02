#include <stdio.h>

struct gisa
{
    int n;
    int g;
};

int main()
{
    struct gisa st[2];
    for (int i; i < 2; i++){
        st[i].n = i;
        st[i].g = i + 1;
    }
    printf("%d", st[0].n + st[1].g);
}