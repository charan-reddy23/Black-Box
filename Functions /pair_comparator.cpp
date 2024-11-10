bool customComparator(const pair<int, int>& a, const pair<int, int>& b) {
    // First compare by the first element in descending order
    if (a.first != b.first) {
        return a.first > b.first;
    }
    // If first elements are the same, compare by the second element in ascending order
    return a.second < b.second;
}
