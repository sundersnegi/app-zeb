/**
 * @file tictactoegame.h
 *
 * @brief Header file for TicTacToe Game
 */

#ifndef __TICTACTOEGAME_H
#define __TICTACTOEGAME_H

#include "game.h"

namespace tictactoe {
    /**
     * @brief The TicTacToe class
     */
    class TicTacToeGame : public Game {
        private:

            /**
             * @func issolvable
             * @brief worker function that finds whether the board is solvable or not
             * @param depth the depth to check for
             * @praram turn current player
             * @return true if a result could be found, else false
             */
            bool issolvable(TicTacToeBoard *board, int depth, int turn);

        public:
            TicTacToeGame();

            void Play();

            void Display() const;

            int Evaluate();

            bool IsSolvable();

            ~TicTacToeGame();
    };
}

#endif // TICTACTOEGAME_H
/* EOF */
