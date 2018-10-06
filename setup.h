void SetUp()
{
    Shapes shapes;

    for(int h = 0; h < height; ++h)//очистка массивов
    {
            for(int w = 0; w < width; ++w)
            {
                figures[w][h] = 0;
                ind[w][h] = 0;
                Fig1[w][h] = 0;
                Fig2[w][h] = 0;
                Fig3[w][h] = 0;
                Fig4[w][h] = 0;
            }
    }

    x = 3 + (rand() % (width - 4));
    y = 0;

    choice = rand() % 7 + 1;

    ++position;

    shapes.ChoiceFigure(choice, pos);

    GameOver = false;
    dir = STOP;
}
