
class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    int topElement = 0;

    MyStack() {}

    bool empty() {
        return q1.empty() && q2.empty();
    }

    void push(int x) {
        if (q1.empty() && q2.empty()) {
            q1.push(x);
        }
        else if (q1.empty()) {
            q2.push(x);
        }
        else {
            q1.push(x);
        }

        topElement = x;
    }

    int pop() {
        if (empty())
            return 0;

        if (q1.empty()) {
            while (q2.size() > 1) {
                topElement = q2.front();
                q1.push(q2.front());
                q2.pop();
            }

            int element = q2.front();
            q2.pop();
            return element;
        }
        else {
            while (q1.size() > 1) {
                topElement = q1.front();
                q2.push(q1.front());
                q1.pop();
            }

            int element = q1.front();
            q1.pop();
            return element;
        }
    }

    int top() {
        return topElement;
    }
};
