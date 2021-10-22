#include <iostream>
using namespace std;

int main()
{
	int test , stu , sco[1000] , avg = 0; //테스트 케이스 , 학생수 , 점수 , 평균 선언 
	double ans; // 답
	cin >> test;  
	for(int i = 0; i < test; i++){ // 테스트 수 만큼 학생수 입력 
		cin >> stu;
		int sum = 0; // 합계 초기화 
		
		for(int j = 0; j < stu; j++){ //점수 입력받기 
			cin >> sco[j]; // 점수 입력 받기 
			sum += sco[j]; // 입력 받은 점수를 합계에 더함 
		}
		avg = sum / stu; // 평균값은 합계 나누기 학생수 
		double count = 0; 
		for(int j = 0; j < stu; j++){
			if(avg < sco[j]) // 점수가 평균보다 높을 시 count 는 더해지기 
					count++;
		}
		
		ans = (count / stu) * 100; // 비율 계산 
		cout.precision(3); // 소숫점 3자리 까지만 출력하 
		cout << fixed;  
		cout << ans << "%" << endl;
	} 
	
	return 0;
}
