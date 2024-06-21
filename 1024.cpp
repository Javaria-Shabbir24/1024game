#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

char run = 'q';
int a[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} };

void grid() {
    cout << "    " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] > 0) {
                cout << "|    " << a[i][j] << "    ";
            }
            else {
                cout << "|    ";
            }
        }
        cout << "|" << endl;
        cout << "    " << endl;
    }
}

//*******************************NEW RANDOM NUMBER FORMATION AT EVERY MOVE******************//
void newR() {
    int p, q;
    while (true) {
        p = rand() % 4;
        q = rand() % 4;
        if (a[p][q] == 0) {
            a[p][q] = rand() % 2 + 1;
            break;
        }
    }
}

//*********************MAIN GRID WITH TWO RANDOM NUMBERS****************************//
void display() {
    int k = rand() % 4;
    int l = rand() % 4;
    int m = rand() % 4;
    int n = rand() % 4;
    cout << "Here is the 1024 game";
    cout << endl << "INSTRUCTION : " << endl;
    cout << "1. Use arrow keys for movement " << endl;
    cout << "2. Press q anytime to quit the game" << endl;
    cout << "    " << endl;
    a[k][l] = rand() % 2 + 1;
    if (k != m && l != n) {
        a[m][n] = rand() % 2 + 1;
    }
    grid();
}

/************************ selection of buttons ***********************/
//**********************LEFT KEY PRESSED****************//
void left() {
    // Your logic for left key
    newR();
    grid();
}

//**********************RIGHT KEY PRESSED****************//
void right() {
    // Your logic for right key
    newR();
    grid();
}

//**********************UP KEY PRESSED****************//
void addup() {
    for (int j = 0; j < 3; j++) {
        for (int i = 3; i > 0; i--) {
            int k = j;
            int l = i - 1;
            if (a[l][k] == a[i][j]) {
                a[l][k] *= 2;
                a[i][j] = 0;
            }
            else if (a[l][k] == 0) {
                a[l][k] = a[i][j];
                a[i][j] = 0;
            }
        }
    }
}

void up() {
    // Your logic for up key
    newR();
    addup();
    grid();
}

//**********************DOWN KEY PRESSED****************//
void down() {
    // Your logic for down key
    newR();
    grid();
}

//******************************SELECT ANY ARROW KEY TO MOVE*******************************//
void button() {
    int b;
    while (true) {
        b = _getch();
        if (b == 75) { // Left arrow key
            left();
        }
        else if (b == 80) { // Down arrow key
            down();
        }
        else if (b == 77) { // Right arrow key
            right();
        }
        else if (b == 72) { // Up arrow key
            up();
        }
        else if (b == 113) { // 'q' key
            break;
        }
    }
}

//****************************WIN FUNCTION**************************//
void win() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] == 1024) {
                cout << "YOU WON !" << endl;
            }
        }
    }
}

int main() {
    display();
    button();
    win();
    system("pause");
    return 0;
}
