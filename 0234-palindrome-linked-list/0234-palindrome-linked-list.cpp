
/**
234 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    //Approach
    // 3 > 1 > 5 > 4 > 2
    
    /*   
    //Approach 1 
    //using list T(n)= O(n) S(n)=O(n)

    bool checkPalidromeList(vector<int>&v){
        int s = 0;
        int e = v.size()-1;
        while(s<e){
            if(v[s]!=v[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* curr = head;
        vector<int>v;
        
        while(curr){
            v.push_back(curr->val);
            curr = curr->next;
        }
        return checkPalidromeList(v);
    }
    */

    /*
    //Approach 2
    //using reverse linklist //S(n) = O(n) , T(n) = O(n)

    ListNode* reverseLinkList(ListNode *&head){
        ListNode * curr = head;
        ListNode * newHead = NULL;
        while(curr){
            ListNode* newNode = new ListNode(curr->val);

            newNode->next = newHead;
            newHead = newNode;
            curr=curr->next;
        }
        return newHead;
    }
    bool checkPalindrome(ListNode*temp , ListNode*newTemp){

        while(temp){
            if(temp->val != newTemp->val){
                return false;
            }
            temp = temp->next;
            newTemp = newTemp->next;
        }
        return true;
    }

    bool isPalindrome(ListNode* head){
        if(!head)return true;
        ListNode* newHead = reverseLinkList(head);

        return checkPalindrome(head , newHead);
    }
*/
    
    //Approach 3
    //newlinklist -> 2nd half Reverselinklist
    //traverse both
    //S(n) = O(1)  & T(n) = O(n) NULL
    ListNode*  revSecondHalf(ListNode* slow){
         ListNode *prev = NULL;
         ListNode *curr = slow;
         ListNode *next = slow;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=next;
        }
        return prev;
    };
    
    bool checkpalindrome(ListNode* secondHalfRevHead , ListNode* firstHalfHead  ){
        while(secondHalfRevHead){
            if(secondHalfRevHead->val!=firstHalfHead->val){
                return false;
            }
            secondHalfRevHead = secondHalfRevHead->next;
            firstHalfHead = firstHalfHead->next;

        }
        return true;
    }

    bool isPalindrome(ListNode* head){
        if(!head || !head->next) return true;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast){
            slow = slow->next;
        }
        ListNode* secondHalfRevHead   = revSecondHalf(slow);
        return checkpalindrome(secondHalfRevHead , head);
    }
    

   /* 
    //Approach 4
    //using queue and recursion S(n) = O(n)  , T(n) = O(n)

    bool checkPalidrome(ListNode* node , queue<int>&q){
        if(!node)return true;
        q.push(node->val);
        bool isPalidrome = (checkPalidrome(node->next,q) &&(q.front()==node->val));
        q.pop();
        return isPalidrome;
    }

    bool isPalindrome(ListNode* head){
        queue<int>q;
        return checkPalidrome(head,q);
    }

*/
    /*
    //Approach 5
    //two pointer && recursion
    //T(n) = O(n) , S(n) = O(n)
    ListNode* s;
    
    bool checkPalindrome(ListNode*node){
        if(!node)return true;

        bool isPalidrome = checkPalindrome(node->next) && (node->val==s->val);

        s = s->next;
        return isPalidrome;

    }

    bool isPalindrome(ListNode* head){
        (*this).s = head;
        return checkPalindrome(head);
    }
    */

   
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna