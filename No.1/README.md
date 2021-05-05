# <a href="https://www.acmicpc.net/step/1">No.1 입출력과 사칙연산 단계 C++17</a>

## 목차
- [2557번 Hello World](#2557번-Hello-World)
- [10718번 We love krii](#10718번-We-love-krii)
- [10171번 고양이](#10171번-고양이)

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

## <a href="https://www.acmicpc.net/problem/10718">10178번 We love krii</a>
두 줄에 걸쳐 "강한친구 대한육군"을 한 줄에 한 번씩 출력한다.

~~~cpp
// 강한친구 대한육군 <- 옆 문장을 두 줄로 표현합니다.

#include <iostream>

int main() {


std::cout<<"강한친구 대한육군"<<std::endl;
std::cout<<"강한친구 대한육군"<<std::endl;

    return 0;
}
~~~

### 설명
10718번 문제는 정말 간단합니다. 단지 문제에서 시키는데로만 하면 정답인데요.<br />
우선 문제에서 시키는것은 **강한친구 대한육군** 이라는 문자를 두줄로 출력하면 되는데요.<br />
딱히 설명할 내용은 없다고 생각이 되지만 제가 위에서 말씀드린데로 **std::** 는 **using namespace std;** 로 대체가 가능하다는것을 알고가셨으면 좋겠습니다.

### 참고자료
**없습니다 읽어주셔서 감사합니다 :)**

## <a href="https://www.acmicpc.net/problem/10171">10171번 고양이</a>
아래 예제와 같이 고양이를 출력하시오.

> 예제 
\    /\
 )  ( ')
(  /  )
 \(__)|
 
~~~cpp
//고양이를 출력하시오

#include <iostream>
using namespace std;

int main() {

    cout<<"\\    /\\"<<endl;
    cout<<" )  ( ')"<<endl;
    cout<<"(  /  )"<<endl;
    cout<<" \\(__)|"<<endl;

    return 0;
}
~~~

### 설명
고양이 문제부터 살짝 머리를 쓰셔야합니다. 그전에 다른 파이썬이라던지 자바라던지 다른 언어를 공부하셨던 분들이라면<br /> 
아마 이 문제에서 어떤것을 원하는것인지 <br /> 
바로 아셨을텐데요. 바로 이스케이프 문자의 활용도입니다.<br />
이스케이프 문자에서 한가지 종류를 살펴보면 \ 를 출력하는 방법이 있습니다. 바로 **\\** 인데요. <br />
그러면 예제에서 첫줄부터 \ 이스케이프 문자를 출력하라고 지시하니 **\\** 로 바꿔주시면 됩니다. 이런식으로 고치시면 되는데요.

### 참고자료
<a href="https://atomic0x90.github.io/c++/2020/02/17/c++-escape-sequence.html">이스케이프 시퀸스 종류 확인하기</a>






