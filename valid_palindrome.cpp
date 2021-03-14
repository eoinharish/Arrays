#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="A man, a plan, a canal: Panama";
        
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9')
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    s[j]=s[i]+'a'-'A';
                    j++;
                }
                else{
                    s[j]=s[i];
                    j++;
                }
            }
        }
        s.resize(j);
        
        int flag=0;
        int i=0;
        j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j]){
                flag=1;
                break;
            }
            i++;
            j--;
        }
        if(flag==0) cout<<"true";
        else cout<<"false";
}

//  bool isPalindrome(string s) 
//     {
//         string check;
//         for(int i=0;i<s.size();i++)
//         {
//             if(isalnum(s[i]))
//                check+=tolower(s[i]);
//         }
//         string temp=check;
//         reverse(check.begin(),check.end());
//         return temp==check;
//     }