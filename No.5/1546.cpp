#include <iostream>
using namespace std;

int main()
{
	int n;
	int score[1000] = {};
	int max = 0;
	double result = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> score[i]; // score index를 입력받음
		if (score[i] > max) // 만약 score index가 max보다 작다면
			max = score[i]; // max는 score index가 됨 
			result += score[i];  //result - score index 결과를 result 에 넣어줌
			
	}
	
	result = (result / max * 100) /n; // 결과는 결과 나누기 max 곱하기 100 나누기 n
	
	cout << fixed;
	cout.precision(6);
	cout << result << endl; 
	
	return 0;
}
