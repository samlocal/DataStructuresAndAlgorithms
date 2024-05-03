
/*class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        // sorting the given vector
        sort(arr.begin(), arr.end());

        vector<int> occurences;

        for (int i = 0; i < arr.size(); i++) {
            int count = 1;

            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
                count++;
                i++;
            }

            occurences.push_back(count);
        }

        // sorting the occurences array
        sort(occurences.begin(), occurences.end());

        for (int i = 1; i < occurences.size(); i++) {
            if (occurences[i] == occurences[i - 1])
                return false;
        }

        return true;
    }
};
*/
