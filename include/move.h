/**
 * @file move.h
 * 
 * @brief Defines the move played by a player
 */

#ifndef __MOVE_H
#define __MOVE_H

/**
 * @class move
 * @brief the move
 */
class Move {
    private: 
        int row;
        int col;       /* row, colum on the arena */

    public:
        Move();
        Move(int r, int c);

        int getRow() const;
        void setRow(int row);

        int getCol() const;
        void setCol(int col);

        void set(int row, int col);

        ~Move();
};

#endif // __MOVE_H

/* EOF */