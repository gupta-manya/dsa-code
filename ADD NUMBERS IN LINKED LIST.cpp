class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        ListNode* num1=l1;
        ListNode* num2=l2;
        int carry=0;
        while(num1!=NULL || num2!= NULL){
            int sum= carry;
            if(num1){
                sum=sum+num1->val;

            }
            if(num2){
                sum=sum+num2->val;
                
            }
            ListNode* newnode= new ListNode(sum%10);
            carry= sum/10;
            curr->next = newnode;
            curr=curr->next;
            if(num1)num1=num1->next;
            if(num2)num2=num2->next;
            if(carry){
                ListNode* newnode= new ListNode(carry);
                curr->next = newnode;
            }
            


        }
        return dummy->next;
    }
};
