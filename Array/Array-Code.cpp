#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Macro to get the maximum of two values
#define MAX(a, b) ((a > b) ? a : b)

// Macro to get the minimum of two values
#define MIN(a, b) ((a < b) ? a : b)

/**
 * @brief Finds the minimum and maximum values in a vector of integers.
 *
 * @param nums A reference to a vector of integers.
 * @return A pair containing the minimum and maximum values.
 */
pair<int, int> find_min_max(vector<int> &nums)
{
    int min = INT_MAX; // Initialize min to the largest possible integer
    int max = INT_MIN; // Initialize max to the smallest possible integer

    // Iterate through the vector to find min and max
    for (auto i : nums)
    {
        min = MIN(min, i); // Update min
        max = MAX(max, i); // Update max
    }

    return {min, max}; // Return the pair of min and max
}
