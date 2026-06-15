class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(26,0);
        int l=0,mx=0;
        for(int r=0;r<s.length();r++){
            v[s[r]-'A']++;
            int a=0,b=0;
            for(auto i:v){
                a=max(a,i);
                b+=i;
            }
            b-=a;
            while(b>k){
                v[s[l]-'A']--;
                l++;
                a=0,b=0;
                for(auto i:v){
                a=max(a,i);
                b+=i;
            }
            b-=a;
            }
            mx=max(mx,r-l+1);
        }
        return mx;
    }
};
