/**
 * @file game.cpp
 * @author augustronics@gmail.com
 * @date 09 May 2018
 * 
 * @brief Defines the basic game
 * 
 * Copyright (c) 2018, augustronics@gmail.com
 */
#include <cstdlib>

#include "game.h"
#include "player.h"

Game::Game() {
    this->arena = NULL;
    this->players = NULL;
    this->playerCount = 0;
    this->currentPlayer = NULL;
}

void Game::setCurrentPlayer(Player *player) {
    this->currentPlayer = player;
}

Player *Game::getCurrentPlayer() {
    return this->currentPlayer;
}

void Game::setPlayerCount(int count) {
    this->playerCount = count;
}
int Game::getPlayerCount() {
    return this->playerCount;
}

void Game::Play() {
    /* game specific play */
}
void Game::Display() const {
    /* game specific output */
};

Game::~Game() {
    /* empty */
}

/* EOF */