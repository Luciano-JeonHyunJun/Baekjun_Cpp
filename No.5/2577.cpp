#include <iostream>

using namespace std;

int main(){
	int A,B,C;
	int mul = 0;
	int arr[10]={0};
	cin>>A;
	cin>>B;
	cin>>C;
	mul = A * B * C;
	
	while(mul !=0){
		arr[mul%10]+=1;
		mul = mul/10;
	}
	
	
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
