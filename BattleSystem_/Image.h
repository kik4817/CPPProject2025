#pragma once

#include "Common.h"

// 에러를 안알려줌
#define IMAGEHEIGHT 10
#define IMAGEWIDTH 10

// 에러를 알려줌
//const int HEIGHT = 10;
//const int WIDTH = 10;

extern char SlimeIdle[IMAGEHEIGHT][IMAGEWIDTH + 1];
extern char SlimeBattle[IMAGEHEIGHT][IMAGEWIDTH + 1];
extern char SlimeMove[IMAGEHEIGHT][IMAGEWIDTH + 1];

extern char PlayerIdle[IMAGEHEIGHT][IMAGEWIDTH + 1];
extern char PlayerBattle[IMAGEHEIGHT][IMAGEWIDTH + 1];
extern char PlayerMove[IMAGEHEIGHT][IMAGEWIDTH + 1];