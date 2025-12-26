# One Card War (C++)

This project implements a simple two-player card game called One Card War using C++. The program demonstrates object-oriented programming, arrays, and basic game logic.

## Description
One Card War is played with a standard 52-card deck. Each round, one card is dealt to each player. The player with the higher-value card wins the round. If both cards have the same value, the round results in a tie. The game continues until the deck is exhausted, resulting in 26 total games.

Card ranking:
A (lowest), 2–10, J, Q, K (highest)

## Program Structure
The program uses two main classes:

Card Class:
- Represents a single playing card
- Stores suit and rank
- Displays cards in the format AC, 10S, KD
- Compares cards based on value

Deck Class:
- Represents a deck of 52 cards
- Stores cards using an array (not a vector)
- Can shuffle, deal, and display the deck

## How to Compile and Run
Compile:
```text
g++ war.cpp card.cpp deck.cpp -o war
```
Run:
```text
./war
```

## Program Flow
1. A new deck is created
2. The program asks for the names of two players
3. The unshuffled deck is displayed
4. The deck is shuffled and displayed
5. 26 games are played
6. The winner or tie is announced for each game
7. Final statistics are displayed

## Learning Objectives
- Practice object-oriented programming in C++
- Use header and source files correctly
- Implement header guards
- Work with arrays instead of vectors
- Use random number generation for shuffling
- Compile multi-file C++ programs

## Author
Bismah Farooq
