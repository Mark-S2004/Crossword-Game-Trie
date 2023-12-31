# Crosswords-Game-Trie

In this project, we developed a Crossword_GUI.exe application that takes any pair of words and clues, and generates a crossword board that takes the answers from the user. When the user submits the answers, the results (number of correct words + solving time) are displayed on the screen.

## Data Structures used

- Trie
- Priority Queue
- 2D vector
- Pair

## Installation

To install the application clone this repository
```
git clone https://github.com/Mark-S2004/Crossword-Game-Trie.git
```

## Usage

To run the executable program navigate inside CrosswordGame directory. Open the Crossword_GUI.exe file or create a shortcut if you want 😄

<img src="https://github.com/Mark-S2004/Crossword-Game-Trie/assets/84968875/a2376ade-b993-4754-ae95-d674cd84b051" alt="Main Window" width=325/>
<img src="https://github.com/Mark-S2004/Crossword-Game-Trie/assets/84968875/176c2741-d29a-4259-86ca-7f8ff20f6fd8" alt="Game Window" width=335/>
<img src="https://github.com/Mark-S2004/Crossword-Game-Trie/assets/84968875/582dbe7b-deac-4f78-be12-31d683a8b4db" alt="Result Window" width=335/>

## Configure and Edit the game

To edit the clues and their answers navigate inside CrosswordGame and edit words.txt and riddles.txt files. Make sure that each word in words.txt is on the same line number as its corresponding riddle in riddles.txt.
For example, if you want to create this level
```
Dog: Wags its tail
Cat: Drinks milk
```
In the words.txt
```
Dog
Cat
```
and in the riddles.txt
```
Wags its tail
Drinks milk
```
*The game is case-insensitive*
