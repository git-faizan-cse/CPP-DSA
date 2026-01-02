#include <iostream>
#include <vector>

using namespace std;

void helper( vector<vector<int>> &maze, int row, int col, vector<string> &ans, string path, vector<vector<bool>> &visited){
    
    if(row < 0 || col < 0 || row >= maze.size() || col >= maze.size() || maze[row][col] == 0 || visited[row][col] == true){
        return;
    }
    
    if(row == maze.size() -1 && col == maze.size() - 1){
        ans.push_back(path);
        return;
    }
    
    visited[row][col] = true;
    helper(maze, row + 1, col, ans, path + "D", visited); // down
    helper(maze, row - 1, col, ans, path + "U", visited); // up
    helper(maze, row, col - 1, ans, path + "L", visited); // left
    helper(maze, row, col + 1, ans, path + "R", visited); // right
    visited[row][col] = false;
}
vector<string> findPaths(vector<vector<int>> &maze){
    vector<vector<bool>> visited(maze.size(), vector<bool>(maze.size(),false));
    vector<string> ans;
    string path = "";
    helper(maze, 0, 0, ans, path, visited);
    return ans;
}

int main(){
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = findPaths(maze);
    for(string path : ans){
        cout << path << endl;
    }
    return 0;
}