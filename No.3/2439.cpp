/**

#include <iostream>
using namespace std;

int main() 
{

    int N;
    cin >> N;

    for(int i = 0; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            cout << " " << "*" << endl;
        }            
    }
    return 0;
}

**/

// 검색한 결과

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << '\n';
	}
}