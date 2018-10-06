#include "general.h"
#include "figures.h"
#include "buffergraphics.h"
#include "graphics.h"
#include "input.h"
#include "logic.h"
#include "setup.h"

int main()
{
    Clock clock;
    float timeGame = speed;
    float timeInput = 0;

    srand(time(NULL));
    SetUp();
    while (!GameOver)
    {
        while (window.isOpen())
        {
            float time = clock.getElapsedTime().asMicroseconds();
            clock.restart();
            time = time * 0.1;

            timeGame += time;
            timeInput += time;

            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();

            Graphics();

            if(timeGame > speed)
            {
                Logic();
                BufferGraphics();
                timeGame = 0;
            }
            window.display();

            if(timeInput > 10000)
            {
                Input();
                timeInput = 0;
            }
        }
    }

    return 0;
}
