#include <iostream>
#include "trie.hpp"
using namespace std;
int main(){
    cout << "*** Creating Trie 1\n";
    Trie trie1;

    cout << "\n*** Filling the Trie trie1 with values\n";
        trie1.insert("cat");
        trie1.insert("dog");
        trie1.insert("doll");
        trie1.insert("yehia");
        trie1.insert("yellow");
        trie1.insert("geno");
        trie1.insert("mark");
        trie1.insert("albert");
        trie1.insert("alert");

    cout << "\n*** enter a value to be stored in trie1\n";
        // cin >> trie1;


    cout << "\n*** Print the Trie Trie1 using the print - Display Functions\n";
        cout << "\n" <<trie1;

    cout << "\n*** Searching the Trie Trie1 using the search method\n";
        cout<< trie1.search("cat")<<endl;
        cout<< trie1.search("yellow")<<endl;
        cout<< trie1.search("mark")<<endl;
        cout<< trie1.search("ahmed")<<endl;
        cout<< trie1.search("hussien")<<endl;
        
    cout << "\n*** Deleting values from the Trie Trie1 using the deleteWord method\n";
        trie1.deleteWord("geno");
        trie1.deleteWord("alert");
        trie1.deleteWord("doll");
        cout << trie1;

}