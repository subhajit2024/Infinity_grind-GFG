class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
      double maxDiagonal = 0;
    int maxArea = 0;

    for (const auto& dim : dimensions) {
        int length = dim[0];
        int width = dim[1];
        double diagonal = sqrt(length * length + width * width);

        if (diagonal > maxDiagonal || (diagonal == maxDiagonal && length * width > maxArea)) {
            maxDiagonal = diagonal;
            maxArea = length * width;
        }
    }

    return maxArea;  
    }
};
