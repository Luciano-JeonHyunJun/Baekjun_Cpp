#include <iostream>
using namespace std;

int main()
{
	
	int n;
	int sum = 0;
	cin >> n;

	for(int i = 0; i <= n; i ++) // for(초기식 ; 조건식 ; 증감식)
	{
		sum = i + sum;
	}
		cout << sum;

	return 0;
}