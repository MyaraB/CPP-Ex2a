#include "Board.hpp"
#include "Direction.hpp"
#include <iostream>
#include <stdexcept>
#include <bits/stdc++.h>
using namespace std;

namespace ariel
{
    const unsigned int initSize = 3;

    Board::Board()
    {
       //
        totalRows = totalColms = initSize;

        //Set first location as maximum size. So later it will change to a lower number.
        minRow = minColm = UINT_MAX;

        //Initialize board.
        board = vector<vector<char>>(totalRows, vector<char>(totalColms, '.'));
    }

    void Board::post(unsigned int row, unsigned int col, Direction direction, string content)
    {
    }

    string Board::read(unsigned int row, unsigned int col, Direction direction, unsigned int length)
    {
        string output;

        return output;
    }

    void Board::show()
    {
    }
}