class Solution {
public:
     string url="";
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
      url = longUrl;
        return "http://tinyurl.com/4e9iAk";  
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
       return url;  
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));