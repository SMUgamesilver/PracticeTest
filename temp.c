/*해당 코드는 상명대학교 융합공과대학 게임전공 1학년 박소영 교수님이 수업하시는 
Java프로그래밍 수업에 나오는 키워드 암기를 연습하기 위한 코드입니다.*/
/*해당 코드는 Visual Studio Windows버전으로 작성되었으며 Linux나 mac을 이용할 경우 약간의 코드 변경이 필요힙니다.*/
/*해당 코드는 게임전공 23학번 민준기에 의해 작성되었으며 박소영 교수님 담당 C프로그래밍에서도 응용할 수 있는 코드입니다.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char question[256];
    char answer[50];
} Quiz;

void randomQuestion(Quiz* quizList, int count) {
    srand(time(NULL));
    int randomIndex = rand() % count;
    char userAnswer[50];

    printf("문제: %s\n", quizList[randomIndex].question);
    printf("정답을 입력하세요: ");
    scanf_s("%s", userAnswer, sizeof(userAnswer));

    if (strcmp(userAnswer, quizList[randomIndex].answer) == 0) {
        printf("정답입니다!\n");
    }
    else {
        printf("오답입니다. 정답은 '%s' 입니다.\n", quizList[randomIndex].answer);
        Sleep(3000);
    }
}

int main() {
    //Quiz* quizList[] = (Quiz*)malloc(sizeof(Quiz));

    // 문제 데이터: 질문과 정답
    Quiz quizList[] = {
        {"틀에 해당하는 최상위 컨테이너 클래스로 운영체제마다 다른 틀 모양 제공", "JFrame"},
        {"판에 해당하는 컨테이너 클래스로 버튼이나 체크박스 등 다른 요소를 포함 가능", "JPanel"},
        {"텍스트나 이미지 아이콘을 포함할 수 있는 컴포넌트 클래스", "JLabel"},
        {"클릭할 수 있는 체크박스 클래스", "JCheckBox"},
        {"체크박스나 라디오 버튼 등의 선택 이벤트", "ItemEvent"},
        {"체크박스나 라디오 버튼 등의 선택 이벤트 발생 시 itemStateChanged 메서드를 호출하는 리스너", "ItemListener"},
        {"체크박스 등의 컴포넌트에 리스너 추가", "addItemListener"},
        {"체크박스를 변경했을 때 호출되는 메서드", "itemStateChanged"},
        {"다른 패키지 클래스 가져오기", "import"},
        {"데이터와 메서드 구성 구조 선언 설계도", "class"},
        {"모든 클래스에 접근 가능 허용", "public"},
        {"해당 클래스 내부만 접근 가능 허용", "private"},
        {"클래스 객체를 메모리에 생성하며, 초기화를 위해 생성자 호출", "new"},
        {"자식 클래스가 부모 클래스의 변수, 상수, 메서드를 모두 상속", "extends"},
        {"자식 클래스에서 부모 인터페이스를 상속받아 모든 메서드를 구현", "implements"},
        {"객체에 괄호 안의 요소 추가 메서드", "add"},
        {"틀에 괄호 안의 판을 추가하는 메서드", "getContentPane().add"},
        {"해당 객체에 출력할 텍스트의 글자 모양을 설정하는 메서드", "setFont"},
        {"객체가 선택되었으면 참, 아니면 거짓을 반환하는 메서드", "isSelected"},
        {"사용자에게 문자열을 입력받는 대화상자를 제시하는 메서드", "showInputDialog" },
        {"정보를 안내하거나 값을 입력받는 다이얼로그 박스", "JOptionPane"},
        {"10(일영)과 같은 숫자 문자열을 정수 10(십)으로 변환하는 메서드", "Integer.parseInt"},
        {"문자열을 출력하는 대화상자를 제시하는 메서드", "showMessageDialog"},
        {"사용자에게 예, 아니오, 취소를 확인받는 대화상자를 제시하는 메서드", "showConfirmDialog"},
        {"예 버튼을 클릭한 경우", "YES_OPTION"},
        {"마우스 리스너를 추가", "addMouseListener"},
        {"마우스와 관련된 이벤트를 입력받는 리스너", "MouseListener"},
        {"마우스를 눌렀을 때 이벤트를 처리하는 함수", "mousePressed"},
        {"컴포넌트를 다시 그리는 메서드로, 내부적으로 paintComponent를 호출", "repaint"},
        {"컴포넌트를 그리는 메서드", "paint"},
        {"이미지 컴포넌트 클래스", "Image"},
        {"이미지 아이콘 컴포넌트 클래스", "ImageIcon"},
        {"이미지를 가져오는 메서드", "getImage"},
        {"이미지를 그리는 메서드", "drawImage"},
        {"키를 입력할 때 발생하는 이벤트", "KeyEvent"},
        {"KeyListener 인터페이스의 모든 메서드를 구현한 클래스", "KeyAdapter"},
        {"키보드 입력 이벤트가 발생할 때까지 대기할 리스너를 등록", "addKeyListener"},
        {"키보드 입력시 호출되는 메서드", "keyPressed"},
        {"입력된 키 값을 가져오는 메서드", "getKeyCode"},
        {"부모 클래스 객체에 대한 레퍼런스", "super"},
        {"생성시 전달받은 시간과 리스너를 바탕으로 일정 시간 후 해당 리스너를 활성화 시키는 클래스", "Timer"},
        {"타이머를 시작하는 메서드", "start"},
        {"타이머를 종료하는 메서드", "stop"},
        {"레이블을 전달받은 이미지로 설정하는 메서드", "setIcon"},
        {"전달받은 참, 거짓에 따라 버튼을 활성화하거나 비활성화하는 메서드", "setEnabled"},
        {"객체 자신에 대한 레퍼런스", "this"},
        {"데이터를 쉽게 추가하거나 삭제할 수 있는 가변 길이 리스트로 멀티 쓰레드에서도 사용 가능", "ArrayList"},
        {"해당 메서드에서 예외가 발생하면 지정한 예외 클래스로 보내서 처리", "throws"},
        {"파일 입출력시 발생할 수 있는 예외를 처리하기 위한 클래스", "IOException"},
        {"키보드와 같은 표준 입력", "System.in"},
        {"모니터와 같은 표준 출력", "System.out"},
        {"바이트 스트림을 문자 스트림으로 변환하여 데이터를 읽어오는 클래스", "InputStreamReader"},
        {"문자 스트림을 바이트 스트림으로 변환하여 데이터를 출력하는 클래스", "OutputStreamWriter"},
        {"효율성을 고려하여 버퍼에 데이터를 모았다가 한꺼번에 읽어오는 클래스", "BufferedReader"},
        {"효율성을 고려하여 버퍼에 데이터를 모았다가 한꺼번에 쓰는 클래스", "BufferedWriter"},
        {"데이터를 한줄씩 읽어오는 메서드", "readLine"},
        {"쓰기메서드", "write"},
        {"버퍼에 남아있는 데이터를 밀어내기", "flush"},
        {"닫기 메서드", "close"},
        {"try-catch-finally 문의 시작을 나태내고, 중괄호 안에 예외가 발생할 가능성이 있는 코드 포함", "try"},
        {"try-catch-finally 문에서 예외 발생시 실행할 코드를 기술", "catch"},
        {"try-catch-finally 문에서 예외 발생 여부와 상관없이 무조건 실행할 코드를 포함", "finally"},
        {"숫자 형식 불일치로, \'10\'과 같은 숫자 문자열은 정수로 변환 가능하지만, 문자열 'a'는 불가능", "NumberFormatExcept"},
        {"입력 자료형 불일치", "InputMismatchExcept"},
        {"산술 연산 오류로, 예를 들어 4/0 = 무한대이므로 유한한 메모리 공간에 저장 불가능하여 예외 발생", "ArithmeticException"},
        {"배열 허용 범위 초과", "ArrayIndexOutOfBoundsException"},
        {"빈 객체 접근 오류", "NullPointerException"},
        {"메인 스레드와 별개로 작동할 수 있는 작업 단위", "Thread"},
        {"예외", "Exception"},
        {"스레드를 시작하는 메서드", "start"},
        {"스레드를 시작하는 메서드에서 호출하며 실질적으로 스레드 작업을 수행", "run"},
        {"스레드를 일정 기간동안 실행을 중지하며, 밀리초가 기본단위로 1000이면 1초 중지", "sleep"},
        {"해당 객체의 배경색을 설정하는 메서드", "setBackground"},
        {"전달받은 참, 거짓에 따라 버튼을 활성화하거나 비활성화하는 메서드", "setEnabled"},
        {"파일을 관리하는 클래스", "File"},
        {"파일에서 데이터를 읽어오는 클래스", "FileReader"},
        {"객체가 없음", "null"},
        {"서버에서 네트워크를 개설하기 위한 소켓", "ServerSocket"},
        {"서버-클라이언트를 1:1로 연결하기 위한 네트워크 소켓", "Socket"},
        {"클라이언트에서 서버로 연결 요청 시 이를 받아들여 연결 활성화", "accept"},
        {"출력스트림에 데이터를 보내며, print, println 등 편리한 메서드를 제공", "PrintWriter"},
        {"네트워크에 연결된 입력 스트림 가져오기", "getInputStream"},
        {"네트워크에 연결된 출력 스트림 가져오기", "getOutputStream"},
        {"별도의 분리된 서버 대신 현 PC를 서버로 연결하여 사용하는 경우 서버 주소", "localhost"},
        {"스레드에서 run메서드를 호출할 수 있도록 지원하는 인터페이스", "Runnable"},
        {"스레드에서 시작하는 메서드에서 호출하며 실질적으로 스레드 작업 수행", "run"},
        {"JFrame에 있는 종료(X) 버튼을 클릭하면 호출되어 실행하는 메서드", "windowClosing"},
        {"스레드를 시작하는 메서드", "start"},
        {"스레드를 중단하는 메서드", "interrupt"},
        {"데이터를 멀티클라이언트 서버에서 관리하는 모든 클라이언트에 전송", "broadcast"},
        {"WindowAdapter에서 Window 인터페이스의 모든 메서드를 이미 implements했으므로, WindowAdapter를 상속하면 필요한 메서드만 재정의 가능", "WindowAdapter"},
        {"변수에 저장할 수 있는 상수값들을 나열한 열거형", "enum"},
        {"두 값을 비교하는 compareTo 메서드를 제공하는 인터페이스", "Comparable"},
        {"제네릭 타입으로 미지의 자료형을 나타내며 객체 인스턴스 생성시 자료형이 구체화", "T"},
        {"배열의 길이", "length"},
        {"클래스 객체의 데이터 값과 전달인자의 데이터 값을 비교한 차이를 반환하며, 같으면 0을 반환", "compareTo"},
        {"메서드 내에서 자기 자신을 호출하는 메서드", "재귀"},
        {"Σ함수가 다음 Σ함수를 호출할 때 감소값", "1"},
        {"!(factorial)함수가 종료되는 조건의 상수", "1"},
        {"Σ함수가 종료되는 조건의 상수", "0"},
        {"!(factorial)은 !n = n * !(n-1)로 자기 자신인 factorial함수를 다시 호출하는 재귀 함수", "factorial"},
        {"원판 하나를 옮기는 메서드", "moveOneDisk"},
        {"원판을 출발기둥, 임시기둥, 도착기둥을 이용해 이동하는 메서드", "moveTower"},
        {"N-1개 원판을 출발기둥에서 임시기둥으로 모두 이동", "start, end, temp"},
        {"N-1개 원판을 임시기둥에서 도착기둥으로 모두 이동", "temp, start, end"}

    };
    while (1) {
        int questionCount = sizeof(quizList) / sizeof(quizList[0]);

        // 랜덤 문제 출제
        randomQuestion(quizList, questionCount);
        printf("\033[2J"); // 화면 지우기
        printf("\033[H");  // 커서를 (0, 0)으로 이동 (첫 줄 첫 칸)
    }
    return 0;
}
