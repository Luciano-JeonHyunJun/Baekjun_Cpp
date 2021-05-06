#include <iostream>

using namespace std;

int main()
{
   
    int a = 0;
    int b = 0;
   
   // 시 , 분 입력
    cin >> a >> b;

	// b을 45를 뺏을때 0보다 작으면
    if((b-45)<0){
        
        // 시간을 한시간뺀다
        a =  a-1;
        
        // 시간이 0보다 작아질때는
        if (a < 0){
			
            // 23시
			a = 23;
				// a = 23시 b에서 45분빼고 뺀 음수에서 60더함
			  cout << a << " "<< (b-45)+60 << endl;    

			
        }else{
        
        	// b에서 45분빼고 음수에서 60더함
            cout << a << " " << (b-45)+60 << endl;    

        }
    
    // 45분을 뺏을때 b가 영보다 크면
    }else{
       
        // 시, 45분뺀 b
        cout << a << " "<< b-45 << endl;    

    }

   return 0;
}

// https://hhk1364.tistory.com/29



/** 현준 풀이
#include <iostream>
using namespace std;

int main() {

    int H;
    cin >> H;
    int M;
    cin >> M;

    if(M > 44)
        cout << H,M - 45;
    else if(M < 45 & H > 0)
        cout << H - 1,M + 15;
    else
        cout << 23 , M + 15;

    return 0;
}
**/
