import java.util.*;

public class Main{
    public static int numSubarrayProductLessThanK(int[] nums, int k) {
        if (k <= 1) {
            return 0;
        }
        
        int count = 0;
        int prod = 1;
        int left = 0;
        
        for (int right = 0; right < nums.length; right++) {
            prod *= nums[right];
            
            while (prod >= k) {
                prod /= nums[left];
                left++;
            }
            
            count += right - left + 1;
        }
        
        return count;
        
    }
    
    public static void main(String[] args) {
        int[] nums = {10, 5, 2, 6};
        int k = 100;
        
        int result = numSubarrayProductLessThanK(nums, k);
        System.out.println("Number of subarrays with product less than k: " + result);
    }
}
