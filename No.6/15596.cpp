#include <vector>
	
long long sum(std::vector<int> &a){ //a라는 이름의 vetor list 생성  
		long long result = 0; // result 변수 초기화 
	
	
		for(int i = 0; i < a.size(); i++){ // i가 a의 size보다 같거나 커질때까진 i는 증가 
			result += a[i]; // 결과는 a의 index와 더합니당 
		}
	
		return result;
}
