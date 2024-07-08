class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> queue;

        for(int i = 1; i <= n; ++i){
            queue.push(i);
        }

        while(queue.size() > 1){
            for(int i = 0; i < k - 1; ++i){
                queue.push(queue.front());
                queue.pop();
            }
            queue.pop();
        }
        return queue.front();


    }
};