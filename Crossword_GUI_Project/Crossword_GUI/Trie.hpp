#pragma once
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define alphabet_size 26
class Trie
{
private:
    class Node
    {
    public:
        bool isEndofWord;
        Node *children[alphabet_size];
        int index;

        Node() : isEndofWord(false), index(0)
        {
            for (int i = 0; i < alphabet_size; i++)
            {
                children[i] = NULL;
            }
        }
        Node(bool isEndofWord) : isEndofWord(isEndofWord)
        {
            for (int i = 0; i < alphabet_size; i++)
            {
                children[i] = NULL;
            }
        }
        bool isLeaf() const
        {
            for (auto node : children)
            {
                if (node)
                    return false;
            }
            return true;
        }
    };

    typedef Node *nodePointer;

    nodePointer root;
    class wordsComparison
    {
    public:
        wordsComparison() {}
        bool operator()(const pair<string,int> &lhs, const pair<string,int> &rhs) const
        {
            return lhs.first.length() < rhs.first.length();
        }
    };

    typedef priority_queue<pair<string,int>, vector<pair<string,int>>, wordsComparison> myPQ;

    void toPque(myPQ &words) const;

    void toPqueAux(nodePointer node, string str, myPQ &words) const;

    void placeWordOnGrid(pair<string,int> word, int maxLength);

public:
    vector<vector<pair<char, int>>> crosswordBoard;

    int size;

    Trie();

    ~Trie();

    bool empty() const;

    void deleteTrie(nodePointer node);

    void copyConstructor(nodePointer thisPtr, nodePointer origPtr);

    const Trie &operator=(const Trie &rhs);

    Trie(const Trie &origTrie);

    void insert(const string word);

    void insertIndex(const string word,const int indx);

    bool search(const string word);

    void deleteWord(string word);

    void deleteAllNodes(nodePointer lastPrefixNode, short lastPrefixCharIndex, nodePointer lastNode, string word);

    void displayReq(ostream &out) const;

    void display(ostream &out, nodePointer root, string str) const;

    void toCrosswordsBoard();
};

ostream &operator<<(ostream &out, const Trie &aTrie);
istream &operator>>(istream &in, Trie &trie);
