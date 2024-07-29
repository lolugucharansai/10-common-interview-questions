/*Given a circular list of gas stations,
where we can go from a station i to
the station i + 1, and the last one
goes back to the first one, find the
index of the station from where we
start to be able to traverse all the
stations and go back to the initial
one without running out of gas*/

#include <iostream>
#include <vector>

using namespace std;

string can_traverse(vector<int> gas, vector<int> cost, int n) {
    int current_gas = 0;
    int total_difference = 0;
    int idx = 0;
    for (int i = 0; i < n; i++) {
        total_difference += (gas[i] - cost[i]);
        current_gas += (gas[i] - cost[i]);
        if (current_gas < 0) {
            current_gas = 0;
            idx = i + 1;
        }
    }
    return total_difference >= 0 ? ("Can start at index " + to_string(idx)) : "Cannot traverse all stations";
}

int main() {
    int n;
    cin >> n;
    vector<int> gas(n);
    vector<int> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> gas[i] >> cost[i];
    }
    cout << can_traverse(gas, cost, n);
    return 0;
}