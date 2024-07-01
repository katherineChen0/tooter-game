//
//  tooter.cpp
//  CS 32
//
//  Created by Katherine on 1/8/24.
//

#ifndef TOOTER_INCLUDED
#define TOOTER_INCLUDED

class City;

class Tooter
{
  public:
        // Constructor
    Tooter(City* cp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;

        // Mutators
    void move();

  private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif      
