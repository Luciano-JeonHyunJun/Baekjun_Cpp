#include <iostream>
using namespace std;

int solution(int n)
{
	int count = 99; // ���� ���� 
	int arr[3] = { 0 }; // arr�̶�� 3�ڸ��� �迭 ���� 
	int result;
	
	if(n < 100) // ���� x�� 100���� �۴ٸ�  
	{
		return n; // n�� ��ȯ�Ѵ�
	} 
	else{
	
		for(int i = 100; i <= n; i++)  
		{
			arr[0] = i / 100; //arr�� ù��° �ڸ��� i ������ 100
			arr[1] = (i % 100) / 10; //�ι�° �ڸ��� i �� 100���� �������� 10���� ������ 
			arr[2] = (i % 100) % 10; // ����° �ڸ��� i�� 100�� ���� �������� ������ ������
		
			if(arr[0] - arr[1] == arr[1] - arr[2]) // ù��° �ڸ� - �ι�° �ڸ� == �ι�° �ڸ� - ����° �ڸ���� 
				++result;// ����� ++ 
		}	
		}
	 return (99 + result); // ����� 99�� ���ؼ� ��ȯ�Ѵ�. 
	}
	
	int main()
	{
		int n;
		cin >> n;
		
		cout << solution(n) << "\n";
		
		return 0;
	}
	

