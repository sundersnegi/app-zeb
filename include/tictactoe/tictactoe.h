/**
 * @file tictactoe.h
 *
 * @brief Header file for TicTacToe
 */

#ifndef __TICTACTOE_H
#define __TICTACTOE_H

namespace tictactoe {
    /**
     * Board dimensions 3x3
     */
    const int DEGREE = 3;

    /**
     * Board has 9 cells
     */
    const int MAX_CELLS = 9;

    /**
     * Only two players can play TicTacToe at one time
     */
    const int MAX_PLAYERS = 2;

    /**
     * \enum PlayerSymbol
     * @brief Symbol of Player
     */
    enum PlayerSymbol {
        PLAYER_CROSS = 'X',
        PLAYER_CIRCLE = 'O'
    };

    class TicTacToeBoard;
    class TicTacToeGame;
};

#endif // TICTACTOE_H
/* EOF */
