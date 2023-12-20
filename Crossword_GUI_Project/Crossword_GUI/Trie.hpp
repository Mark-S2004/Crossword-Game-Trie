#pragma once
#include <iostream>
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

        Node() : isEndofWord(false)
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

public:
    Trie();

    ~Trie();

    bool empty() const;

    void deleteTrie(nodePointer node);

    void copyConstructor(nodePointer thisPtr, nodePointer origPtr);

    const Trie & operator=(const Trie & rhs);

    Trie(const Trie &origTrie);

    void insert(const string word);

    bool search(const string word);

    void deleteWord(string word);

    void deleteAllNodes(nodePointer lastPrefixNode, short lastPrefixCharIndex, nodePointer lastNode, string word);

    void displayReq(ostream &out) const;

    void display(ostream &out, nodePointer root, string str) const;
};

ostream &operator<<(ostream &out, const Trie &aTrie);
istream &operator>>(istream &in, Trie &trie);