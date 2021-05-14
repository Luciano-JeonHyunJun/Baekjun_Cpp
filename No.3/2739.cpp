#include <iostream>
using namespace std;

int main() 
{

    int n;
    cin>>n;

   for (int i = 1; i < 10; i++ ) // 9까지 출력이므로 10 이라고 써서 1~9까지 출력
   {
   	cout << n << " * " << i << " = " << n*i << endl;
   }
   return 0;
}