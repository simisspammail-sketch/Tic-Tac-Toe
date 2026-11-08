#include <iostream>
#include <string>
using namespace std;

string fields[9] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

void drawGame() {
    for (int i = 0; i < 9; i++) {

        //prints 1. row
        if (i < 3) {
            cout << fields[i];
            if (i < 2) {
                cout << "|";
            }
            else {
                cout << "\n";
                cout << "- - -" << '\n';
            }
        }

        //prints 2. row
        if (i < 6 && i>2) {
            cout << fields[i];
            if (i < 5) {
                cout << "|";
            }else {
                cout << "\n";
                cout << "- - -" << '\n';
            }
        }

        //prints 3. row
        if (i < 9 && i > 5) {
            cout << fields[i];
            if (i < 8) {
                cout << "|";
            }
            else {
                cout << endl;
                cout << endl;
            }
        }
        
    }
}

int main()
{
    bool isXturn = true;
    while (true) {
        drawGame();
 
        if (isXturn == true) {
            string input;
            cout << "X ist dran" << endl;
            cin >> input;

            for (int i = 0; i < 10; i++)
            {
                if (input == to_string(i)) {
                    i--;
                    fields[i] = "X";
                    i++;
                }
            }

            isXturn = false;
        }
        else {
            string input;
            cout << "O ist dran" << endl;
            cin >> input;

            for (int i = 0; i < 10; i++)
            {
                if (input == to_string(i)) {
                    i--;
                    fields[i] = "O";
                    i++;
                }
            }

            isXturn = true;
        }

    }
}
