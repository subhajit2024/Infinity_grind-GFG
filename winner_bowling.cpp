#include <vector>

using namespace std;

class Solution {
public:
    int isWinner(vector<int> player1, vector<int> player2) {
        int p1_score = countScore(player1);
        int p2_score = countScore(player2);
        if (p1_score > p2_score) {
            return 1;
        }
        else if (p1_score < p2_score) {
            return 2;
        }
        return 0;
    }

private:
    int countScore(vector<int> arr) {
        int score = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (i == 1) {
                if (arr[i - 1] == 10) {
                    score += (2 * arr[i]);
                }
                else {
                    score += arr[i];
                }
            }
            else if (i > 1) {
                if (arr[i - 1] == 10 || arr[i - 2] == 10) {
                    score += (2 * arr[i]);
                }
                else {
                    score += arr[i];
                }
            }
            else {
                score += arr[i];
            }
        }
        return score;
    }
};

