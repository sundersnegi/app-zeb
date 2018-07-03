/**
 * @file common.h
 *
 * @brief common game globals
 */

#ifndef __GAME_COMMON_H
#define __GAME_COMMON_H

/**
 * Cell is empty
 */
const int EMPTY = 0;

/**
 * \enum PlayerType
 *
 * @brief Type of the player
*/
enum PlayerType {
    PLAYER_HUMAN,       /* human player */
    PLAYER_COMPUTER     /* computer player */
};

enum State {
    DRAW,   /* game is a draw */
    PLAY,   /* continue play; a result could be produced */
    RESULT  /* a player can win */
};

enum Direction {
    S,      /* move southwards */
    SE,     /* move south-eastwards */
    E,      /* move eastwards */
    SW      /* move south-westwards */
};

#endif // GAME_COMMON_H
/* EOF */
