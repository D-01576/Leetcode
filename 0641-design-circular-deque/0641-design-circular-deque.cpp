class MyCircularDeque {
public:
    MyCircularDeque(int k) {
        full = k;
    }
    
    bool insertFront(int value) {
        if(current == full){
            return false;
        }
        current++;
        vect.push_front(value);
        return true;
    }
    
    bool insertLast(int value) {
        if(current == full){
            return false;
        }
        current++;
        vect.push_back(value);
        return true;
    }
    
    bool deleteFront() {
        if(current == 0){
            return false;
        }
        current--;
        vect.pop_front();
        return true;
    }
    
    bool deleteLast() {
        if(current == 0){
            return false;
        }
        current--;
        vect.pop_back();
        return true;
    }
    
    int getFront() {
        if (isEmpty()) return -1;
        return vect.front();
    }
    
    int getRear() {
        if (isEmpty()) return -1;
        return vect.back();
    }
    
    bool isEmpty() {
        if(current == 0){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(current == full){
            return true;
        }
        return false;
    }
private:
    int full = 0;
    int current = 0;
    deque<int> vect;
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */