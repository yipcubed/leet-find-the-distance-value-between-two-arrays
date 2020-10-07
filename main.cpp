#include <algorithm>
#include <climits>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "../utils/PrintUtils.hpp"
#include "../utils/VectorUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/check-if-it-is-a-straight-line/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() { // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d) {
    int result = 0;
    for (int a : arr1) {
      bool foundLong = false;
      for (int b : arr2) {
        // PV3(a, abs(a-b), abs(a-b) <= d);
        if (abs(a-b) <= d) {
          foundLong = true;
          break;
        }
      }
      if (!foundLong) ++result;
    }
    return result;
  }
};

void test1() {
  cout << boolalpha;
  vector<int> arr1{4, 5, 8};
  vector<int> arr2{10, 9, 1, 8};
  int d = 2;

  cout << "2 ? " << Solution().findTheDistanceValue(arr1, arr2, d) << endl;
}

void test2() {}

void test3() {}