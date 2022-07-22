// 2021년 3회 정보처리기사 실기 16번


#include <stdio.h>

int main()
{
    int* array[3];  // 정수형 포인터배열 array 3개 생성
    int a = 12, b = 24, c = 36; // int a, b, c 선언
    array[0] = &a;  // array[0]에 a 주소값 대입
    array[1] = &b;  // array[1]에 b 주소값 대입
    array[2] = &c;  // array[2]에 c 주소값 대입
    printf("%d", *array[1] + **array + 1);
    // 24 + 12 + 1 = 37
}

// 37