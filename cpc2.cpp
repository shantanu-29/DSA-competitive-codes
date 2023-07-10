#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--) {
        vector<string> grid(3);
        for (int i = 0; i < 3; i++) {
            cin >> grid[i];
        }

        bool xWon = false;
        bool oWon = false;
        bool plusWon = false;

        for (int i = 0; i < 3; i++) {
            if (grid[i][0] == 'X' && grid[i][1] == 'X' && grid[i][2] == 'X') {
                xWon = true;
                break;
            }
        }

        for (int j = 0; j < 3; j++) {
            if (grid[0][j] == 'X' && grid[1][j] == 'X' && grid[2][j] == 'X') {
                xWon = true;
                break;
            }
        }

        if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X') {
            xWon = true;
        }

        if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X') {
            xWon = true;
        }

        for (int i = 0; i < 3; i++) {
            if (grid[i][0] == 'O' && grid[i][1] == 'O' && grid[i][2] == 'O') {
                oWon = true;
                break;
            }
        }

        for (int j = 0; j < 3; j++) {
            if (grid[0][j] == 'O' && grid[1][j] == 'O' && grid[2][j] == 'O') {
                oWon = true;
                break;
            }
        }

        if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') {
            oWon = true;
        }

        if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O') {
            oWon = true;
        }

        for (int i = 0; i < 3; i++) {
            if (grid[i][0] == '+' && grid[i][1] == '+' && grid[i][2] == '+') {
                plusWon = true;
                break;
            }
        }

        for (int j = 0; j < 3; j++) {
            if (grid[0][j] == '+' && grid[1][j] == '+' && grid[2][j] == '+') {
                plusWon = true;
                break;
            }
        }

        if (grid[0][0] == '+' && grid[1][1] == '+' && grid[2][2] == '+') {
            plusWon = true;
        }

        if (grid[0][2] == '+' && grid[1][1] == '+' && grid[2][0] == '+') {
            plusWon = true;
        }

        if (xWon) {
            cout << "X" << endl;
        } else if (oWon) {
            cout << "O" << endl;
        } else if (plusWon) {
            cout << "+" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}
