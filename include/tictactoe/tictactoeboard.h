/**
 * @file tictactoeboard.h
 *
 * @brief Declaration for the tictactoe 3x3 board
 */

#ifndef __TICTACTOEBOARD_H
#define __TICTACTOEBOARD_H

#include <iostream>
#include <list>

#include "move.h"
#include "player.h"
#include "tictactoe/tictactoe.h"

using namespace std;

namespace tictactoe {
    /**
     * @class TicTacToeBoard
     * @brief The tictactoe 3x3 board
     */
    class TicTacToeBoard : virtual public Arena {
        private:
            int board[DEGREE][DEGREE]; /* a 3x3 board */
            int cellsRemaining;

        public:
            TicTacToeBoard();

            PlayerSymbol getValueAt(int row, int col) const;
            int getCellsRemaining() const;

            list<Move> ListMoves() const;
            list<Move> ListMoves(Move start) const;

            int MakeMove(Move *move, Player *player);
            void ResetMove(Move *move);
            void ResetMove(int row, int col);

            void Display() const;

            ~TicTacToeBoard();
    };
}
#endif // __TICTACTOEBOARD_H

/* EOF */
