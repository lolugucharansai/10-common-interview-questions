
// Generate Paranthesis 

#include <iostream>
#include <vector>
using namespace std;

class GenerateParenthesis {
    vector<string> ans;
public:
   

    void generateParenthesis(int closing, int opening, string temp, int n) {
        if (temp.size() == 2 * n) {
            ans.push_back(temp);
            return;
        }
        if (opening < n) {
            generateParenthesis(closing, opening + 1, temp + "(", n);
        }
        if (closing < opening) {
            generateParenthesis(closing + 1, opening, temp + ")", n);
        }
    }

    void print() {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    GenerateParenthesis op;
    string temp = "";
    op.generateParenthesis(0, 0, temp, n);
    op.print();

    return 0;
}