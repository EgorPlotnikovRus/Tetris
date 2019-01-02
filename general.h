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
int row = 0;
bool GameOver;
bool Fall = 1;
int figures[width][height];
int ind[width][height];
int choice;
int position;
int pos = 1;
int speed = 300000;
int score = 0;
int field[width][height];
int sizeWindowW = width * 25;
int sizeWindowH = height * 25;

enum eFigurs{GROB=0,UNGROB,MOL,UNMOL,PRA,SQUARE,STAIRS};
enum eDirection{STOP=0,LEFT,RIGHT,TURN,ACC,SPEED,PAUSE,CLOSE};
eDirection dir;
eFigurs fig;

sf::RenderWindow window(sf::VideoMode(sizeWindowW, sizeWindowH), "Tetris");
sf::RectangleShape rectangle(sf::Vector2f(25,25));

void zeroing()
{
    for(int h = 0; h < height; ++h)
        for(int w = 0; w < width; ++w)
        {
            ind[w][h] = 0;
            Fig1[w][h] = 0;
            Fig2[w][h] = 0;
            Fig3[w][h] = 0;
            Fig4[w][h] = 0;
        }
}
