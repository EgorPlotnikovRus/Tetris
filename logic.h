void Logic()
{
    Shapes shapes;

    speed = 50000;

    for(int h = 0; h < height; ++h)
        for(int w = 0; w < width; ++w)
        {
            ind[w][h] = 0;
            Fig1[w][h] = 0;
            Fig2[w][h] = 0;
            Fig3[w][h] = 0;
            Fig4[w][h] = 0;
        }

    ++y;

    shapes.ChoiceFigure(choice, pos);

//падение кубика
    switch (dir)
    {
    case LEFT:
        if(x > 1)
        {
        --x;

        for(int w = 0; w < width; ++w)
            for(int h = 0; h < height; ++h)
            {
                if((Fig1[w][h] == 1 || Fig2[w][h] == 1 || Fig3[w][h] == 1 || Fig4[w][h] == 1) && figures[w - 1][h] == 1)
                {
                   ++x;

                    break;
                }

            }

        for(int h = 0; h < height; ++h)
            for(int w = 0; w < width; ++w)
            {
                ind[w][h] = 0;
                Fig1[w][h] = 0;
                Fig2[w][h] = 0;
                Fig3[w][h] = 0;
                Fig4[w][h] = 0;
            }

        shapes.ChoiceFigure(choice, pos);
        }

        break;
    case RIGHT:
        if(x < width - 2)
        {
        ++x;

        for(int w = 0; w < width; ++w)
            for(int h = 0; h < height; ++h)
            {
                if((Fig1[w][h] == 1 || Fig2[w][h] == 1 || Fig3[w][h] == 1 || Fig4[w][h] == 1) && figures[w + 1][h] == 1)
                {
                   --x;
                    break;
                }

            }

        for(int h = 0; h < height; ++h)
            for(int w = 0; w < width; ++w)
            {
                ind[w][h] = 0;
                Fig1[w][h] = 0;
                Fig2[w][h] = 0;
                Fig3[w][h] = 0;
                Fig4[w][h] = 0;
            }

        shapes.ChoiceFigure(choice, pos);
        }
        break;
    case TURN:
        pos = position % 4 + 1;
        ++position;
        break;
    case SPEED:
        speed = 100;
        break;
    case PAUSE:
        cin.ignore();
        break;
    case ACC:
        speed = 30000;
        break;
    case STOP:
        break;
    case CLOSE:
        GameOver = 1;
        window.close();
    }

//проверка на столкновение с дном
    for(int w = 0; w < width; ++w)
            if(Fig1[w][height - 2] == 1 || Fig2[w][height - 2] == 1 || Fig3[w][height - 2] == 1 || Fig4[w][height - 2] == 1)
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

                shapes.ChoiceFigure(choice, pos);

                Fall = 0;
            }

//проверка на столкновение с другими фигурами снизу
    for(int w = 0; w < width; ++w)
        for(int h = 0; h < height; ++h)
            if((Fig1[w][h - 1] == 1 || Fig2[w][h - 1] == 1 || Fig3[w][h - 1] == 1 || Fig4[w][h - 1] == 1) && figures[w][h] == 1)
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

                shapes.ChoiceFigure(choice, pos);

                Fall = 0;
            }


//проверка на столкновение со сторонами
    for(int h = 0; h < height; ++h)
    {
        if(Fig3[width - 1][h] == 1 || Fig4[width - 1][h] == 1)//проверка на столкновение с правой стороной
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

                --x;
            
                shapes.ChoiceFigure(choice, pos);
        }

        break;
    }

    for(int h = 0; h < height; ++h)
    {
        if(Fig1[0][h] == 1 || Fig2[0][h] == 1)//проверка на столкновени с левой стороной
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

                ++x;
            
                shapes.ChoiceFigure(choice, pos);
        }
    }

//стирание ряда
    for(int w = width; w > 0; --w)
    {
        for(int h = 1; h < height - 2; ++h)
        {
            if(figures[h][w] == 1)
            {
                    ++row;
                    if(row == width - 3)
                    {
                        row = 0;
                        score = score + 10;
                        for(int i = 0; i < width - 2; ++i)
                        {
                            figures[i][w] = 0;
                        }

                        for(int h1 = h  ; h1 > 0; --h1)
                        {
                            for(int w1 = 0; w1 < width; ++w1)
                            {
                                if(figures[w1][h1] == 1)
                                {
                                    figures[w1][h1] = 0;
                                    figures[w1][h1 + 1] = 1;
                                }
                            }
                        }
                    }
            }
        }
        row = 0;
    }

//проверка на проигриш
    for(int w = 0; w < width; ++w)
        if(figures[w][1] == 1)
        {
            GameOver = 1;
            window.close();
        }

//занесение значений в массив
    while(!Fall)
    {
        for(int h = 0; h < height; ++h)
            for(int w = 0; w < width; ++w)
            {
                if(Fig1[w][h] == 1)
                {
                    figures[w][h] = 1;
                }

                if(Fig2[w][h] == 1)
                {
                    figures[w][h] = 1;
                }

                if(Fig3[w][h] == 1)
                {
                    figures[w][h] = 1;
                }

                if(Fig4[w][h] == 1)
                {
                    figures[w][h] = 1;
                }
            }

        for(int h = 0; h < height; ++h)
            for(int w = 0; w < width; ++w)
            {
                ind[w][h] = 0;
                Fig1[w][h] = 0;
                Fig2[w][h] = 0;
                Fig3[w][h] = 0;
                Fig4[w][h] = 0;
            }

        x = 3 + (rand() % (width - 4));
        y = 0;

       choice = rand() % 7 + 1;

       shapes.ChoiceFigure(choice, pos);

       pos = 1;
       position = 1;

        Fall = 1;

    }

    dir = STOP;
}
