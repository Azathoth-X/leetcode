class RandomizedSet {
private:
    unordered_map<int, int> mp; // Maps value to its index in the vector
    vector<int> nums;           // Stores the actual values for random access

public:
    RandomizedSet() {
        
    }
    
    // Inserts a value, returns true if the value did not exist in the set
    bool insert(int val) {
        if (mp.find(val) != mp.end()) {
            return false; // The value already exists
        }
        nums.push_back(val);           // Add the value to the vector
        mp[val] = nums.size() - 1;     // Store its index in the map
        return true;
    }
    
    // Removes a value, returns true if the value existed in the set
    bool remove(int val) {
        if (mp.find(val) == mp.end()) {
            return false; // Value doesn't exist
        }
        // Get index of the value to be removed
        int idx = mp[val];
        // Replace it with the last element in the vector
        nums[idx] = nums.back();
        // Update the map with the new index of the last element
        mp[nums[idx]] = idx;
        // Remove the last element
        nums.pop_back();
        // Erase the value from the map
        mp.erase(val);
        return true;
    }
    
    // Returns a random element from the set
    int getRandom() {
        int randomIndex = rand() % nums.size();
        return nums[randomIndex];
    }
};