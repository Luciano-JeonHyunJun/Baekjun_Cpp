#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
 
    string quiz;
    int scoreArr[100];
    int score = 0;
    int alpha = 1;
    for (int i = 0; i < n; i++, score=0, alpha=1) {
        cin >> quiz;
 
        for (int l = 0; l < quiz.length(); l++) {
            if (quiz.at(l) == 'O') {
                score += alpha;
                alpha++;
            }
            else {
                alpha = 1;
            }
        }
        scoreArr[i] = score;
    }
 
    for (int i = 0; i < n; i++) {
        cout << scoreArr[i] << endl;
    }
 
}

