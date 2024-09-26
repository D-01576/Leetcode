class MyCalendar {
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(const auto& booking : bookings){
            if(booking.second > start && booking.first < end){
                return false;
            }
        }
        bookings.push_back({start,end});
        return true;
    }
private:
    vector<pair<int, int>> bookings;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */