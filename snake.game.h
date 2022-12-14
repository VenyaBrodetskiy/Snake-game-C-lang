#pragma once

// game results
#define LOW_RESULT 40
#define AVERAGE_RESULT 200
#define HIGH_RESULT 500

void	initSnake(Snake* snake, char** PlayGroundMap, RECT_ PlayGroundInBlocks, ControlUI* controlUI);
void	clearSnake(Snake* snake, char** PlayGroundMap, RECT_ PlayGroundInPixels);
BOOL	changeSnakeDirection(KEYDOWN keyDown, Snake* snake, BOOL isKeyDown);
void	moveSnake(Snake* snake, char** PlayGroundMap, RECT_ PlayGroundInBlocks);
void	gameOver(Snake* snake);
int		generateFood(Snake* snake, char** PlayGroundMap, RECT_ PlayGroundInBlocks);
char**	startNewGame(Snake* snake, char** PlayGroundMap, RECT_ PlayGroundInBlocks, BOOL isEnabledWalls);
void	resumeGame(Snake* snake);
void	pauseGame(Snake* snake);
