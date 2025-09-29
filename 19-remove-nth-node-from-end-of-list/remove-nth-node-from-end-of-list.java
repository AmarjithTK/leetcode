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
    public ListNode removeNthFromEnd(ListNode head, int n) {

        if (head.next == null && n == 1) return null;

        ListNode temp= head;

        int count=0;

        while(temp!=null){
            temp=temp.next;
            count++;
        }

        if(count==n){
            head=head.next;
            return head;
        }

        temp=head;

        ListNode head2 = temp;


    


        for(int i=1;i<=count-n-1;i++){
            temp=temp.next;
        }

        temp.next= temp.next.next;


        return head2;

    


        // Node slow = head;
        // Node fast=head;

        // Node dummy = new Node(-1);
        // Node tail=dummy;
        // tail.next=head

        


        // for(int i=0;i<=n;i++){
        //     fast=fast.next;
        // }

        // while(fast)

        
    }
}