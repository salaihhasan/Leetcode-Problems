class Solution {
    int ans = 0;
    public int mostWordsFound(String[] sentences) {
        for(int i = 0; i < sentences.length;i++){
            int arr = sentences[i].split(" ").length;
            ans = Math.max(ans,arr);
        }
        return ans;
    }
}