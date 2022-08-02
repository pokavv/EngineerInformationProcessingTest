// 2021년 3회 정보처리기사 실기 1번

class Connection {
    private static Connection _inst = null; // 객체변수 _inst 선언
    private int count = 0; // 정수형 변수 count 선언

    public static Connection get() {
        if (_inst == null) {
            _inst = new Connection();
            return _inst; // 객체 생성
        }
        return _inst;
    }

    public void count() { // void는 반환값 X, count++ -> count 1 증가
        count++;
    }

    public int getCount() {
        return count; // count 반환
    }
}

public class Test {
    public static void main(String[] args) {
        Connection conn1 = Connection.get(); // 선언만 할 경우 Stack영역으로 할당
        conn1.count();
        Connection conn2 = Connection.get();
        conn2.count();
        Connection conn3 = Connection.get();
        conn3.count();
        System.out.print(conn1.getCount());
    }
}

// 3
// Stack 영역: 정적으로 할당된 메모리 영역(변수, 값) : Boolean, Char, Short ---.
// Heap 영역: 동적으로 할당된 메모리 영역 : 모든 오브젝트 타입, 생성된 객체가 저장함