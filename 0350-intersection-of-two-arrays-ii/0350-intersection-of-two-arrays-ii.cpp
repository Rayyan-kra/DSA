class Solution {
public:
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
sort(nums1.begin(), nums1.end());
sort(nums2.begin(), nums2.end());
    int l = 0;
    int h = 0;
    vector<int> ans;

    while (l < nums1.size() && h < nums2.size()) {
        if (nums1[l] == nums2[h]) {
            ans.push_back(nums1[l]);
            l++;
            h++;
        }
        else if (nums1[l] < nums2[h]) {
            l++;
        }
        else {
            h++;
        }
    }

    return ans;
}

};
