class Solution {
public:
    int findComplement(int num) {
        string binary = bitset<32>(num).to_string();
        binary = binary.substr(binary.find('1'));
        string ni = "";
        for(int i = 0; i < binary.size(); i++){
            if(binary[i] == '0'){
                ni += '1';
            } else {
                ni += '0';
            }
        }
        return stoi(ni, nullptr, 2);
    }
};