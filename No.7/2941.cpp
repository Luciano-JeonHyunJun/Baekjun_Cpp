#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eng;
	cin >> eng;
	
	int index;

	string arr[8] = {"c=" , "c-" , "dz=" , "d-" , "lj" , "nj" , "s=" , "z=" };
	
	for(int i = 0; i < 8; ++i) //8���� ������ arr�� �� ũ�ξ�Ƽ�� ���ĺ��� ���� �Ѱ��� 8�� �̱⶧���� 
	{
		while (1) {
		
		index = eng.find(arr[i]);
		if(index == string::npos)	// npos�� ���ϴ� �ܾ ������ ã���ְ� �˻��� string::npos()�� ���Ͽ� �˼� ����	
			break; 
			
		eng.replace(index , arr[i].length(), "a"); // ���ڿ� �Ϻθ� �ٲ��ִ� replace 
		}	
	} 
	
	cout << eng.length();

	return 0;
}
