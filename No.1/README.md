# <a href="https://www.acmicpc.net/step/1">No.1 입출력과 사칙연산 단계 C++17</a>

## 목차
- [2557번](#2557번-Hello-World)

## <a href="https://www.acmicpc.net/problem/2557">2557번 Hello World</a> 
Hello World!를 출력하시오.

~~~cpp
// Hello World! 를 출력 하는 문제

#include <iostream>

int main() {

std::cout<<"Hello World!"; 

    return 0;
}
~~~

### 설명
2557번은 간단합니다 단지 Hello World!를 출력시키는 문제였는데요.<br />
제 코드를 보시면 앞에 **std::** 라고 따로 키워드를 붙혔지만 std:: 를 생략 할수 있는데요 방법은 밑에 코드를 봐주세요!
~~~cpp
#include <iostream>
using namespace std;

int main() 
{

cout<<"Hello World!";
    return 0;
}
~~~
위처럼 **using namespace std;** 라는 문장을 쓰시면 됩니다.

### 참고 자료
<a href="https://sites.google.com/site/ub8566/geim-peulogeulaeming-ui-jeongseog/01-cheoeum-mandeuneun-geim/namespace-sayong">using namespace std::가 뜻하는 의미</a>

## 
