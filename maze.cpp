// pemecah labirin meggunakan cpp

#include <iostream>

using namespace std;

const int rows = 7;
const int columns = 7;
char maze[rows][columns] = {
    {'#', '#', '#', '#', '#', '#', '#'},
    {'#', 's', '#', '.', '.', '.', '#'},
    {'#', '.', '#', '.', '#', 'g', '#'},
    {'#', '.', '.', '.', '#', '.', '#'},
    {'#', '#', '#', '.', '.', '.', '#'},
    {'#', 'x', '.', '.', 'f', '.', '#'},
    {'#', '#', '#', '#', '#', '#', '#'},
};

const char robot = 'r';
const char wall = '#';
const char path = '.';
const char start = 's';
const char bomb = 'x';
const char flag = 'f';
const char goal = 'g';

void printMaze() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << maze[i][j];
        }
        cout << '\n';
    }
}


class Coord {
    public:
    int x = 0;  
    int y = 0;
};

void checkCoord() {
    Coord newCoord;

    newCoord.x = 1;
    newCoord.y = 1;

    int xNow = newCoord.x;
    int yNow = newCoord.y;

    cout << maze[newCoord.x][newCoord.y];

    // if (xNow && yNow == maze[1][1]) {
    //     cout << "ini tembok";
    // } else {
    //     cout << "no";
    // }
}

main () {

    printMaze();
    checkCoord();

    return 0;
}