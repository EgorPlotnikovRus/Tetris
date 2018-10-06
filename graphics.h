using namespace sf;

void Graphics()
{
    //это выводится в терминал
    system("clear");
    cout << "score: " << score << endl;

    //это в окно
        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width ; ++j)
                {
                 if (field[i][j] == 2) rectangle.setFillColor(Color::Blue);

                 if (field[i][j] == 1)  rectangle.setFillColor(Color::Green);

                 if (field[i][j] == 0) rectangle.setFillColor(Color::White);

                 rectangle.setPosition(j * 25, i * 25);
                 window.draw(rectangle);
                }
        }

}
