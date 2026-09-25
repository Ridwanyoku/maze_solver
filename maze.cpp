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


class Coord {
    public:
    int y = 1;  
    int x = 1;
};

void printMaze() {

    
    class Coord myCoord;
    
    // cout << myCoord.y << myCoord.x;

    // maze[myCoord.y][myCoord.x] = robot;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << maze[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // maze[myCoord.y][myCoord.x] = path;
}

void solveMaze() {
    class Coord myCoord;

    int y = 1;
    int x = 1;

    while (maze[y][x] != flag)
    {
        if (maze[y][x + 1] != wall) {
            x = x + 1;
            cout << "right ";
        } else if (maze[y + 1][x] != wall) {
                y = y + 1;
                cout << "down ";
        } else if (maze[y][x - 1] != wall) {
                x = x - 1;
                cout << "left ";
        } else {
            cout << "sudah tidak bisa begerak lagi" << endl;
            break;
        }
        
    }

    cout << endl;
    maze[y][x] = robot;
    printMaze();
    cout << "bendera telah diambil, sekarang menuju goal " << endl;
    
    maze[y][x] = path;

    while (maze[y][x] != goal)
    {
        if (maze[y][x + 1] != wall) {
            x = x + 1;
            cout << "right ";
        } else if (maze[y - 1][x] != wall) {
                y = y - 1;
                cout << "up ";
        } else if (maze[y][x - 1] != wall) {
                x = x - 1;
                cout << "left ";
        } else {
            cout << "sudah tidak bisa begerak lagi" << endl;
            break;
        }
        
    }

    cout << endl;
    maze[y][x] = robot;
    printMaze();
    cout << "goal!!!!!!" << endl;
}

main () {

    printMaze();
    solveMaze();

    return 0;
}