struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}

};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        if ( !head ) return nullptr ;

        int count = 0 ;
        ListNode* temp = head ;

        while ( temp ) {
            count++ ;
            temp = temp->next ;
        }

        count /= 2 ;

        temp = head ;
        for ( int i = 0 ; i < count ; i++ ) {
            temp = temp->next ;
        }

        return temp ;

    }
};