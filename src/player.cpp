/**
 * @file player.cpp
 * 
 * @brief Implementation of player
 */

#include <iostream>
#include <cstdlib>

#include "move.h"
#include "player.h"
#include "game.h"
#include "tictactoe.h"

using namespace std;
using namespace tictactoe;

Player::Player() {
    /* default is Human player */
    this->type  = PLAYER_HUMAN;
    this->symbol = PLAYER_CROSS;

    this->game = NULL;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

PlayerType Player::getType() {
    return this->type;
}

void Player::setType(PlayerType type) {
    this->type = type;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

PlayerSymbol Player::getSymbol() {
    return this->symbol;
}

void Player::setSymbol(PlayerSymbol symbol) {
    this->symbol = symbol;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

Game *Player::getGame() {
    return this->game;
}

void Player::setGame(Game *game) {
    if (NULL == game) {
        cout << __func__ << ": Error: invalid parameter" << endl;
        exit(0);
    }

    this->game = game;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

void Player::makemove(int row, int col) {
    Move *move = new Move(row, col);
    
    /* present move to the arena */
    this->game->getArena()->MakeMove(move, this);

    delete move;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

void Player::MakeMove(int row, int col) {
    /* check for player arena */
    if (NULL == this->game) {
        cout << __func__ << ": Error: no game to play." << endl;
        return;
    }

    this->makemove(row, col);
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

void Player::MakeMove(Arena *arena, int row, int col) {
    /* check for player arena */
    if (NULL == arena) {
        cout << __func__ << ": Error: invalid input." << endl;
        return;
    }

    this->game->setArena(arena);

    this->makemove(row, col);
}
 
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

Player::~Player() {
    this->game = NULL;
}
/* EOF */
