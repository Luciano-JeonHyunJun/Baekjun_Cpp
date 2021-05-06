#include <iostream>
using namespace std;

int main() 
{
    int y;
    cin >> y ;

    if(y % 4 == 0 & y % 100 != 0 || y % 400 == 0 )
        cout << "1";
    else
        cout << "0";


    return 0;
}

/**
C++의 논리 연산자 
and : &
or  : ||

eroor 1
if 조건문 괄호뒤에 ; 세미콜론을 붙었음
**/