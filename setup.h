void SetUp()
{
    Shapes shapes;

    zeroing();

    x = 3 + (rand() % (width - 4));
    y = 0;

    choice = rand() % 7 + 1;

    ++position;

    shapes.ChoiceFigure(choice, pos);

    GameOver = false;
    dir = STOP;
}
