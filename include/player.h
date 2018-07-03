/**
 * @file player.h
 * 
 * @brief Game player
 */

#ifndef __PLAYER_H
#define __PLAYER_H

#include "move.h"
#include "arena.h"
#include "tictactoe.h"

/* forward declaration */
class Game;
class Arena;

using namespace tictactoe;

/**
 * \class Player
 * @brief Game player
 */
class Player {
    private:
        enum PlayerType type;
        enum PlayerSymbol symbol;
        Game *game;

        void makemove(int row, int col); /* worker function */

    public:
        Player();

        /* Getter/Setter functions */
        PlayerType getType();
        void setType(PlayerType type);

        PlayerSymbol getSymbol();
        void setSymbol(PlayerSymbol symbol);

        Game *getGame();
        void setGame(Game *game);

        void MakeMove(int row, int col);
        void MakeMove(Arena *arena, int row, int col);

        ~Player();
};

#endif // __PLAYER_H

/* EOF */