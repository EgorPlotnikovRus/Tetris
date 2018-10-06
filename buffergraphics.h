void BufferGraphics()
{
   for(int h = 0; h < height; ++h)
        for(int w = 0; w < width; ++w)
            {
             if(Fig1[w][h] == 1 || Fig2[w][h] == 1 || Fig3[w][h] == 1 || Fig4[w][h] == 1)
             {
                ind[w][h] = 1;
             }

             }

    for(int f = 0; f < height; ++f)
    {
        for(int i = 0; i < width + 1; ++i)
        {
            if(i == 0 || i == width - 1)// боковые стенки
            {
                field[f][i] = 2;
            }

            if(ind[i][f] == 1)//фигура падающая
                field[f][i] = 1;

            else
            {
            bool print = 0;

                    if(figures[i][f] == 1)//фигуры уже упавшие
                    {
                        if(i < width)
                        {
                            field[f][i] = 1;
                            print = 1;
                        }
                    }

                    if(!print)
                        field[f][i] = 0;
            }
        }
    }

    for(int f = 0; f < height; ++f)
    {
        for(int i = 0; i < width + 1; ++i)
        {
            if(i == 0 || i == width - 1)// боковые стенки
            {
                field[f][i] = 2;
            }
        }
    }

    for(int w = 0; w < width; ++w)// дно
    {
        field[height - 1][w] = 2;
    }
}
