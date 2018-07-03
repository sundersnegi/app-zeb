/**
 * @file arena.h
 * 
 * @brief Header file for Arena
 * 
 * Arena is the space where the game is played. For example, for TicTacToe it
 * is a 3x3 board.
 */

#ifndef __ARENA_H
#define __ARENA_H

#include <list>

using namespace std;

/* forward declarations */
class Move;
class Player;
class Game;

/**
 * @brief Arena abstract class
 */
class Arena {
    private:
        Game *game;

    public:
        /**
         * @func Display
         * @brief Displays the arena
         * 
         * This needs to be implemented as per the type of UI required. By
         * default all derived boards show a text-based UI.
         */
        virtual void Display() const = 0;

        /**
         * @func listmoves
         * @brief Generates a list of the possible moves on the board
         * @return list of moves
         */
        virtual list<Move> ListMoves() const = 0;

        /**
         * @func MakeMove
         * @brief Makes a move on the game
         */
        virtual int MakeMove(Move *move, Player *player) = 0;

        /**
         * @func ResetMove
         * @brief Clears a previously made move
         */
        virtual void ResetMove(Move *move) = 0;

        /**
         * @func ResetMove
         * @brief Clears a previously made move
         * @param row the position row
         * @param col the postition col
         */
        virtual void ResetMove(int row, int col) = 0;

        void setGame(Game *game) {
            this->game = game;
        }

        Game *getGame() {
            return this->game;
        }

        virtual ~Arena() {
            this->game = NULL;
        };
};

#endif // __ARENA_H
/* EOF */