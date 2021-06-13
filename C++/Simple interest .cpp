class Solution {
  public:
    double simpleInterest(int P, int R, int T) {
        return double(((double)P * (double)R * double(T)) / 100);
    }
};
