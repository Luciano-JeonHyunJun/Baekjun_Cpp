#include <iostream>
using namespace std;

int main()
{
	int n; // ������ ���� 
	char ch;
	
	int total = 0; 
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		 cin >> ch;
		 total += ch - 48 // char ������ �޾����ϱ� �ƽ�Ű�ڵ� '0'�� 48�̴� 48�� ���� 
		 
	}
	
		cout << total << endl;
		 
	return 0;
}
