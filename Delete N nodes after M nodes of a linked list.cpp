void linkdelete(struct Node  *head, int M, int N)
    {
        if(!head) return;
        Node* curr=head;
        Node* prev=head;
        int m=M;
        int n=N;
        while(curr){
            if(m>0){
                m--;
                prev=curr;
                curr=curr->next;
            }
            else{
                while(curr && n>0){
                    n--;
                    curr=curr->next;
                }
                prev->next=curr;
                n=N;
                m=M;
            }
        }
    }
