class Solution {
private:
    void transpose(vector<vector<int>> &matrix , int rowSize , int colSize )
    {
        for (int i = 0; i < rowSize; i++)
        {
            for (int j = i ; j < colSize; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    void swaping(vector<vector<int>> &matrix , int rowSize , int colSize)
    {
        for (int i = 0; i < rowSize; i++)
        {
            int s = 0;
            int e = colSize - 1;
            while (s < e)
            {
                swap(matrix[i][s], matrix[i][e]);
                s++;
                e--;
            }
        }
    }
public:

    void rotate(vector<vector<int>> &matrix)
    {
        // row & col size
        int rowSize = matrix[0].size();
        int colSize = matrix.size();

        // transpose of matrix
        transpose(matrix , rowSize , colSize );
        // row swaping
        swaping(matrix , rowSize , colSize);
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna