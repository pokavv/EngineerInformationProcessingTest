#include <stdio.h>

int gisa(char *p);
int main(){
    char *p1 = "2022";
    char *p2 = "202207";
    
    int a = gisa(p1);
    int b = gisa(p2);
    printf("%d", a + b);
}

int gisa(char *p){
    int r = 0;
    while (*p != '\0'){
        p++;
        r++;
    }
    return r;
}