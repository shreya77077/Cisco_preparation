class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num) > 0) {
                return true; // Element is already in the set
            }
            seen.insert(num); // Add element to the set
        }

        return false; // No duplicate found

        
    }
};