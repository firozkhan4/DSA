#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Macro to get the maximum of two values
#define MAX(a, b) ((a > b) ? a : b)

// Macro to get the minimum of two values
#define MIN(a, b) ((a < b) ? a : b)

// Function to swap two elements
// Templated to allow any data type to be swapped
template <typename T>
void swap(T &a, T &b)
{
    T temp = a; // Store the value of 'a' in a temporary variable
    a = b;      // Assign the value of 'b' to 'a'
    b = temp;   // Assign the temporary value to 'b'
}

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

/**
 * @brief Reverses the elements of a vector of integers in place.
 *
 * @param nums A reference to the vector of integers to be reversed.
 */
void reverse(vector<int> &nums)
{
    int l = 0;               // Initialize left pointer
    int h = nums.size() - 1; // Initialize right pointer

    // Swap elements until the pointers meet
    while (l < h)
    {
        swap(nums[l], nums[h]); // Swap the elements at positions l and h
        l++;                    // Move the left pointer to the right
        h--;                    // Move the right pointer to the left
    }
}