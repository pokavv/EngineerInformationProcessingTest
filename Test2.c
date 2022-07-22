#include <stdio.h>
struct jsu // 구조체 정의
{
    char nae[12]; // char 형 nae 배열 12개
    int os, db, hab, hhab; // os, db, hab, hhab 정수형
};

int main()
{
    struct jsu st[3] = {{"데이터1", 95, 88}, {"데이터2", 84, 91}, {"데이터3", 86, 75}};
    // jsu의 st배열 3개 생성
    struct jsu* p; // jsu* 포인터 p
    p = &st[0];

    (p + 1)->hab = (p + 1)->os + (p + 2)->db;
    (p + 1)->hhab = (p + 1)->hab + p->os + p->db;
    printf("%d", (p + 1)->hab + (p + 1)->hhab);
}

// 501