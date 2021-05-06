#include <iostream>
using namespace std;

int main() {

    int x;
    cin >> x;
    int y;
    cin >> y;

    if(x > 0 & y > 0)
        cout << "1";
    else if(x < 0 & y > 0)
        cout << "2";
    else if(x < 0 & y < 0)
        cout << "3";
    else
        cout << "4";

    return 0;
}

/**
error 1
- 3을 출력시켜야 할때 조건이 2와 다른점이 없었다.
**/