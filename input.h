void Input()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)  || (sf::Keyboard::isKeyPressed(sf::Keyboard::A)))
    {
        dir = LEFT;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)  || (sf::Keyboard::isKeyPressed(sf::Keyboard::D)))
    {
        dir = RIGHT;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)  || (sf::Keyboard::isKeyPressed(sf::Keyboard::W)))
    {
        dir = TURN;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)  || (sf::Keyboard::isKeyPressed(sf::Keyboard::S)))
    {
        dir = ACC;
    }

    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::C)))
    {
        dir = SPEED;
    }

    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::P)))
    {
        dir = PAUSE;
    }

    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)))
    {
        dir = CLOSE;
    }
}
