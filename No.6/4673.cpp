#include <iostream>
using namespace std;


	int d(int n) //�Լ� ���� 
	{
	
	int sum = n; // sum ������ n�� ���� ������ �� sum���� ������ ����ϸ� ���� �ڿ� n�� ����� ���Ե� 

	while(n != 0) // ���� n�� 0�� �ƴ϶�� ? 
	{
		sum += n % 10; // n�� 10�� ������ �� �������� num�� �����ݴϴ� 
		n = n / 10; // n�� n ������ 10�� ���� 
	}
	
	
	return sum;				
} 

int main()
{
	bool arr [10001];
	
	int tmp;
	
	for(int i = 1; i <= 10000; i++) //���� int i�� 10000�� ���ų� Ŀ���������� i++  
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



