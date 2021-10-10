#include <iostream>
using namespace std;

int main()
{
	
	int input , count = 0; // 입력 받는 수는 0으로 
	int arr[42] = {0}; // 42를 나누는 수로 두니깐 42를 크기로하기 
	
	for(int i = 0 ; i < 10 ; i++) 
	{
		cin >> input; // input 변수를 입력 받기 
		if(!arr [input % 42] ++) // 해당 값이 0이 아니라면 
			count++; // 카운드 시작 ! 
	}
	cout << count; // 출력문  
	
	
	return 0;
}
