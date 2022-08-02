// 2021년 3회 정보처리기사 실기 17번

public class Test5 {
    public static void main(String[] args) {
        int w = 3, x = 4, y = 3, z = 5;
        if ((w == 2 | w == y) & !(y > z) & (1 == x ^ y != z)) {
            // ( False | True ) & !(3 > 5) & ( False ^ True )
            w = x + y; // w = 7
            if (7 == x ^ y != w) // True
                System.out.println(w); // w 출력 => 7
            else
                System.out.println(x);
        }

        else {
            w = y + z;
            if (7 == y ^ z != w)
                System.out.println(w);
            else
                System.out.println(z);
        }
    }
}

// 7