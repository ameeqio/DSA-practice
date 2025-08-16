#include <iostream>
#include <vector>
using namespace std;

pair<int, int> linearSearch(vector<vector<int>> &matrix, int key)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == key)
            {
                return {i, j};
            }
        }
    }

    return {-1, -1}; // not found
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {-2, 0, 10, 9}};
    int key = -2;

    pair<int, int> cell = linearSearch(matrix, key);

    if (cell.first == -1)
    {
        cout << "-1 : ELEMENT NOT FOUND\n";
    }
    else
    {
        cout << key << " FOUND AT CELL : " << cell.first << "," << cell.second << endl;
    }
    return 0;
}