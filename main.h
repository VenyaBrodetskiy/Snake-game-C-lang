#pragma once

#include <strsafe.h>
#include "resource.h"
#include "framework.h"

#include "snake.gamelogic.h"
#include "playground.gamelogic.h"
#include "init.interface.h"
#include "update.interface.h"
#include "game.paint.h"
#include "game.paint.h"

#define MAX_LOADSTRING 100

#define BUTTON_START 3 // N of button
#define BUTTON1_SIZE_X 100
#define BUTTON1_SIZE_Y 30

// static text parameters
#define STAT_TEXT1_X 55
#define STAT_TEXT1_Y 25

// dynamic text parameters
#define DYN_TEXT1_X 45
#define DYN_TEXT1_Y STAT_TEXT1_Y

// game params
#define DEFAULT_SPEED 100
#define SNAKE_LENGHT 5

// 
#define PIXEL_BLOCK 20
#define PG_BORDER PIXEL_BLOCK
#define FIELD_WIDTH 60
#define FIELD_HEIGHT 35

// Colors
#define COLOR_SNAKE RGB(128, 128, 255)
#define COLOR_WALL RGB(0, 0, 128)
#define COLOR_FOOD RGB(255, 128, 128)


typedef struct Point
{
    int x;
    int y;
} Point;

enum Direct {
    RIGHT,
    LEFT,
    UP,
    DOWN
};

enum Field {
    EMPTY,
    SNAKE,
    WALL,
    FOOD
};

typedef struct Snake
{
    enum Direct direct;
    Point body[1000];
    int indexOfHead;
    int indexOfTail;
    Point head;
    Point tail;
    int score;
} Snake, *pSnake;

// Forward declarations of functions included in this code module:
ATOM                MyRegisterClass(HINSTANCE hInstance);
LRESULT CALLBACK    MainWindowProcedure(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

BOOL startNewGame(HWND hWindowMain);