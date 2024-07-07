#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

unordered_map<int, unordered_set<int>> notInterestedMap;

void markNotInterested(int userId, int itemId) {
    if (notInterestedMap.find(userId) == notInterestedMap.end()) {
        notInterestedMap[userId] = unordered_set<int>();
    }
    notInterestedMap[userId].insert(itemId);
}

bool isNotInterested(int userId, int itemId) {
    if (notInterestedMap.find(userId) != notInterestedMap.end()) {
        return notInterestedMap[userId].count(itemId) > 0;
    }
    return false;
}

void removeNotInterested(int userId, int itemId) {
    if (notInterestedMap.find(userId) != notInterestedMap.end()) {
        notInterestedMap[userId].erase(itemId);
    }
}

int main() {
    markNotInterested(1001, 500);
    markNotInterested(1001, 600);
    markNotInterested(1002, 500);

    cout << "Is User 1001 not interested in Item 500? " << (isNotInterested(1001, 500) ? "Yes" : "No") << endl;
    cout << "Is User 1001 not interested in Item 600? " << (isNotInterested(1001, 600) ? "Yes" : "No") << endl;
    cout << "Is User 1002 not interested in Item 500? " << (isNotInterested(1002, 500) ? "Yes" : "No") << endl;

    removeNotInterested(1001, 500);

    cout << "Is User 1001 not interested in Item 500 after removal? " << (isNotInterested(1001, 500) ? "Yes" : "No") << endl;

    return 0;
}
