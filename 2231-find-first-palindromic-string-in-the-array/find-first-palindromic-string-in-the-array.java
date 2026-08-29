class Solution {
    public String firstPalindrome(String[] words) {
        for(int i = 0; i < words.length; i++){
            int low = 0;
            int high = words[i].length() - 1;

            while(low <= high){
                if(words[i].charAt(low) != words[i].charAt(high) ) break;
                low++;
                high --;
            }
            if(low >= high) return words[i];
        }
        return "";
    }
}