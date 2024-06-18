#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // Create adjacency list
        vector<vector<int>> adjList(numCourses);
        for (const auto& pair : prerequisites) {
            adjList[pair[1]].push_back(pair[0]);
        }
        
        // States: 0 = unvisited, 1 = visiting, 2 = visited
        vector<int> state(numCourses, 0);
        
        // Check each course for a cycle
        for (int i = 0; i < numCourses; ++i) {
            if (hasCycle(i, adjList, state)) {
                return false; // If a cycle is detected, return false
            }
        }
        
        return true; // If no cycle is detected, return true
    }
    
private:
    bool hasCycle(int course, const vector<vector<int>>& adjList, vector<int>& state) {
        if (state[course] == 1) {
            return true; // Cycle detected
        }
        if (state[course] == 2) {
            return false; // Already visited node, no cycle here
        }
        
        state[course] = 1; // Mark the course as visiting
        for (int neighbor : adjList[course]) {
            if (hasCycle(neighbor, adjList, state)) {
                return true;
            }
        }
        
        state[course] = 2; // Mark the course as visited
        return false;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> prerequisites1 = {{1, 0}};
    int numCourses1 = 2;
    cout << boolalpha << solution.canFinish(numCourses1, prerequisites1) << endl; // true

    vector<vector<int>> prerequisites2 = {{1, 0}, {0, 1}};
    int numCourses2 = 2;
    cout << boolalpha << solution.canFinish(numCourses2, prerequisites2) << endl; // false

    return 0;
}
