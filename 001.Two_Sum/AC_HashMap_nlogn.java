/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_HashMap_nlogn.java
*  Create Date: 2015-02-01 22:19:27
*  Descripton:  Using HashMap
*/

import java.util.HashMap;
import java.util.Scanner;

public class Solution {

    public static int[] twoSum(int[] numbers, int target) {
        int[] res = new int[2];
        HashMap<Integer, Integer> nums = new HashMap<Integer, Integer>();

        for (int i = 0; i < numbers.length; ++i) {
            // add i-th number
            Integer a = nums.get(numbers[i]);
            if (a == null)
                nums.put(numbers[i], i);

            // find (target - numbers[i])
            a = nums.get(target - numbers[i]);
            if (a != null && a < i) {
                res[0] = a + 1;
                res[1] = i + 1;
                break;
            }
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        int[] numbers = new int[n];
        for (int i = 0; i < numbers.length; ++i) {
            numbers[i] = cin.nextInt();
        }
        int target = cin.nextInt();
        int[] res = twoSum(numbers, target);
        System.out.println(res[0] + " " + res[1]);
    }
}
