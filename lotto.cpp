#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <set>
using namespace std;

const int WHITEBALLS = 69;
const int WHITEPICKS = 5;
const int REDBALLS = 26;

int main() {
    srand(static_cast<unsigned>(time(0)));

    int numGames;
    cout << "How many games would you like to play? ";
    cin >> numGames;

    cout << " Author: hid \n\n";

    for (int game = 1; game <= numGames; game++) {
        set<int> whiteBalls;
        int redBall = rand() % REDBALLS + 1;

        while (whiteBalls.size() < WHITEPICKS) {
            int whiteBall = rand() % WHITEBALLS + 1;
            whiteBalls.insert(whiteBall);
        }

        cout << "White Balls are: ";
        for (auto ball : whiteBalls) {
            cout << ball;
            if (whiteBalls.size() > 1) {
                cout << " ";
            }
        }

        cout << " Power Ball is: " << redBall << "\n\n";
    }

    cout << " Author: hid " << numGames << " -----\n\n";

    return 0;
}
// this program has been generated with the colaboration of AI and some other resources.


