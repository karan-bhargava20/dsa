class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int row = board.size();
        int col = board[0].size();
        
        unordered_set<string>Set;
        for(int r = 0 ; r < row ; r++){
            for ( int c = 0 ; c < col ; c++){
                char num = board[r][c];
                if(num == '.'){
                    continue;
                }
                string row = string(1, num) + "row" + to_string(r);
                string col = string(1, num) + "col" + to_string(c);
                string box = string(1, num) + "box" + to_string(r/3) + to_string(c/3);    
                
                if(Set.count(row) || Set.count(col) || Set.count(box)){
                    return false;
                }
                
                Set.insert(row);
                Set.insert(col);
                Set.insert(box);   
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna