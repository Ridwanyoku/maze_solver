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

    // maze[1][2] = robot;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << maze[i][j];
        }
        cout << '\n';
    }
}

class Coord {
    public:
    int y = 1;  
    int x = 1;
};

// void checkCoord() {
//     Coord myCoord;


//     cout << "saat ini robotmu berada di koordinat " << maze[myCoord.x][myCoord.y] << endl;
// }

void solveMaze() {
    class Coord myCoord;

    int y = 1;
    int x = 1;

    myCoord.y = y;
    myCoord.x = x;

    while (maze[y][x] != flag)
    {
        if (maze[y][x + 1] != wall) {
            x = x + 1;
        } else if (maze[y+1][x] != wall) {
                y = y + 1;
        } else {
            cout << "sudah tidak bisa begerak lagi" << endl;
            break;
        }
    }
    
    //     printMaze();
    // }

    // if (maze[y][x] != flag) {
    //     while (maze[y][x + 1] != wall) {
    //         x + 1;
    //     }
    // }


    maze[y][x] = robot;

    printMaze();
}

main () {

    printMaze();
    // checkCoord();
    solveMaze();

    return 0;
}