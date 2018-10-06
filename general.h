#include <thread>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include "SFML/Graphics.hpp"

using namespace std;

const int width = 17;
const int height =17;
int Fig1[width][height];
int Fig2[width][height];
int Fig3[width][height];
int Fig4[width][height];
int x,y;
int row = 0;//нужна для определения заполненности ряда
bool GameOver;
bool Fall = 1;//определяет падает фигура или нет
int figures[width][height];//хранит значения старых фигур
int ind[width][height];//хранит все Fig1 ... Fig4
//фигура
int choice;//определяет какая фигура будет выбрана
int position;//нужна для определения pos
int pos = 1;//определяет разворот фигуры
int speed = 300000;//скорость отрисовки
int score = 0;
int field[width][height];
int sizeWindowW = width * 25;
int sizeWindowH = height * 25;

enum eFigurs{GROB=0,UNGROB,MOL,UNMOL,PRA,SQUARE,STAIRS};//фигуры
enum eDirection{STOP=0,LEFT,RIGHT,TURN,ACC,SPEED,PAUSE,CLOSE};//кнопки
eDirection dir;
eFigurs fig;

sf::RenderWindow window(sf::VideoMode(sizeWindowW, sizeWindowH), "Tetris");
sf::RectangleShape rectangle(sf::Vector2f(25,25));
