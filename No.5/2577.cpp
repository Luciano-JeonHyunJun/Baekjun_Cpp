#include <iostream>
using namespace std;

int main()
{
	int a , b , c;
	cin >> a >> b >> c;
	
	int arr[10] = {0};

	int	cl = a * b * c;
	
	
	while(cl != 0){
		arr[cl % 10] += 1;
		cl /= 10;
	}
	
	for(int i = 0; i < 10;i ++){
		cout << arr[i] << endl;
	}
    

    return 0;
}
