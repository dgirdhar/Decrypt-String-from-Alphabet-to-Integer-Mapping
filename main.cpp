class Solution {
public:
    string freqAlphabets(string s) {
        string res = "";
        int currentIndex = 0;
        
        for (int i = 0; i < s.size(); ++i) {
            bool processed = false;
            
            if (s[i] == '1' || s[i] == '2') {
                if (i + 2 < s.size() && s[i + 2] == '#') {
                    string temp = s.substr(i, 2);                    
                    int data = atoi(temp.c_str());
                    char ch = 'a' + data - 1;
                
                    res += ch;
                    
                    i += 2;
                    processed = true;
                }
            }
            
            if (!processed) {
                int data = s[i] - '1' + 1;
                
                char ch = 'a' + data - 1;
                
                res += ch;
            }
        }
        return res;
    }
};
