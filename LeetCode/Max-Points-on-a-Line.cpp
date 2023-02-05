// https://leetcode.com/problems/max-points-on-a-line/description/

class Solution {
public:
  int maxPoints(vector<vector<int>>& points) {
    int answer = 1, n = points.size(), temp = 0;
    for(int i = 0; i < n - 1; ++i) {
      map<double, int> mp;
      for(int j = i + 1; j < n; ++j) {
        double x = (double)(points[j][1] - points[i][1]) / (double)(points[j][0] - points[i][0]);
        if(points[j][1] - points[i][1] < 0 && (points[j][0] - points[i][0]) == 0) ++mp[abs(x)]; 
        else mp[x]++;
      }
      for(auto i : mp) temp = max(temp, i.second + 1);  
      answer = max(temp, answer);
    }
    return answer;
  }
};
