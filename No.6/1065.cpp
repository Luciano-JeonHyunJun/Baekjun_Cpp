#include <iostream>
using namespace std;

int solution(int n)
{
	int count = 99; // 숫자 세기 
	int arr[3] = { 0 }; // arr이라는 3자리의 배열 생성 
	int result;
	
	if(n < 100) // 만약 x가 100보다 작다면  
	{
		return n; // n을 반환한다
	} 
	else{
	
		for(int i = 100; i <= n; i++)  
		{
			arr[0] = i / 100; //arr의 첫번째 자리는 i 나누기 100
			arr[1] = (i % 100) / 10; //두번째 자리는 i 랑 100나눈 나머지를 10으로 나누기 
			arr[2] = (i % 100) % 10; // 세번째 자리는 i랑 100을 나눈 나머지를 나눈후 나머지
		
			if(arr[0] - arr[1] == arr[1] - arr[2]) // 첫번째 자리 - 두번째 자리 == 두번째 자리 - 세번째 자리라면 
				++result;// 결과는 ++ 
		}	
		}
	 return (99 + result); // 결과는 99를 더해서 반환한다. 
	}
	
	int main()
	{
		int n;
		cin >> n;
		
		cout << solution(n) << "\n";
		
		return 0;
	}
	

