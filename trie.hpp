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
    };

    typedef Node *nodePointer;

    nodePointer root;

public:
    Trie();

    void insert(const string word);

    bool search(const string word);

    void deleteWord(const string word);

    void deleteAllNodes(nodePointer lastPrefixNode, short lastPrefixCharIndex, nodePointer lastNode, string word);

    void displayReq (ostream &out) const;

    void display(ostream &out,nodePointer root,string str) const;

    bool isleaf(nodePointer node)const;
};

ostream & operator<< (ostream & out, const Trie & aTrie);