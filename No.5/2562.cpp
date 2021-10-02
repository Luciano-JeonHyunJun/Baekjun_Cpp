#include <iostream>
using namespace std;

int main()
{


    int n = 0;
    int iArr[9] = {};   
    int iNum = 0;
    int iMaxNum = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> n;
        iArr[i] = n;
        if(iMaxNum < iArr[i])
        {

            iMaxNum = iArr[i];
            iNum = i;

        } 
    }

    cout << iMaxNum << endl << iNum + 1;
    return 0;
}

** 문제 풀이 **
우선 n을 0으로 둔 이유는 int형인 n 변수는 입력을 받아오는 변수라서 0으로 둔것이고
iArr[9] 을 사용하여 사이즈가 9 인 배열을 만든다
그후 다른 변수 iNum , iMaxNum 변수를 만들고 반복문을 활용
반복문에서 i는 9보다 커지기 전까지 더하면서 실행한다.
그리고 n은 반복문을 통하여 입력을 받고
만약 반복문이 배열 크기보다 입력수가 커지면 멈춘다.
그리고 그 대입을 받을 때의 i번째 순서를 iNum( 몇번째 수인지 출력할 변수)에 대입한다.
마지막 출력 때는 iNum 에 +1을 해주고 출력을 해준다 ( 우리는 1부터 순서를 세지만 for문은 0부터 시작 했기 때문에 1을 더해 줘야한다)
