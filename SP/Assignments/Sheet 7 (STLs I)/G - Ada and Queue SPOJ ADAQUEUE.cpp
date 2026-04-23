#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {

    int Q;
    cin >> Q;
    deque<int> dq;
    bool rev = false;

    while (Q--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push_back") {
            int N; cin >> N;
            if (!rev) dq.push_back(N);
            else dq.push_front(N);
        } else if (cmd == "toFront") {
            int N; cin >> N;
            if (!rev) dq.push_front(N);
            else dq.push_back(N);
        } else if (cmd == "front") {
            if (dq.empty()) cout << "No job for Ada?\n";
            else {
                if (!rev) { cout << dq.front() << "\n"; dq.pop_front(); }
                else { cout << dq.back() << "\n"; dq.pop_back(); }
            }
        } else if (cmd == "back") {
            if (dq.empty()) cout << "No job for Ada?\n";
            else {
                if (!rev) { cout << dq.back() << "\n"; dq.pop_back(); }
                else { cout << dq.front() << "\n"; dq.pop_front(); }
            }
        } else if (cmd == "reverse") {
            rev = !rev;
        }
    }
}
