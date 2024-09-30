class CustomStack {
public:
    CustomStack(int maxSize) {
        size = maxSize;
    }
    
    void push(int x) {
        if(current < size){
            stack.push_back(x);
            current++;
        }
    }
    
    int pop() {
        if(current == 0){
            return -1;
        }
        int ret = stack[stack.size()-1];
        stack.pop_back();
        current--;
        return ret;
    }
    
    void increment(int k, int val) {
        if(k > current){
            k = current;
        }
        
        for(int i = 0 ; i < k ; i++){
            stack[i] += val;
        }
    }
private:
    int current = 0;
    int size = 0;
    vector<int> stack;
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */