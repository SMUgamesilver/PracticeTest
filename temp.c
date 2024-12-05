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
        {"마우스와 관련된 이벤트를 입력받는 함수", "MouseListener"},
        {"마우스를 눌렀을 때 이벤트를 처리하는 함수", "MousePressed"},
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
