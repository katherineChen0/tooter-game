//
//  History.cpp
//  CS 32
//
//  Created by Katherine on 1/10/24.
//

#include "History.h"
#include "City.h"

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
using namespace std;



History::History(int nRows, int nCols) : m_row(nRows), m_col(nCols)
{
    for (int i = 0; i < m_row; i++){
        for (int j = 0; j < m_col; j++){
            m_grids[i][j] = '.';
        }
    }
}

int History::row(){
    return m_row;
}

int History::col(){
    return m_col;
}

bool History::record(int r, int c){
    if (r >= 1  &&  r <= row()  &&  c >= 1  &&  c <= col()){
        if (m_grids[r-1][c-1] == '.'){
            m_grids[r-1][c-1] = 'A';
        }else if(m_grids[r-1][c-1]=='Z'){
            m_grids[r-1][c-1] = 'Z';
        }else{
            m_grids[r-1][c-1]++;
        }
        
        return true;
         // Invalid position
    }
    
    // Increment the history count at the specified position
    else{
        return false;
    }
}
   
void History::display() const{
    clearScreen();
    for (int i = 0; i < m_row; i++){
        for (int j = 0; j < m_col; j++){
            cout << m_grids[i][j];
        }
        cout <<endl;
    }
    cout <<endl;
}
