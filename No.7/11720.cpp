#include <iostream>
using namespace std;

int main()
{
	int n; // 숫자의 갯수 
	char ch;
	
	int total = 0; 
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		 cin >> ch;
		 total += ch - 48 // char 형으로 받았으니깐 아스키코드 '0'은 48이니 48을 뺀다 
		 
	}
	
		cout << total << endl;
		 
	return 0;
}
