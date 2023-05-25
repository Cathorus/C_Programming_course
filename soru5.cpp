
#include<stdio.h>
#include<stdlib.h>

struct node{
	int number;
	struct node *next;	
};

typedef struct node node;

int main(){
	int x,t=0,c=0; 
	node *thead,*p,*chead,*q;
	while(1){
		printf("Bir deger giriniz:");
		scanf("%d",&x);
		if(x == -1) break;
		if(x%2==0){
			if(t==0){
				thead=(node*)malloc(sizeof(node));
				p=thead;
			}
			else{
				p->next=(node*)malloc(sizeof(node));
				p=p->next;			
			}
			p->number=x;
			t++;
			p->next=NULL;
		}
		else{
			if(c==0){
				chead=(node*)malloc(sizeof(node));
				q=chead;
			}
			else{
				q->next=(node*)malloc(sizeof(node));
				q=q->next;			
			}
			q->number=x;
			c++;
			q->next=NULL;		
		}
}
	p->next=chead;
	p=thead;
	while(p!=NULL){
		printf("%d  ",p->number);
		p=p->next;
	}
return 0;	
}  
