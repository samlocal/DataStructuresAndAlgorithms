// class Solution {
// public:
// bool solve(string s,string p,int i,int j)
// {
//     if(i<0 && j<0) return true;

//     if(i>=0 && j<0) return false;

//     if(i<0 && j>=0){
//         for(int k=0;k<=j;k++)
//         {
//             if(p[k]!='*') return false;
//         }
//         return true;
//     }

//     //match
//     if(s[i]==p[j] || p[j]=='?') return solve(s,p,i-1,j-1);
//     else if(p[j]=='*') return (solve(s,p,i-1,j) || solve(s,p,i,j-1));
//     else return false;

    
// }
//     bool isMatch(string s, string p) {
//         return solve(s,p,s.length()-1,p.length()-1);
//     }
// };