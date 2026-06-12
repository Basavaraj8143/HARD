#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  vector<vector<int>> generate(int nums)
  {
    vector<vector<int>> res;
    for (int i = 0; i < nums; i++)
    {
      vector<int> row(i + 1, 1);
      for (int j = 1; j < i; j++)
      {
        row[j] = res[i - 1][j - 1] + res[i - 1][j];
      }
      res.push_back(row);
    }
    return res;
  }
};
int main()
{
  int nums;
  Solution sol;
  cout << "enterthe number of rows:";
  cin >> nums;
  vector<vector<int>> ans = sol.generate(nums);
  for (auto &row : ans)
  {
    for (int x : row)
    {
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}