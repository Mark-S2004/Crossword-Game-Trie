#include <iostream>
#include "trie.hpp"
#include <fstream>
#include <string>
using namespace std;
int main()
{
    cout << "*** Creating Trie 1\n";
    Trie trie1;

    cout << "\n*** Filling the Trie trie1 with values\n";
    trie1.insert("cat");
    trie1.insert("dog");
    trie1.insert("doll");
    trie1.insert("yehia");
    trie1.insert("yellow");
    trie1.insert("geno");
    trie1.insert("gen");
    trie1.insert("mark");
    trie1.insert("albert");
    trie1.insert("alert");

    cout << "\n*** enter a value to be stored in trie1\n";
    // cin >> trie1;

    cout << "\n*** Print the Trie Trie1 using the print - Display Functions\n";
    cout << trie1;

    cout << "\n*** Searching in trie1 using the search method\n";
    cout << "cat: " << trie1.search("cat") << endl;
    cout << "yellow: " << trie1.search("yellow") << endl;
    cout << "mark: " << trie1.search("mark") << endl;
    cout << "ahmed: " << trie1.search("ahmed") << endl;
    cout << "hussein: " << trie1.search("hussien") << endl;

    cout << "\n*** Deleting geno, alert, doll, GAN from the Trie Trie1 using the deleteWord method\n";
    trie1.deleteWord("geno");
    trie1.deleteWord("alert");
    trie1.deleteWord("doll");
    trie1.deleteWord("GAN");
    cout << trie1;

    cout << "\n*** Testing empty method with trie1 and trie2\n";
    cout << "trie1: " << trie1.empty() << '\n';
    Trie trie2;
    cout << "trie2: " << trie2.empty() << '\n';

    cout << "\n*** Testing copy constructor with trie1 and trie3\n";
    Trie trie3 = trie1;
    cout << "trie1:\n";
    cout << trie1;
    cout << "trie3:\n";
    cout << trie3;

    cout << "\n*** Testing assigment operator with trie1 and trie2\n";
    trie2 = trie1;
    cout << trie2;

    cout << "\n*** Reading from file\n";
    Trie t1;
    string word;
    fstream myfile;
    myfile.open("words.txt");
    int lineindex=1;
    while (!myfile.eof())
    {
        getline(myfile, word);
        t1.insertIndex(word,lineindex);
        lineindex++;
    }
    myfile.close();
    cout << t1<<endl;

    cout << "\n*** Testing crosswords board generator\n";
    t1.toCrosswordsBoard();
    for (int i = 0; i < t1.crosswordBoard.size(); ++i)
    {
        for (int j = 0; j < t1.crosswordBoard.size(); ++j)
        {
            cout << t1.crosswordBoard[i][j].first;
        }
        cout << endl;
    }

    cout << "\n*** Reading from file\n";
    string word1;
    fstream myfile1;
    string riddles[6];
    myfile1.open("riddles.txt");
    int i =0;
    while (!myfile1.eof())
    {
        getline(myfile1, word1);
        riddles[i]=word1;
        i++;
    }
    myfile1.close();

    for(int i=0;i<6;i++)
        cout<<riddles[i]<<endl;



}