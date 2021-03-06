# <a href="https://www.acmicpc.net/step/1">No.1 입출력과 사칙연산 단계 C++17</a>

## 목차
- [2557번 Hello World](#2557번-Hello-World)
- [10718번 We love krii](#10718번-We-love-krii)
- [10171번 고양이](#10171번-고양이)
- [10172번 개](#10172번-개)
- [1000번 A+B](#1000번-A+B)
- [1001번 A-B](#1001번-A-B)
- [10998번 AxB](#10998번-AxB)
 
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

## <a href="https://www.acmicpc.net/problem/10172">10172번 개</a>
아래 예제와 같이 개를 출력하시오.
> 예제
~~~cpp
|\_/|
|q p|   /}
( 0 )"""\
|"^"`    |
||_/=\\__|
~~~

~~~cpp
#include <iostream>
using namespace std;

int main() {

  cout<<"|\\_/|"<<endl;
  cout<<"|q p|   /}"<<endl;
  cout<<"( 0 )\"\"\"\\"<<endl;
  cout<<"|\"^\"`    |"<<endl;
  cout<<"||_/=\\\\__|"<<endl;

  return 0;
}   
~~~

### 설명
위에 고양이 문제처럼 이번에 **개** 문제도 이스케이프 문자를 활용하는 문제인데요.<br />
저는 고양이를 풀때보다 **개** 라는 문제가 더욱 활용도가 높아보였습니다.<br />
우선 위에서 설명한대로 이스케이프 문자는 \\ 를 쓰면 **\으로 출력이 된다는 규칙** 이 있습니다.
그걸 활용해서 문제를 해결하시면 됩니다.

### 참고자료
> 위와 동일합니다.
<a href="https://atomic0x90.github.io/c++/2020/02/17/c++-escape-sequence.html">이스케이프 시퀸스 종류 확인하기</a>

## <a href="https://www.acmicpc.net/problem/1000">1000번 A+B</a>
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
> 입력
첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

~~~cpp
#include <iostream>
using namespace std;

int main() {

int a , b;

cin>>a>>b;

cout<<a+b;

  return 0;
}
~~~

### 설명
이 문제는 일단 파이썬을 포커스로 맞추고 설명을 드리겟습니다 , 우선 처음보는 **cin** 은 어떤 역활일까요? cin은 입력을 받는 키워드입니다.<br />
cin은 그러면 파이썬에서는 어떤 역활을 하고 있을까요? 바로 **input()** 입니다. 저 문제를 파이썬으로 풀면 이런 코드가 되는데요
~~~ python
a,b = int(input())

print(a + b)
~~~
이런 간단한 코드입니다. 그러면 코드에서는 a,b를 int라는 정수형으로 입력을 받은 상태인건데요. <br />
그후에는 문제에서 원하는데로 cout 즉 출력을 시키는 키워드로 a + b의 값을 출력시킬수 있도록 하시면 됩니다.

### 참고자료
<a href="https://www.cplusplus.com/doc/tutorial/basic_io/">cin과cout을 정리해둔 사이트</a>

## <a href="https://www.acmicpc.net/problem/1001">1001번 A-B</a>
두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오
> 입력
첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

~~~cpp
#include <iostream>
using namespace std;

int main() {

int a , b;
cin>>a>>b;
cout<<a-b;

  return 0;
}
~~~

### 설명 
이 문제에서는 우선적으로 위에 문제와 똑같은 방식으로 **cin** 으로 입력을 받아줍니다.<br />
그후에 a + b 를 a - b 로 변경해주시면 됩니다.

### 참고자료
**없습니다 읽어주셔서 감사합니다 :)**

## <a href="https://www.acmicpc.net/problem/10998">10998번 AxB</a>
두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.
>입력
첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

~~~cpp
#include <iostream>
using namespace std;

int main() {

int a , b;
cin>>a>>b;
cout<<a * b;

  return 0;
}
~~~

### 설명
이 문제 또한 간단합니다 단지 프로그래밍이나 컴퓨터의 곱셈 문자만 알고 있다면 쉽게 풀고 제출 할수 있는 문제입니다.
컴퓨터 프로그래밍에서 곱하기는 수학과목에서는 x 지만 컴퓨터에서 인식을 시키려면 * 로 써야합니다. <br />

### 참고자료
<a href="https://m.blog.naver.com/PostView.naver?blogId=brickbot&logNo=220471008262&proxyReferer=https:%2F%2Fwww.google.com%2F">컴퓨터 산술연산자 종류</a>









