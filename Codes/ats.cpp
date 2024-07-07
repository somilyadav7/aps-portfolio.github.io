#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct TrieNode
{
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
    int score;
    TrieNode() : isEndOfWord(false), score(0) {}
};

class Trie {
private:
    TrieNode* root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word, int score) {
        TrieNode* current = root;
        for (char c : word) {
            if (current->children.find(c) == current->children.end()) {
                current->children[c] = new TrieNode();
            }
            current = current->children[c];
        }
        current->isEndOfWord = true;
        current->score = score;
    }

    int search(string word) {
        TrieNode* current = root;
        for (char c : word) {
            if (current->children.find(c) == current->children.end()) {
                return 0;
            }
            current = current->children[c];
        }
        if (current != nullptr && current->isEndOfWord) {
            return current->score;
        }
        return 0;
    }
};

int calculateATSScore(vector<string>& resume, Trie& keywords) {
    int score = 0;
    for (string word : resume) {
        score += keywords.search(word);
    }
    return score;
}

int main() {
    Trie keywords;
    keywords.insert("Java", 5);
    keywords.insert("Python", 7);
    keywords.insert("Machine Learning", 10);
    keywords.insert("Data Analysis", 8);

    vector<string> resume = {"Java", "Python", "Machine Learning", "Data Structures"};
    int score = calculateATSScore(resume, keywords);
    cout << "ATS Score: " << score << endl;

    return 0;
}
