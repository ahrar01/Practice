class MedianFinder {
public:
    priority_queue<int> leftMaxHeap; // max heap
    priority_queue<int, vector<int>, greater<int>> rightMinHeap; //min heap
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(leftMaxHeap.empty() || num < leftMaxHeap.top()){
            leftMaxHeap.push(num);
        }else{
            rightMinHeap.push(num);
        }

        // always maintain leftMaxHeap size is one greter than rightMinHeap size or both size equal

        if(abs((int)leftMaxHeap.size() - (int)rightMinHeap.size()) > 1){
            rightMinHeap.push(leftMaxHeap.top());
            leftMaxHeap.pop();
        }else if(leftMaxHeap.size()< rightMinHeap.size()){
            leftMaxHeap.push(rightMinHeap.top());
            rightMinHeap.pop();
        }
        
    }
    
    double findMedian() {
        if(leftMaxHeap.size() == rightMinHeap.size()){
            if(leftMaxHeap.empty()){
                return 0;
            }else{
            return (double)(leftMaxHeap.top() + rightMinHeap.top()) / 2;
            }
        }
        return leftMaxHeap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */