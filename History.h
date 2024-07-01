//
//  History.h
//  CS 32
//
//  Created by Katherine on 1/10/24.
//

#ifndef History_INCLUDED
#define History_INCLUDED
#include "globals.h"

#include <stdio.h>

class History
    {
      public:
        History(int nRows, int nCols);
        bool record(int r, int c);
        void display() const;
        int row();
        int col();
        char m_grids[MAXROWS][MAXCOLS];
    
    private:
        int m_row;
        int m_col;
        
    };

#endif /* History_hpp */
