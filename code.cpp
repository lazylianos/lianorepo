int jumpSearch(int arr[], int x, int n) {
    // Finding block size to be jumped
    int step = sqrt(n);
 
    // Finding the block where element is
    // present (if it is present)
    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
//hey lads
#include <iostream>
using namespace std;
 
int search(int arr[], int N, int x) {
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
