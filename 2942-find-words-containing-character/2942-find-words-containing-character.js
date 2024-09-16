/**
 * @param {string[]} words
 * @param {character} x
 * @return {number[]}
 */
var findWordsContaining = function(words, x) {
    let ans = [];
    for(let i = 0 ; i < words.length;i++){
        if(words[i].includes(x)){
            ans[ans.length] = i;
        }
    }
    return ans;
};