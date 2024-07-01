//
//  Game.h
//  CS 32
//
//  Created by Katherine on 1/8/24.
//

#ifndef Game_INCLUDED
#define Game_INCLUDED

class City;


class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nTooters);
    ~Game();

        // Mutators
    void play();

  private:
    City* m_city;
};

#endif 
