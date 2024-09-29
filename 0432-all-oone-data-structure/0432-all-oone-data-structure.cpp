class AllOne {
public:
    AllOne() {
        
    }
    
    void inc(string key) {
        jj[key]++;
    }
    
    void dec(string key) {
        if (jj.find(key) != jj.end()) {
            jj[key]--;
            if (jj[key] == 0) {
                jj.erase(key); 
            }
        }
    }
    
    string getMaxKey() {
        int current = 0;
        string leet = "";
        for(const auto& j: jj){
            if(j.second > current){
                current = j.second;
                leet = j.first;
            }
        }
        return leet;
    }
    
    string getMinKey() {
        int current = INT_MAX;
        string leet = "";
        for(const auto& j: jj){
            if(j.second < current){
                current = j.second;
                leet = j.first;
            }
        }
        return leet;
    }
private:
    unordered_map<string,int> jj;
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */