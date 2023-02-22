class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
  int lo = * max_element(weights.begin(), weights.end());
  int hi = accumulate(weights.begin(), weights.end(), 0);

  while (lo < hi) {
    int x = lo + (hi - lo) / 2;

    int required = 1, current_load = 0;
    for (int i = 0; i < n; ++i) {
      if (current_load + weights[i] <= x) {
        // the current worker can handle it
        current_load += weights[i];
      } else {
        // assign next worker
        ++required;
        current_load = weights[i];
      }
    }

    if (required <= days)
      hi = x;
    else
      lo = x + 1;
  }

  return lo;
    }
};