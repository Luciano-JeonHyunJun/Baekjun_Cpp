#include <iostream>
using namespace std;

int main() 
{
    double a,b;
    cin >> a >> b;

    cout.precision(15);
    cout<< a/b <<endl;

    return 0;
}

/**
double :  배정도 부동 소수점 
precision : 연산자 오버로딩을 사용할때 precision을 사용합니다.
cin : 파이썬에서는 input이 있다면 cpp에서는 cin을 사용합니다.

cout =  출력 / cin = 입력

**/
