/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int[] nodesBetweenCriticalPoints(ListNode head) {
        ArrayList<Integer> critical = new ArrayList<>();

        ListNode prev = head;
        ListNode curr = head.next;
        int pos = 2;

        while (curr.next != null) {
            if ((curr.val < prev.val && curr.val < curr.next.val)
                    || curr.val > curr.next.val && curr.val > prev.val) {
                critical.add(pos);
            }
              prev = curr;
              curr = curr.next;
              pos++;
        }

        if(critical.size() < 2 ) return new int []{-1 , -1};

        int minDist = Integer.MAX_VALUE;

        for (int i = 1; i < critical.size(); i++) {
            int distance = critical.get(i) - critical.get(i - 1);

            minDist = Math.min(minDist, distance);
        }
       int maxDist =
            critical.get(critical.size() - 1) - critical.get(0);

        return new int[]{minDist, maxDist};

    }
}