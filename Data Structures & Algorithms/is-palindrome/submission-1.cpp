bool isPal(string s){
for(int i=0;i<s.length()/2;i++){
    if(s[i]!=s[s.length()-i-1])return false;
}
return true;

}


class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.length();i++){
            int x=(int)s[i];
            if (x >= '0' && x <= '9') a += s[i];
            if(x>64&&x<91)a+=(char)(x+32);
            if(x>96&&x<123)a+=(char)(x);
        }
        return isPal(a);
    }
};
