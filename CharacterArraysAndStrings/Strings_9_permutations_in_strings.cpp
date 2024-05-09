// class Solution {
// private:
//     bool checkEqual(int arr1[], int arr2[]) {
//         for (int i = 0; i < 26; i++) {
//             if (arr1[i] != arr2[i])
//                 return 0;
//         }
//         return 1;
//     }

// public:
//     bool checkInclusion(string s1, string s2) {

//         // character count array
//         int count1[26] = {0};
//         for (int i = 0; i < s1.length(); i++) {
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }

//         // traversing s2 in window of size s1 length

//         int i = 0;
//         int windowSize = s1.length();
//         int count2[26] = {0};

//         while (i < windowSize && i<s2.length()) {
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }
// // 
//         if (checkEqual(count1, count2))
//             return true;

//         // aage processing karo
//         while (i < s2.length() ) {
//             char newChar = s2[i];
//             int index1 = newChar - 'a';
//             count2[index1]++;

//             char oldChar = s2[i - windowSize];
//             int index2 = oldChar - 'a';
//             count2[index2]--;

//             i++;

//             if (checkEqual(count1, count2))
//                 return true;
//         }

//         return false;
//     }
// }