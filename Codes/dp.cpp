#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//metrics
const int PROFILE_COMPLETENESS_WEIGHT = 20;
const int NETWORK_REACH_WEIGHT = 25;
const int ENGAGEMENT_RATE_WEIGHT = 30;
const int CONTENT_RELEVANCE_WEIGHT = 25;

int calculateSSI(int profileCompleteness, int networkReach, int engagementRate, int contentRelevance) {
    vector<int> dp(101, 0); // Considering scores from 0 to 100

    for (int i = 1; i <= 100; ++i) {
        dp[i] = max(dp[i], dp[i - profileCompleteness] + PROFILE_COMPLETENESS_WEIGHT);
        dp[i] = max(dp[i], dp[i - networkReach] + NETWORK_REACH_WEIGHT);
        dp[i] = max(dp[i], dp[i - engagementRate] + ENGAGEMENT_RATE_WEIGHT);
        dp[i] = max(dp[i], dp[i - contentRelevance] + CONTENT_RELEVANCE_WEIGHT);
    }

    return dp[100]; 
}

int main() {
    int profileCompleteness = 80; 
    int networkReach = 70; 
    int engagementRate = 60; 
    int contentRelevance = 50; 

    int ssiScore = calculateSSI(profileCompleteness, networkReach, engagementRate, contentRelevance);
    cout << "SSI Score: " << ssiScore << endl;

    return 0;
}
