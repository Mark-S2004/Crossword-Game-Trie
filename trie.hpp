#pragma once
#include <iostream>
using namespace std;

class Trie
{
private:
    class Node
    {
    public:
        bool isEndofWord;
        Node *children[26];

        Node() : isEndofWord(false)
        {
            for (int i = 0; i < 26; i++)
            {
                children[i] = NULL;
            }
        }
    };

    typedef Node *nodePointer;

    nodePointer root;

public:
    Trie();

    void insert(const string word);

    bool search(const string word);

    void deleteWord(const string word);

    void deleteAllNodes(nodePointer lastPrefixNode, short lastPrefixCharIndex, nodePointer lastNode, string word);
};