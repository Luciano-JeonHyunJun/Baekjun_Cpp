#include <iostream>
using namespace std;


	int d(int n) //함수 선언 
	{
	
	int sum = n; // sum 변수에 n을 대입 함으로 써 sum으로 수식을 계산하면 선언문 뒤에 n에 결과가 대입됨 

	while(n != 0) // 만약 n이 0이 아니라면 ? 
	{
		sum += n % 10; // n과 10을 나눈후 그 나머지를 num에 더해줍니당 
		n = n / 10; // n은 n 나누기 10과 같다 
	}
	
	
	return sum;				
} 

int main()
{
	bool arr [10001];
	
	int tmp;
	
	for(int i = 1; i <= 10000; i++) //만약 int i가 10000과 같거나 커지기전까진 i++  
	{
		arr[i] = true; 
	}
	for(int i = 0; i <= 10000; i++) 
	{
		tmp = d(i); 
		
		if(tmp <= 10000)
		{
			arr[tmp] = false;
		}
		
	}
	
	for(int i = 0; i <= 10000; i++)
	{
		if(arr[i])
		{
			cout << i << "\n";
		}	
	}
	
	return 0;
}



