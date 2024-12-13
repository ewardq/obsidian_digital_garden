---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/data-structures-c/hash-map/"}
---

---

A hash table or hash map, is a data structure that helps with mapping keys to values for highly efficient operations like the lookup, insertion and deletion operations. [^1]

This data structure maps keys to a value for highly efficient lookup, insertion and deletion, it has a time and space complexity of O(n).

To create a hash table, first:
- Take key and value.
- Use a hash function to find the index of an array.
- Store key and value in an array.


> [!Tip] Important
> In a hash map, keys are hashed to determine the index where the corresponding values will be stored, allowing for efficient retrieval and storage of key-value pairs.



```C++
// C++ program to illustrate the begin and end iterator

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    // Create a map of strings to integers
    map<string, int> mp;

    // Insert some values into the map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;

    // Get an iterator pointing to the first element in the map
    map<string, int>::iterator it = mp.begin();

    // Iterate through the map and print the elements
    while (it != mp.end()) {
        cout << "Key: " << it->first
             << ", Value: " << it->second << endl;
        ++it;
    }
    return 0;
}

```


```C++
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums,   int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        numMap[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement) && numMap[complement] != i) {
            return {i, numMap[complement]};
        }
    }

    return {};
  }
};

  

int main() {
    Solution solution;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = solution.twoSum(nums, target);

    // Output: [0, 1]
    std::cout << "Output: [" << result[0] << ", " << result[1] << "]" <<std::endl;

    return 0;
}

```


Let's see an example where the hash map is traditionally introduced:

The most straightforward approach involves using a nested loop where the time complexity is O(n^2)
  
But we can do better, if we make use of a hash map, we can break down this solution into a O(n)

[^1]: https://www.freecodecamp.org/news/what-is-a-hash-map/