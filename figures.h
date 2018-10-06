class Shapes
{
private:
    void GrobO()
    {
        Fig1[x - 1][y + 2] = 1;
        Fig2[x - 1][y] = 1;
        Fig3[x - 1][y + 1] = 1;
        Fig4[x][y] = 1;
    }

    void GrobTw()
    {
        Fig1[x - 2][y] = 1;
        Fig2[x - 1][y] = 1;
        Fig3[x][y] = 1;
        Fig4[x][y + 1] = 1;
    }

    void GrobTh()
    {
        Fig1[x - 1][y + 2] = 1;
        Fig2[x][y + 1] = 1;
        Fig3[x][y + 2] = 1;
        Fig4[x][y] = 1;
    }

    void GrobF()
    {
        Fig1[x - 2][y] = 1;
        Fig2[x - 2][y + 1] = 1;
        Fig3[x - 1][y + 1] = 1;
        Fig4[x][y + 1] = 1;
    }


    void MolO()
    {
        Fig1[x - 1][y + 2] = 1;
        Fig2[x - 1][y + 1] = 1;
        Fig3[x][y + 1] = 1;
        Fig4[x][y] = 1;
    }

    void MolTw()
    {
        Fig1[x - 2][y] = 1;
        Fig2[x - 1][y] = 1;
        Fig3[x - 1][y + 1] = 1;
        Fig4[x][y + 1] = 1;
    }

    void MolTh()
    {
        Fig1[x - 1][y + 2] = 1;
        Fig2[x - 1][y + 1] = 1;
        Fig3[x][y + 1] = 1;
        Fig4[x][y] = 1;
    }

    void MolF()
    {
        Fig1[x - 2][y] = 1;
        Fig2[x - 1][y] = 1;
        Fig3[x - 1][y + 1] = 1;
        Fig4[x][y + 1] = 1;
    }


    void UnGrobO()
    {
        Fig1[x - 1][y] = 1;
        Fig2[x][y + 1] = 1;
        Fig3[x][y] = 1;
        Fig4[x][y + 2] = 1;
    }

    void UnGrobTw()
    {
        Fig1[x - 2][y + 1] = 1;
        Fig2[x - 1][y + 1] = 1;
        Fig3[x][y + 1] = 1;
        Fig4[x][y] = 1;
    }

    void UnGrobTh()
    {
        Fig1[x - 1][y] = 1;
        Fig2[x - 1][y + 2] = 1;
        Fig3[x - 1][y + 1] = 1;
        Fig4[x][y + 2] = 1;
    }

    void UnGrobF()
    {
        Fig1[x - 2][y + 1] = 1;
        Fig2[x - 2][y] = 1;
        Fig3[x - 1][y] = 1;
        Fig4[x][y] = 1;
    }


    void UnMolO()
    {
        Fig1[x - 1][y] = 1;
        Fig2[x - 1][y + 1] = 1;
        Fig3[x][y + 1] = 1;
        Fig4[x][y + 2] = 1;
    }

    void UnMolTw()
    {
        Fig1[x - 2][y + 1] = 1;
        Fig2[x - 1][y + 1] = 1;
        Fig3[x - 1][y] = 1;
        Fig4[x][y] = 1;
    }

    void UnMolTh()
    {
        Fig1[x - 1][y] = 1;
        Fig2[x - 1][y + 1] = 1;
        Fig3[x][y + 1] = 1;
        Fig4[x][y + 2] = 1;
    }

    void UnMolF()
    {
        Fig1[x - 2][y + 1] = 1;
        Fig2[x - 1][y + 1] = 1;
        Fig3[x - 1][y] = 1;
        Fig4[x][y] = 1;
    }


    void PraO()
    {
        Fig1[x][y + 3] = 1;
        Fig2[x][y + 1] = 1;
        Fig3[x][y + 2] = 1;
        Fig4[x][y] = 1;
    }

    void PraTw()
    {
        Fig1[x - 3][y] = 1;
        Fig2[x - 2][y] = 1;
        Fig3[x - 1][y] = 1;
        Fig4[x][y] = 1;
    }

    void PraTh()
    {
        Fig1[x][y + 3] = 1;
        Fig2[x][y + 1] = 1;
        Fig3[x][y + 2] = 1;
        Fig4[x][y] = 1;
    }

    void PraF()
    {
        Fig1[x - 3][y] = 1;
        Fig2[x - 2][y] = 1;
        Fig3[x - 1][y] = 1;
        Fig4[x][y] = 1;
    }


    void SquareO()
    {
        Fig1[x - 1][y + 1] = 1;
        Fig2[x - 1][y] = 1;
        Fig3[x][y + 1] = 1;
        Fig4[x][y] = 1;
    }

    void SquareTw()
    {
        Fig1[x - 1][y + 1] = 1;
        Fig2[x - 1][y] = 1;
        Fig3[x][y + 1] = 1;
        Fig4[x][y] = 1;
    }

    void SquareTh()
    {
        Fig1[x - 1][y + 1] = 1;
        Fig2[x - 1][y] = 1;
        Fig3[x][y + 1] = 1;
        Fig4[x][y] = 1;
    }

    void SquareF()
    {
        Fig1[x - 1][y + 1] = 1;
        Fig2[x - 1][y] = 1;
        Fig3[x][y + 1] = 1;
        Fig4[x][y] = 1;
    }


    void StairsO()
    {
        Fig1[x - 2][y + 1] = 1;
        Fig2[x - 1][y + 1] = 1;
        Fig3[x][y + 1] = 1;
        Fig4[x - 1][y] = 1;
    }

    void StairsTw()
    {
        Fig1[x - 1][y] = 1;
        Fig2[x - 1][y + 2] = 1;
        Fig3[x - 1][y + 1] = 1;
        Fig4[x][y + 1] = 1;
    }

    void StairsTh()
    {
        Fig1[x - 2][y] = 1;
        Fig2[x - 1][y] = 1;
        Fig3[x][y] = 1;
        Fig4[x - 1][y + 1] = 1;
    }

    void StairsF()
    {
        Fig1[x - 1][y + 1] = 1;
        Fig2[x][y + 1] = 1;
        Fig3[x][y + 2] = 1;
        Fig4[x][y] = 1;
    }



public:
    void ChoiceFigure(int n, int m)
    {
        if(n == 1)
        {
            if(m == 1)
                GrobO();

            if(m == 2)
                GrobTw();

            if(m == 3)
                GrobTh();

            if(m == 4)
                GrobF();
        }

        if(n == 2)
        {
            if(m == 1)
                MolO();

            if(m == 2)
                MolTw();

            if(m == 3)
                MolTh();

            if(m == 4)
                MolF();
        }

        if(n == 3)
        {
            if(m == 1)
                UnGrobO();

            if(m == 2)
                UnGrobTw();

            if(m == 3)
                UnGrobTh();

            if(m == 4)
                UnGrobF();
        }

        if(n == 4)
        {
            if(m == 1)
                UnMolO();

            if(m == 2)
                UnMolTw();

            if(m == 3)
                UnMolTh();

            if(m == 4)
                UnMolF();
        }

        if(n == 5)
        {
            if(m == 1)
                PraO();

            if(m == 2)
                PraTw();

            if(m == 3)
                PraTh();

            if(m == 4)
                PraF();
        }

        if(n == 6)
        {
            if(m == 1)
                SquareO();

            if(m == 2)
                SquareTw();

            if(m == 3)
                SquareTh();

            if(m == 4)
                SquareF();
        }

        if(n == 7)
        {
            if(m == 1)
                StairsO();

            if(m == 2)
                StairsTw();

            if(m == 3)
                StairsTh();

            if(m == 4)
                StairsF();
        }
    }
};
