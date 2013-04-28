#include<iostream>
using namespace std;
struct ListNode{
ListNode* next;
int val;
ListNode(int v){ val=v; next=NULL;}

};



ListNode* addTwoNumbers(ListNode* l1, ListNode*l2)
{
        ListNode* result = NULL;
        ListNode* front = NULL;
        ListNode* t1=l1;
        ListNode* t2 = l2;
        
        int c=0;
        while( t1!=NULL || t2!=NULL)
        {
            int sum=0;
            if(t1!=NULL){
			
                sum+=t1->val;
				t1=t1->next;
			}
                
            if(t2!=NULL){
                sum+=t2->val;
				t2=t2->next;
			}
                
            sum+=c;
            
            if( sum>=10)
                c= sum/10;
            else
                c=0;
            
            sum=sum%10;
            
            if(front==NULL)
            {
                result = new ListNode(sum);
                front = result;
            }
            else
            {
                result->next = new ListNode(sum);
                result = result->next;
            }
            
        }
        if( c>=1)
        {
            result->next= new ListNode(c);
            result = result->next;
        }
        return front;
}