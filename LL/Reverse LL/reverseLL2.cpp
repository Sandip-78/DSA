class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left==right){
            return head;
        }

        ListNode* t = head;
        ListNode* before = NULL;
        int pos = 1;

        while(pos<left){m
            before = t;
            t = t->next;
            pos++;
        }

        ListNode* cur = t;
        ListNode* prev = NULL;
        ListNode* leftNode = t;
        ListNode* next = NULL;

        int times = right-left+1;

        while(times--){
            next = cur->next;
            cur->next = prev;

            prev = cur;
            cur = next;
        }
        
        leftNode->next = cur;
        if(before != NULL){
            before->next = prev;
        }else{
            head = prev;
        }

        return head;
    }
};

// TC : O(n)
// SC : O(1)