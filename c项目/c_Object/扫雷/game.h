#pragma once
#include<stdio.h>
#include <time.h>
#include <stdlib.h>

#define  COL 9
#define  ROW 9

#define  ROWS ROW+2
#define  COLS COL+2

#define  InitializeNummber ' '
//雷的个数
#define  MINE 10



//声明
void Initialize(char arr[ROWS][COLS], int row, int col,char set);

void From(char arr[ROWS][COLS], int row, int col);

void BuriedMine(char arr[ROWS][COLS], int row, int col);

void searchMine(char arr1[ROWS][COLS], char arr2[ROWS][COLS],int x,int y,int win);

void Mark(char arrMine_message[ROWS][COLS], int x, int y);

