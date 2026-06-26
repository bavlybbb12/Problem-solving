#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {

    private:


     bool checkRow(const vector<vector<char>>& board, int row) {
        vector<bool> seen(10, false);
        for (int col = 0; col < 9; col++) {
            char ch = board[row][col];
            if (ch == '.') continue;
            int val = ch - '0';
            if (val < 1 || val > 9 || seen[val]) return false;
            seen[val] = true;
        }
        return true;
    }

    bool checkCol(const vector<vector<char>>& board, int col) {
        vector<bool> seen(10, false);
        for (int row = 0; row < 9; row++) {
            char ch = board[row][col];
            if (ch == '.') continue;
            int val = ch - '0';
            if (val < 1 || val > 9 || seen[val]) return false;
            seen[val] = true;
        }
        return true;
    }

        bool checkBox(const vector<vector<char>>& board, int startRow, int startCol) {
        vector<bool> seen(10, false);
        for (int row = startRow; row < startRow + 3; row++) {
            for (int col = startCol; col < startCol + 3; col++) {
                char ch = board[row][col];
                if (ch == '.') continue;
                int val = ch - '0';
                if (val < 1 || val > 9 || seen[val]) return false;
                seen[val] = true;
            }
        }
        return true;
    }


    public:

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            if (!checkRow(board, i) || !checkCol(board, i)) return false;
        }

        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                if (!checkBox(board, row, col)) return false;
            }
        }

        return true;
    }

};