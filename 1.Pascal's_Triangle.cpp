#include <vector>

class Solution {
public:
    /**
     * @brief Generates the first numRows of Pascal's triangle.
     * * @param numRows The number of rows of the triangle to generate.
     * @return A vector of vectors of integers representing Pascal's triangle.
     */
    std::vector<std::vector<int>> generate(int numRows) {
        // Initialize the triangle with `numRows` rows.
        std::vector<std::vector<int>> triangle(numRows);

        // Iterate through each row to construct it.
        for (int i = 0; i < numRows; ++i) {
            // The i-th row has i + 1 elements.
            triangle[i].resize(i + 1);

            // The first and last elements of each row are always 1.
            triangle[i][0] = 1;
            triangle[i][i] = 1;

            // Calculate the inner elements based on the previous row.
            // This loop runs for rows starting from the third row (i=2).
            for (int j = 1; j < i; ++j) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }

        return triangle;
    }
};