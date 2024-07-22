// class TrieNode {
// public:
//   char data;
//   TrieNode *children[26];
//   bool isTerminal;
//   int childCount;

//   TrieNode(char ch) {
//     data = ch;
//     for (int i = 0; i < 26; i++)
//       children[i] = NULL;
//     isTerminal = false;
//     childCount = 0;
//   }
// };

// class Trie {
// public:
//   TrieNode *root;

//   Trie(char ch) { root = new TrieNode(ch); }
//   void insertUtil(TrieNode *root, string word) {
//     int index = word[0] - 'a';
//     if (word.length() == 0) {
//       root->isTerminal = true;
//       return;
//     }

//     TrieNode* child;

//     // present
//     if (root->children[index] != NULL) {
//       child = root->children[index];
//     } else { // not present
//       child = new TrieNode(word[0]);
//       root->childCount++;
//       root->children[index] = child;
//     }

//     // recurssion
//     insertUtil(child, word.substr(1));
//   }
//   void insertWord(string word) { insertUtil(root, word); }

//   void lcp(string str,string &ans)
//   {
//     for(int i=0;i<str.length();i++)
//     {
//       if(root->childCount==1)
//       {
//         ans.push_back(str[i]);
//         root=root->children[str[i]-'a'];
//       }
//       else break;

//       //less length string
//       if(root->isTerminal) break;
//     }
    
//   }
// };
// string longestCommonPrefix(vector<string> &arr, int n) {
//   Trie *t=new Trie('\0');

//   //inserting the all strings into trie
//   for(int i=0;i<n;i++) t->insertWord(arr[i]);

//   string first=arr[0];
//   string ans="";

//   t->lcp(first,ans);

//   return ans;
// }
