void swap(int k, struct node *head)
{
	struct node *temp = head;
	int n = 0;
	while(temp!=NULL)
	{
		n++;
		temp=temp->next;
	}
	if(n<k)
		return;
	if((2*k-1)==n)
		return;
	struct node *M = head;
	for(int i = 1; i<k; i++)
	{
         M = M->next;
	}
	struct node *N = head;
	for(int i = 1; i<n-k+1 ; i++)
	{
		N=N->next;
	}
	if(M->prev)
		M->prev->next = N;
	    M->next->prev = N;

	if(N->prev)
		N->prev->next = M;
	    N->next->prev = M;

	    struct node *p = M;
	    M->next = N->next;
	    M->prev = N->prev;
	    N->next = p->next;
	    N->prev = p->prev

}