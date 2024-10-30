#include <stdio.h>
#include <conio.h>   // for _kbhit() and _getch() on Windows
#include <stdlib.h>  // for system("cls") to clear the screen
#include <time.h>    // for random generation of food coordinates

// Define constants for the game
#define WIDTH 20
#define HEIGHT 20

// Declare global variables
int gameOver;
int x, y, foodX, foodY, score;
int tailX[100], tailY[100];
int tailLength;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

void setup() {
    gameOver = 0;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;
    score = 0;
    tailLength = 0;
}

void draw() {
    system("cls");  // Clear the console (use "clear" if using Linux/Unix)
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                printf("#");
            if (i == y && j == x)
                printf("O");  // Snake head
            else if (i == foodY && j == foodX)
                printf("F");  // Food
            else {
                int printTail = 0;
                for (int k = 0; k < tailLength; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o");
                        printTail = 1;
                    }
                }
                if (!printTail)
                    printf(" ");
            }

            if (j == WIDTH - 1)
                printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");
    printf("Score: %d\n", score);
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'x':
            gameOver = 1;
            break;
        }
    }
}

void logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < tailLength; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    // Check for collisions with walls
    if (x >= WIDTH) x = 0; else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0; else if (y < 0) y = HEIGHT - 1;

    // Check for collision with self (tail)
    for (int i = 0; i < tailLength; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;
    }

    // Check if snake ate the food
    if (x == foodX && y == foodY) {
        score += 10;
        foodX = rand() % WIDTH;
        foodY = rand() % HEIGHT;
        tailLength++;
    }
}

int main() {
    srand(time(0));  // Seed the random number generator
    setup();

    // Game loop
    while (!gameOver) {
        draw();
        input();
        logic();
        _sleep(100);  // Control game speed (adjust for faster/slower snake)
    }

    printf("Game Over!\n");
    return 0;
}

