class Solution {
public:
    bool isPossible(vector<int>& target) {
          priority_queue<int> pq;
        long long sum = 0;
        for(auto num : target){
            pq.push(num);
            sum+=num;
        }
        while(pq.top() != 1){
            sum -= pq.top();
            if(sum == 0 || sum >= pq.top()) return false;
            int old = pq.top()%sum;
            if(sum != 1 && old == 0) return false;
            pq.pop();
            pq.push(old);
            sum += (old);
        }
        return true;
    }
};

/*[1, 1, 1, 1, 1]     - sum = 5
[1, 1, (5), 1, 1]   - sum = 9,  Sum - greatest element = 9-5 = 4, Greatest element - sum = 5-4 = 1 (i.e. previous element)
[1, (9), 5, 1, 1]   - sum = 17, Sum - greatest element = 17-9 = 8, Greatest element - sum = 9-8 = 1 (i.e. previous element)
[1, (17), 5, 1, 1]  - sum = 25, Sum - greatest element = 25-17 = 8, Greatest element - sum = 17-8 = 9 (i.e. previous element)
[(25), 17, 5, 1, 1] - sum = 49, Sum - greatest element = 49-25 = 24, Greatest element - sum = 25-24 = 1 (i.e. previous element)
*/