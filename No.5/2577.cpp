#include <iostream>
using namespace std;

int main()
{
	int a , b , c;
	cin >> a >> b >> c;
	
	int arr[10] = {0}; //0으로 초기화 

    int	cl = a * b * c; // 주어진 a,b,c 추가 
	
	
	while(cl != 0){  // cl이 0이면 true 아니면 false  
		arr[cl % 10] += 1; // 나머지 연산으로 갯수 더하기 
		cl /= 10; // 결과를 10으로 나누기 
	}
	
	for(int i = 0; i < 10;i ++){ // arr사이즈에 맞게 10으로 추가하기 
		cout << arr[i] << endl; // 한줄씩 출력하기 
	}
    

    return 0;
}
