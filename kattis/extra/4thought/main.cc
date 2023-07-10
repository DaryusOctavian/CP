#include <iostream>
#include <vector>

using namespace std;

int percedence(char sign) {
    switch (sign) {
        case '+':
            return 1;
        case '-':
            return 1;
        case '*':
            return 2;
        case '/':
            return 2;
        default:
            return 0;
    }
}

string to_postfix(string infix) {
    string res;
    vector<char> signs;

    for (char e : infix) {
        if ('0' <= e and e <= '9') {
            res.push_back(e);
        } else {
            while (!signs.empty() and percedence(e) <= percedence(signs.back())) {
                res.push_back(signs.back());
                signs.pop_back();
            }

            signs.push_back(e);
        }
    }

    while (!signs.empty()) {
        res.push_back(signs.back());
        signs.pop_back();
    }

    return res;
}

int postfix_to_int(string postfix) {
    vector<int> numbers;

    for (char e : postfix) {
        if ('0' <= e and e <= '9') {
            numbers.push_back(e - '0');
            continue;
        }

        int b = numbers.back();
        numbers.pop_back();
        int a = numbers.back();
        numbers.pop_back();

        int res = 0;
        if (e == '+') {
            res = a + b;
        }
        if (e == '-') {
            res = a - b;
        }
        if (e == '*') {
            res = a * b;
        }
        if (e == '/') {
            if (b == 0) {
                return -1e9;
            }

            res = a / b;
        }

        numbers.push_back(res);
    }

    return numbers.back();
}

// 44*-44*

int do_math(vector<char> s) {
    string infix = "4";
    for (char e : s) {
        infix.push_back(e);
        infix.push_back('4');
    }

    // cout << infix << endl;

    string postfix = to_postfix(infix);

    int res = postfix_to_int(postfix);

    return res;
}

vector<char> res;
vector<char> posibilities = {'+', '-', '*', '/'};

void solve(int pos, int n, vector<char> &crt) {
    if (pos == 3) {
        // cout << do_math(crt) << endl;
        if (do_math(crt) == n) {
            res = crt;
        }
        return;
    }

    for (char e : posibilities) {
        crt.push_back(e);
        solve(pos + 1, n, crt);
        crt.pop_back();
    }

    return;
}

void print(vector<char> crt) {
    cout << 4 << " ";
    for (char c : crt) {
        cout << c << " " << 4 << " ";
    }
    cout << "= " << do_math(crt) << endl;
}

int main() {
    // auto test = {'/', '/', '-'};
    // cout << do_math(test);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        res.clear();

        vector<char> crt;

        solve(0, n, crt);

        if (res.empty()) {
            cout << "no solution" << endl;
        } else {
            print(res);
        }
    }

    return 0;
}