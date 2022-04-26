class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
       int len = points.size();
        // array that keep track of the shortest distance from mst to each node
        vector<int>disArr(len);
        for (int i = 1; i < len; ++i) {
            disArr[i] = INT_MAX;
        }
        
        // visited[node] == true if node in mst
        vector<bool>visited(len);
        visited[0] = true;
        
        int numEdge = 0;
        // current node, used to update the disArr
        int cur = 0;
        // result
        int res = 0;
        
        while (numEdge++ < len - 1) {
            int minEdge = INT_MAX;
            int next = -1;
            for (int i = 0; i < len; i++) {
                // if the node i is not in mst
                if (!visited[i]) {
                    // find the distance between cur and i
                    int dis = abs(points[cur][0] - points[i][0]) + abs(points[cur][1] - points[i][1]);
                    // update distance array
                    disArr[i] = min(dis, disArr[i]);
                    // find the shortest edge
                    if (disArr[i] < minEdge) {
                        minEdge = disArr[i];
                        next = i;
                    }
                }
            }
            cur = next;
            visited[cur] = true;
            res += minEdge;
        }
        
        return res;
    
    }
};