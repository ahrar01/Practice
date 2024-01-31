class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temtperatures) {
        int len = temtperatures.size();
        stack<int> s;
        s.push(len - 1);
        vector<int> res(len);
        for (int i = len - 2, n; i >= 0; --i) {
            n = temtperatures[i];
            while (s.size() && n >= temtperatures[s.top()])
                s.pop();
            if (s.size())
                res[i] = s.top() - i;
            s.push(i);
        }
        return res;
    }
};