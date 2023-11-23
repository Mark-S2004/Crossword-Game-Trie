#include "trie.hpp"

bool Trie::search(const string word)
{
    nodePointer ptr = root;
    for (char c : word)
    {
        if (ptr->children[c - 'a'] == NULL)
        {
            return false;
        }
        ptr = ptr->children[c - 'a'];
    }
    return ptr->isEndofWord;
}