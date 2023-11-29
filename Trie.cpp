#include "trie.hpp"
using namespace std;
Trie::Trie(){
    root=new Node();
}

void Trie::insert(const string word) {
   Trie::nodePointer current = root;
    for (char c : word) {
        int i = c - 'a';
        if (current->children[i] == nullptr) {
            current->children[i] = new Node();
        }
        current = current->children[i];
    }
    current->isEndofWord = true;
}

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

void Trie::deleteAllNodes(nodePointer lastPrefixNode, short lastPrefixCharIndex, nodePointer lastNode, string word)
{
    nodePointer prevPtr = lastPrefixNode, ptr = lastPrefixNode->children[word[lastPrefixCharIndex] - 'a'];
    while (ptr != lastNode)
    {
        prevPtr = ptr;
        ptr = prevPtr->children[word[++lastPrefixCharIndex] - 'a'];
    }
    delete ptr;
    prevPtr->children[word[lastPrefixCharIndex] - 'a'] = NULL;
    deleteAllNodes(lastPrefixNode, lastPrefixCharIndex, prevPtr, word);
}

void Trie::deleteWord(const string word)
{
    nodePointer ptr = root, lastPrefixNode = NULL;
    short i, j, count = 0, lastPrefixCharIndex = (word[0] - 'a');

    for (j = 0; j < word.length(); j++)
    {
        if (!ptr->children[word[j] - 'a'])
        {
            return;
        }
        for (i = 0; i < alphabet_size; i++)
            if (ptr->children[i])
                count++;
        if (count > 1)
        {
            lastPrefixNode = ptr;
            lastPrefixCharIndex = j;
        }
        ptr = ptr->children[word[j] - 'a'];
    }

    count = 0;
    for (i = 0; i < alphabet_size; i++)
    {
        if (ptr->children[i])
        {
            count++;
            break;
        }
    }

    if (count)
        ptr->isEndofWord = false;
    else if (lastPrefixNode)
        deleteAllNodes(lastPrefixNode, lastPrefixCharIndex, ptr, word);
    else
        deleteAllNodes(root, lastPrefixCharIndex, ptr, word);
}

void Trie::displayReq (ostream &out) const{
    return display(out,root,"");
}

void Trie::display(ostream &out,nodePointer root,string str) const{
    if(root->isEndofWord){
        str += '\0';
        out << str << endl;
    }
    for(int i = 0; i< alphabet_size ; i++){
        if(root->children[i]){
             str += i + 'a';
            display(out, root->children[i],str);
        }
    }


}

ostream & operator<< (ostream & out, const Trie & aTrie)
{
    aTrie.displayReq(out);
    return out;
}

bool Trie::isleaf(nodePointer node) const{
    for(auto node : node->children){
        if(node) return false;
    }
    return true;
}