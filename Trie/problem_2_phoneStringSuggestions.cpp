// class TrieNode {
// public:
//   char data;
//   TrieNode *children[26];
//   bool isTerminal;

//   // constructor
//   TrieNode(char ch) {
//     data = ch;
//     for (int i = 0; i < 26; i++)
//       children[i] = NULL;
//     isTerminal = false;
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

//     TrieNode *child;

//     if (root->children[index] != NULL) {
//       child = root->children[index];
//     } else {
//       child = new TrieNode(word[0]);
//       root->children[index] = child;
//     }

//     // recurssion
//     insertUtil(child, word.substr(1));
//   }

//   void printSuggestion(TrieNode* curr,vector<string> &temp,string prefix)
//   {
//       if(curr->isTerminal)
//       {
//           temp.push_back(prefix);
//       }
      
//       for(char ch='a';ch<='z';ch++)
//       {
//           TrieNode* next=curr->children[ch-'a'];

//           if(next!=NULL)
//           {
//               prefix.push_back(ch);
//               printSuggestion(next, temp, prefix);
//               prefix.pop_back();
//           }
//       }


//   }

//   void insertString(string word) { insertUtil(root, word); }

//   vector<vector<string>> getSuggestion(string str) {
//       TrieNode* prev=root;
//       vector<vector<string>> output;
//       string prefix="";

//       for(int i=0;i<str.length();i++)
//       {
//           char lastChar=str[i];

//           prefix.push_back(lastChar);

//           //checking for the last chat existance
    

//           TrieNode* curr=prev->children[lastChar-'a'];

//           if(curr==NULL)//not found
//           {
//                   break;
//           }

//           //found
//           vector<string>temp;

//           printSuggestion(curr,temp,prefix);
//           output.push_back(temp);
//           temp.clear();
//           prev=curr;
//       }
//       return output;


//   }
// };

// vector<vector<string>> phoneDirectory(vector<string> &contactList,
//                                       string &queryStr) {
//   // creation of trie
//   Trie *t = new Trie('\0');

//   // insert all contacts in trie
//   for (int i = 0; i < contactList.size(); i++) {
//     t->insertString(contactList[i]);
//   }

//   // return ans
//   return t->getSuggestion(queryStr);
// }