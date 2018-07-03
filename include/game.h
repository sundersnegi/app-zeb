/**
 * @file game.h
 * 
 * @brief Header file for Game
 */

#ifndef __GAME_H
#define __GAME_H

#include "arena.h"
#include "player.h"

using namespace std;

class Game {
    protected:
        Arena *arena;
        Player *players;
        int playerCount;
    
    public:
        Game() {}

        void setPlayerCount(int count) {
            this->playerCount = count;
        }

        int getPlayerCount() {
            return this->playerCount;
        }

        void setArena(Arena *arena) { 
            this->arena = arena;
        }

        Arena *getArena() {
            return this->arena;
        }

        virtual void Play() = 0;

        /**
         * @func Evaluate
         * @brief Evaluates the state of the arena
         *
         * Evaluates whether the game ended in a RESULT/DRAW or still some moves could be made.
         */
        virtual int Evaluate() = 0;

        /**
         * @func isSolvable()
         * @brief Checks whether the game would finally produce a Winner or not
         * 
         * Simulates moves and evaluates whether the resulting game produces a RESULT or ends in a DRAW.
         * 
         * @returns true if game could produce a winner
         *          false if the game would end in a draw
         */
        virtual bool IsSolvable() = 0;

        virtual void Display() const = 0;
        
        virtual ~Game() {}
};

#endif // __GAME_H
/* EOF */