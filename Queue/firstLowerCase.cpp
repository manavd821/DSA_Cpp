#include<iostream>
#include<queue>
#include<vector>
#include<string>
std::string solve(std::string ch) {
    std::queue<char> q;
    std::vector<int>count(26,0);
    std::string ans="";
    int i=0;
    while(ch[i] != '\0') {
        if(count[ch[i]-'a'] < 1){ //no repetation
            count[ch[i]-'a']++;
            q.push(ch[i]);
            while(!q.empty() && count[q.front()-'a'] > 1){
                q.pop();
            }
            ans+=q.front();
        }
        else{ //count[ch[i]-'a'] >=1 => repetation
            count[ch[i]-'a']++;
            while(!q.empty() && count[q.front()-'a'] > 1){
                q.pop();
            }
            if(q.empty()) ans+='#';
            else ans+=q.front();
        }
        i++;
    }
    return ans;

}
int main() {
    std::string ch = "abcabc";
    std::string ans = solve(ch);
    std::cout << ans << std::endl;
}