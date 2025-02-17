#include <vector>
#include <iostream> // For input and output

class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
        int n = stones.size();

        while (n > 1) {
            // Find the two heaviest stones
            int max1 = -1, max2 = -1; // Indices of the two heaviest stones
            for (int i = 0; i < n; i++) {
                if (max1 == -1 || stones[i] > stones[max1]) {
                    max2 = max1; // Update second heaviest
                    max1 = i;    // Update heaviest
                } else if (max2 == -1 || stones[i] > stones[max2]) {
                    max2 = i; // Update second heaviest
                }
            }

            // Smash the two heaviest stones
            if (stones[max1] == stones[max2]) {
                // Both are destroyed
                stones[max1] = stones[n - 1];
                stones[max2] = stones[n - 2];
                n -= 2; // Remove two stones
            } else {
                // New stone with weight difference
                stones[max1] = stones[max1] - stones[max2];
                stones[max2] = stones[n - 1];
                n -= 1; // Remove one stone
            }
        }

        // Return the weight of the last stone or 0 if none remain
        return n == 1 ? stones[0] : 0;
    }
};

int main() {
    Solution solution;

    // Input example
    std::vector<int> stones = {2,7,4,1,8,1};

    // Call the solution method and print the result
    int result = solution.lastStoneWeight(stones);
    std::cout << "The last stone weight is: " << result << std::endl;

    return 0;
}
