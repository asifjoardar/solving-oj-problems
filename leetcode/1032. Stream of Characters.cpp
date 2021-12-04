class StreamChecker {
public:
    vector<unordered_map<char, int>> tr;
    vector<bool> term;
    vector<int> fail;
    int cPos;
    StreamChecker(vector<string>& words) {
        int count = 0;
        unordered_map<char, int> root;
        this->tr.push_back(root);
        this->term.push_back(false);
        this->fail.push_back(0);
        for (string word : words) {
            int cur = 0;
            for (char c : word) {
                if (this->tr[cur].find(c) != this->tr[cur].end()) {
                    cur = this->tr[cur][c];
                } else {
                    unordered_map<char, int> newNode;
                    this->tr.push_back(newNode);
                    this->term.push_back(false);
                    count++;
                    this->tr[cur][c] = count;
                    cur = count;
                }
            }
            this->term[cur] = true;
        }
        for (int i = 0; i < this->tr.size(); i++) {
            this->fail.push_back(0);
        }
        queue<pair<int, unordered_map<char, int>>> nodes;
        for (auto kv: this->tr[0]) {
            nodes.push({kv.second, this->tr[kv.second]});
        }
        while (!nodes.empty()) {
            auto p = nodes.front();
            nodes.pop();
            auto i = p.first;
            auto node = p.second;
            for (auto kv : node) {
                nodes.push({kv.second, this->tr[kv.second]});
            }
            for (auto kv : node) {
                char child = kv.first;
                int pos = kv.second;
                int f = this->fail[i];
                
                while (f != 0 && this->tr[f].find(child) == tr[f].end()) {
                    f = this->fail[f];
                }
                if (this->tr[f].find(child) != tr[f].end()) {
                    f = this->tr[f][child];
                }
                this->fail[pos] = f;
                
                if (this->term[this->fail[pos]]) {
                    this->term[pos] = true;
                }
            }
        }
        this->cPos = 0;
    }
    bool query(char letter) {
        
        while (this->cPos > 0 && this->tr[this->cPos].find(letter) == this->tr[this->cPos].end()) {
            this->cPos = this->fail[this->cPos];
        }
        if (this->tr[this->cPos].find(letter) != this->tr[this->cPos].end()) {
            this->cPos = this->tr[this->cPos][letter];
        }
        return this->term[this->cPos];
    }
};
