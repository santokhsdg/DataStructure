
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define lt 50

#define llt 20
#define text 100

// DATE OF MAKING : 1-8-2015
// AUTHOR: SANTOKH SINGH ($$D)/
// 14103060  (1588)

// Resuse of data structure confirmer
 int list=0,stack=0,queue=0;  // checks usage of from Run main functions
int CheckList=0,CheckQueue=0;  
int frt=0;           // checks that no list left start the link list again when chosen from runmain
int LSK=1,LSQ=1; // ON DELETION OF ALL lIST tell the system to start makinG list of link liSts again

//Things to remember:
// char * is the data type of string
// put & in scanf, error 255
//assign A=A->link correctly;
// for loop is showing C99 MODE error: variable must not be declared in the loop;// variable cant be declared inside the loop
//not able to input char y/n;
// remove '\0' from concat and then see result


void RunMain();
void ChoiceExitMain();
int CompareString(char *a,char *b);
void FreeMemory();
///
//DATA *****************
// this may be the turning point of this program ,,, All datatypes are defined in this structure:
struct Data{
	struct Data * DataLink;
	char ColName[lt];
	int Integer;
	float Decimal;
	char Text[text];
	char ch;
	int Type; //0-integer   1-decimal  2-text   3-character	
};
//***********************************

//  Queue
///////////***********************
struct Queue{
	char name[llt];
	struct Queue *link;
	struct Nodeq *front;
	int f;
	int r;
	struct Nodeq *rear;
	struct Nodeq *end;	
	int limit;
}*LQ,*QC;

struct Nodeq{
	char name[lt];
	struct Nodeq *link;
	struct Data * DataLink;
};
////////////////////////*********************

/// stack
struct Stack{
	char name[llt];
	struct Stack *link;
	struct Nodel *end;
	struct Nodel *start;
	int top;
	int limit;
}*Slist,*SC;

struct Nodel{	
	char name[lt];
	struct Data * DataLink;
	struct Nodel *linkf;	
	struct Nodel *linkb;	
};



//  LINK LIST   ****************
struct Node{	
	char name[lt];
	struct Node *link;
	struct Data * DataLink;	
};


// Link List
struct List{
	char name[llt];
	struct List *link;
	int nodes;
	struct Node *start,*end;
}*LS,*LC;


// General Functions
///////////////////
void Concat(char s[llt],char * s1,char * s2);  
// s[llt] is list POINTER

///Queue Prototypes
void RunQueue();
void AddElement();
void CreateQueue();
void QueueProceed();
int  CheckAdd();
void AddElement();
void QueueChoice();


/////////////////////
////STACK PROTOTYPES
void RunStack();
void CreateStack();
void StackChoice();
int CheckPush();
void Push();
int CheckPop();
void Pop();
void Display();
void ShowStack();
void Proceed();
void ChangeStack(int stacks);
void ExitChoice();
///******LINK LIST*********
//{.........................  :>  :>
//STACK STRUCTURES + lINK List structures.

//LS TAKES ACCOUNT OF ALL LISTS    LC : CURRENT LIST



void RunList();
void CreateNodes();
void ListContent();
void ShowContent();
void LocateCenter();
void ReplaceNode();
void DeleteNode();
void ShowAll();
void LocateNode();
void Check();
void AddNode();
void AddValue();
void Choice();
void SwapValue();
void ShowLists();
void ConnectLists();
void ConnectionChoice(struct Node*,char*);
void EndToStartCon(struct Node*,char*);
void EndToNodeCon(struct Node*,char*);
void MergeLists(struct Node*,char*);
void BreakConnection(struct Node *con,char * cl);
void ChoiceExit();
void MultipleNodes();
void ReverseList();
void DeleteList();
void SimulateList();
void LinkListMainChoice();
///
////////

//BreakConnection Problem try new algorithms.
// make get int fuction like rishab
void GetInt(int in)
{
	//while()
}

int CompareString(char *a,char *b)
{
	int l1=strlen(a),l2=strlen(b),i,rn=0;
	if(l1==l2)
	{
		rn=0;
		for(i=0;i<l1;i++)
		{
			printf("\nworks\n");
			if(a[i]!=b[i])
			{
				rn=1;
				break;
			}
		}
	}
	return rn;	
}



void SimulateList()
{
struct Node * start=LC->start,*lc,*a,*b,*c,*d,*e,*f,*check;
struct List * C=LS,*D=LS;
int lcount=0,ch,i=1,m=0,kk=0;

printf("\n\t\tAvailable Lists: \n\n");	
	while(C->link!=NULL)
	{
		printf("List Number:%d   List Name:%s\n",lcount+1,C->name);
		C=C->link;
		lcount++;
	}
	printf("List Number:%d   List Name:%s",lcount+1,C->name);
	lcount++;
	printf("\n\n\tCurrent List:%s\n",LC->name);
	printf("\tLists:%d\n",lcount);	
	
	printf("Enter the List Number(Chosen List) to Simulate:");
	scanf("%d",&ch);
	if(ch>lcount || ch<1 )
	{
		printf("\n     Entered List Number does not exist. Process Terminated.");
		 Check();
	}
	else 
	{
		
		while(i<ch)
		{
			C=C->link;
			D=D->link;
			i++;
		}
		
		printf("\nSelected List:%s\n\n",D->name);
		lc=D->start;
		a=lc;
		b=lc;
		if(a->link==NULL )
		{
			printf("\tList Type: Point");
		}
		else if(a->link->link==NULL)
		{
		printf("\tList Type: Linear");	
		}
		if(a->link->link!=NULL){
		
		while(a->link!=NULL)
		{
			a=a->link;
			b=b->link->link;
			check=b->link;
			if(b->link==NULL || check->link==NULL)
			{
				printf("\tList Type: Linear");
				break;
			}
			if(a==b)
			{
				c=a;
				
				d=lc;
				e=a;				
				while(1)
				{
					if(d==e && d==lc)
					{
						kk++;
					}
					d=d->link;
					e=e->link;
					if(e==c || d==c)
					{
						printf("\tList Type: Circular");
						m++;
						break;
					}
					if(d==e && kk<1)
					{
						printf("\tList Type: Loop");
						m++;
						break;
					}
				 
				}
				if(m>0)
				{
					break;
				}
			}
			
		}
	}
	}
	////	
}

void DeleteList()
{   
struct Node * start=LC->start,*last,*st,*a,*b,*c,*prev;
struct List * C=LS,*D=LS,*A=LS,*B,*E;
int lcount=0,ch,i=1,j=1,k=0,n,Last=0;

printf("\n\t\tAvailable Lists: \n\n");	
	while(C->link!=NULL)
	{
		printf("List Number:%d   List Name:%s\n",lcount+1,C->name);
		C=C->link;
		lcount++;
	}
	printf("List Number:%d   List Name:%s",lcount+1,C->name);
	lcount++;
	printf("\n\n\tCurrent List:%s\n",LC->name);
	printf("\tLists:%d\n",lcount);	
	
	printf("Enter the List Number(Chosen List) to delete:");
	scanf("%d",&ch);
	if(ch>lcount || ch<1 )
	{
		printf("\n     Entered List Number does not exist. Process Terminated.");
		 Check(start);
	}
	else 
	{
		A=LS;
		while(i<ch)
		{
			C=C->link;
			D=D->link;
			i++;
		}
		
		printf("\nSelected List:%s\n",D->name);
		
		if(LC->start==D->start && LS->link!=NULL) 
		{			
			Last++;
		}
		
    i=1; 
	n=ch;  
	// PROBLEM MAKE THE DELETE FUNCTION AGAIN
	while(i<n-1)
	{
		
		A=A->link;
		i++;
	}
	if(n==1)
	{    if(A->link==NULL)
	  {	  	
		printf("\nWARNING:Trying to delete the current and the only list!!!\n\n");
		printf("Press '0' to delete and '1' to withdraw.\nchoice:");
		scanf("%d",&ch);
		   if(ch==1)
		   {
		   	printf("\n\nDeletion Cancelled\n");
		   }
		else if(ch==0)
		{
			A->link=NULL;
			A=NULL;
			printf("\nList Deleted");
			printf("\n\n\t\t** Link List Disabled **\n");
			free(LS);			
			CheckList++;
			LSK=1;
			RunMain();
			
		}
		
	  }
	if(A->link!=NULL)
	  {
		LC=A->link;
		A->link=NULL;
		free(A);
		printf("\nList Deleted");
	  }
	}
	
	if(n!=1 && A->link->link!=NULL)
	{	
	B=A->link;	
	A->link=B->link;
	printf("\nList Deleted");
    }
    
    if(n!=1 && A->link->link==NULL)
	{	
	A->link=NULL;	
	printf("\nList Deleted");
    }  
		}
		
		if(Last>0)
		{
		//	printf("\nworks\n");
		 	E=LS;
		 	
		 	while(1)
		 	{
		 		if(E!=NULL)
		 		{
		 			break;
				 }
		 		E=E->link;
		 		
		    }
		    LC=E;
		    st=LC->start;
		    printf("\n\nCurrent List:%s\n",LC->name);
				    
		}
		
		
}


void ReverseList( )
{
	printf("\n\n\t\t| Reverse List |\n");
	
struct Node * start=LC->start,*con,*last,*st,*a,*b,*c,*prev;
struct List * A=LS,*B=LS;
int lcount=0,ch,i=1,j=1,k=0;

printf("\n\t\tAvailable Lists: \n\n");	
	while(A->link!=NULL)
	{
		printf("List Number:%d   List Name:%s\n",lcount+1,A->name);
		A=A->link;
		lcount++;
	}
	printf("List Number:%d   List Name:%s",lcount+1,A->name);
	lcount++;
	printf("\n\n\tCurrent List:%s\n",LC->name);
	printf("\tLists:%d\n",lcount);	
	
	printf("Enter the List Number(Chosen List) to Reverse:");
	scanf("%d",&ch);
	if(ch>lcount || ch<1 )
	{
		printf("\n     Entered List Number does not exist. Process Terminated.");
		 Check(start);
	}
	else 
	{
		A=LS;
		while(i<ch)
		{
			A=A->link;
			B=B->link;
			i++;
		}
		con=B->start;
		printf("\nSelected List:%s\n",B->name);
		st=con;
		a=st;
	//works
		
		if(a->link!=NULL)
		{
		
		while(1)
		{
			b=a->link;
          if(k>0)
          {
          
			if(a->link==NULL)
          	{
          	  a->link=prev;
			  con=a;
			  break;
			} 
			else
			{
				a->link=prev;
			}         	  
		  }				
		if(b->link!=NULL)
		{
			c=b->link;
		}		
		
		if(b->link==NULL)
		{
			b->link=a;
			con=b;
			break;
		}		
		 b->link=a;	
		if(j==1)
		{
			a->link=NULL;
			j++;
		}	
		
		   prev=b;
			a=c;			
			k++;			
		}
	}
	st=con;
	B->start=st;
	printf("\tList Reversed.");
	}
	
	if(strcmp(LC->name,B->name)==0)
	{
		LC->start=st;		
	}
	
	
	
	
	
}

void MultipleNodes()
{
	struct Node *start=LC->start;
	printf("\n\n\t\t| Add Multiple Nodes |\n");
	struct Node * nd=start,*temp,*nd1;
	int n,i=1;
	while(nd->link!=NULL)
	{
		nd=nd->link;
	}
	printf("\nEnter number of Nodes to Add:");
	scanf("%d",&n);
	while(i<=n)
	{
		nd1=(struct Node *)malloc(sizeof(struct Node));
		nd1->link=NULL;
		if(i==1)
		{
			nd->link=nd1;
			Concat(nd1->name,"EMPTY","");
			temp=nd1;
		}
		else{
			temp->link=nd1;
	    Concat(nd1->name,"EMPTY","");
	temp=nd1;
		}
	
	i++;
	}
	
	printf("%d Nodes Added.",n);
}



void Concat(char s[llt],char * s1,char * s2)
{
	int l1=strlen(s1),l2=strlen(s2),i,j=0;
	
	for(i=0;i<l1;i++)
	{
		s[i]=s1[i];
	}
	
	for(j=0;j<l2;j++,i++)
	{
		s[i]=s2[j];
	}
	s[i]='\0';
}

/// Part Functions of Connections are not changed ,internal functions of connection remain same.
void ConnectLists()
{
	printf("\n\n\t\t| Connect Lists |\n");
	
struct Node *con;
struct List * A=LS,*B=LS;
int lcount=1,ch,i=1;
char *chosenList;

printf("\n\t\tAvailable Lists: \n\n");	
	while(A->link!=NULL)
	{
		printf("List Number:%d   List Name:%s\n",lcount,A->name);
		A=A->link;
		lcount++;
	}
	printf("List Number:%d   List Name:%s",lcount,A->name);	
	printf("\n\n\tCurrent List:%s\n",LC->name);
	printf("\tLists:%d\n",lcount);	
	
	printf("Enter the List Number(Chosen List) to establish Connection:");
	scanf("%d",&ch);
	if(ch>lcount || ch<1 )
	{
		printf("\n     Entered List Number does not exist. Connection Terminated.");
		 Check();
	}
	else
	{
		while(i<ch)
		{
			B=B->link;
			i++;
		}
		con=B->start;
		printf("\nSelected List:%s\n",B->name);
		chosenList=B->name;
		ConnectionChoice(con,chosenList);
	}	
}


void ConnectionChoice(struct Node *con,char * cl)
{
	int ch;
	printf("\n\t\t Connection Modes:\n");
	printf("\nSelect a Connection Mode from the options:\n\n");
	printf(">'1' for End to Start Connection:(End of Current List->Start of Chosen List)\n\n");
	printf(">'2' for End to Node Connection:(End of Current List->Node of Chosen List)\n\n");
	printf(">'3' for Node to Start Connection:(Node of Current List->Start of Chosen List)\n\n");
	printf(">'4' for Node to Node Connection:(Node of Current List->Node of Chosen List)\n\n");
	printf(">'5' Merge Lists (Current List have merged elements)\n\n");
	printf(">'6' Break Connection of Lists(Circular, Loop & Connector Node).\n\n");
	printf(">'7' for withdrawing Connection Process.\n\n");
	printf("Choice:");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			EndToStartCon(con,cl);
			break;
			case 2:
			EndToNodeCon(con,cl);
			break;
			case 3:
			NodeToStartCon(con,cl);
			break;
			case 4:
			NodeToNodeCon(con,cl);
			break;
			case 5:
			MergeLists(con,cl);
			break;
			case 6:
		    BreakConnection(con,cl);	
		    break;
		    case 7:
		    Check();	
		    break;
		    default:
		    	printf("\nTRY AGAIN....ENTER A VALID CHOICE\n");
		        ConnectionChoice(con,cl);
		        break;
	}
}

void BreakConnection(struct Node *con,char * cl)
{
	struct Node *st=con,*mg;	
	Concat(mg->name,"Connection List:",cl);	
	int i=1;		
	while(1)
	{		
		if(CompareString(&(st->name),&(mg->name))==0)
		{
			i++;
			break;
		}
		if(st->link==NULL)
		{
			break;
		}
		st=st->link;	
	}
	
	if(i>1)
	{
		st->link=NULL;
	Concat(st->name,"EMPTY","");
	printf("\n\tConnection Breaked");
	}
	else
	{
		printf("\n\nChosen Link List does not have any Connection Node.");
	}
	
}

void MergeLists(struct Node *con,char * cl)
{
	struct Node *n1=LC->start;
	struct Node *ml=con,*NewNode,*temp,*clist=n1;
	if(n1==con)	
	{
	printf("\n\t\tUser Warning:Current List cannot be merged with itself.")	;
	}
	else{
	
	while(1)
	{
		NewNode=(struct Node *)malloc(sizeof(struct Node));			
	
		if(clist->link!=NULL)	
		{
		NewNode->link=clist->link;
		clist->link=NewNode;
		Concat(NewNode->name,&(ml->name)," ");
		clist=clist->link->link;		
		}
		else if(clist->link==NULL)
		{
	     clist->link=ml;
		 break;			
		}
		
		if(ml->link!=NULL)
		{
		 ml=ml->link;	
		}
		else if(ml->link==NULL)	
		{
			NewNode->link=clist;
			break;
		}	
		if(clist->link==NULL && ml->link==NULL)
		{
			
			clist->link=ml->link;
		}
	}
	// IN CASE THE USER MERGES THE CURRENT LIST WITH ITSELF; TO PUT A HAULT AT THE END;
	printf("\n\tLists Merged.");
}
}




void NodeToStartCon(struct Node *con,char * cl)
{
	struct Node *n1=LC->start;
	struct Node * A=n1,* NewNode;
	int n,i=1,cch,l;
	char *s;
	printf("\nEnter the Node Number of Current List:");
	scanf("%d",&n);
	while(A->link!=NULL && i<n)
	{
		i++;
		A=A->link;
	}
	printf("\nPress '1' to insert a Connector Node and '0' for direct Connection:");
	scanf("%d",&cch);
	if(cch==1)
	{
	
	NewNode=(struct Node *)malloc(sizeof(struct Node));	
	A->link=NewNode;
	Concat(NewNode->name,"Connection List:",cl);	
	NewNode->link=con;
	}
	else{
		A->link=con;
	}
	
	printf("   \n Connection established.");
	
}

void EndToStartCon(struct Node * con,char * cl)
{ //struct Node * n2=n1;
struct Node * n1=LC->start;
struct Node * NewNode;
int l,cch;
char *s;
	while(n1->link!=NULL)
	{
		n1=n1->link;
	}
	printf("\nPress '1' to insert a Connector Node and '0' for direct Connection:");
	scanf("%d",&cch);
	if(cch==1)
	{
		
	NewNode=(struct Node *)malloc(sizeof(struct Node));	
	n1->link=NewNode;
	Concat(NewNode->name,"Connection List:",cl);
	
	NewNode->link=con;
	}
	else{
		n1->link=con;
	}

	///	ShowAll();
	printf("   \n Connection established.");
}

void EndToNodeCon(struct Node *con,char * cl)
{
	struct Node *n1=LC->start;
	int n,lc=1,l,cch;
	struct Node * A=con,*n2=n1,*NewNode;
	char *s;
	while(n2->link!=NULL)
	{
		n2=n2->link;
	}
	printf("Enter the Node Number of Chosen List:");
	scanf("%d",&n);
	while(A->link!=NULL && lc<n)
	{   lc++;
		A=A->link;
	}
	if(n>lc && n<1)
	{
		printf("\nEntered Node Number Does not exit. Connection Process Terminated");
		Choice(n1);
	}
	else
	{
		printf("\nPress '1' to insert a Connector Node and '0' for direct Connection:");
	scanf("%d",&cch);
	if(cch==1)
	{
		
	NewNode=(struct Node *)malloc(sizeof(struct Node));	
	n2->link=NewNode;
	Concat(NewNode->name,"Connection List:",cl);	
	NewNode->link=con;
	}
	else{
		n2->link=con;
	}

	
		printf("   \n Connection established.");
	}	
}

void NodeToNodeCon(struct Node *con,char * cl)
{
	struct Node *n1=LC->start;
	int k1,k2,i=1,j=1,l,cch;
	struct Node *A=n1,*NewNode;
	char *s;
	printf("Enter the Node Number of Current List:");
	scanf("%d",&k1);
	printf("\nEnter the Node Number of Chosen List:");
	scanf("%d",&k2);
while(A->link!=NULL && i<k1 )
{    i++;
	A=A->link;
}
while(con->link!=NULL && j<k2 )
{    j++;
	con=con->link;
}

		
printf("\nPress '1' to insert a Connector Node and '0' for direct Connection:");
	scanf("%d",&cch);
	if(cch==1)
	{	
	NewNode=(struct Node *)malloc(sizeof(struct Node));	
	A->link=NewNode;
	Concat(NewNode->name,"Connection List:",cl);	
	NewNode->link=con;
	}
	else{
		A->link=con;
	}

printf("   \n Connection established.");	
}



void SwapValue()
{
	struct Node *start=LC->start;
	printf("\n\n\t\t| Swap Node Values |\n");
	struct Node *n1=start, *n2=start;
	int i=1,l,s,a,b,l1,l2,m=0,ls;
	char *nm1,*nm2,nm[lt];
	
		// nm[lt]=n1->name;
		// printf("%s",nm);
		
		 printf("\nEnter the first Node Number:");
		 scanf("%d",&a);
		 printf("\nEnter the second Node Number:");
		 scanf("%d",&b);
		 
	if(a>b)
	{
		l=a;    s=b;
	}
	else if(b>a)
	{
		l=b;   s=a;
	}
	else if(a=b)
	{
		printf("\nSwapping can't be done, both Nodes are same..!!\n");
	}
	
	if(a!=b)
	{		
     while(i<l)
	{    i++;
		if(i<=s)
		{
			n1=n1->link;
		}
		     n2=n2->link;
		     if(n2->link==NULL)
		     {
		     	break;
			 }
	}
	
	printf("\n\nNode:%d  Name:%s",s,n1->name);
	printf("\nNode:%d  Name:%s\n\n",l,n2->name);
	 nm1=n1->name;
	 nm2=n2->name;
	 
	 l1=strlen(nm1);
	 l2=strlen(nm2);
	 if(l1>l2)
	 {
	 	ls=l1;
	 }else
	 {
	 	ls=l2;
	 }
	 for(m;m<ls;m++)
	 {
	 	nm[m]=n2->name[m];
	 	n2->name[m]=nm1[m];
	 }
	 for(m=0;m<ls;m++)
	 {
	 	n1->name[m]=nm[m];
	 }	 	
	printf("\n\tNames Interchanged");
   }  
}



void ShowLists()
{

struct List * A=LS,*B=LS,*C;
int lcount=0,ch,ln,i=1;

printf("\n\n\t\t| Available Lists |\n\n");
	
	while(A->link!=NULL)
	{
		printf("List Number:%d   List Name:%s\n",lcount+1,A->name);
		A=A->link;
		lcount++;
	}
	printf("List Number:%d   List Name:%s",lcount+1,A->name);
	lcount++;
	printf("\n\n\tCurrent List:%s\n",LC->name);
	printf("\tLists:%d\n",lcount);
	
	printf("\nPress '1' to change the Current List and '0' to remain on previous List.\nchoice:");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Enter the required List Number(Shown Above):");
		scanf("%d",&ln);
		if(ln>lcount)
		{
			printf("\nEntered List Number does not exist.%s is the Current List.\n\t\t Process Terminated.\n",LC->name);
			
		}
		else{		
			while(i<ln)
			{
				B=B->link;				
				i++;			
			}
			LC=B;			
		
			printf("\nCurrent List changed.\n\nNew Current List Number:%d   List Name:%s",ln,LC->name);			
		}
	}	
	
}


void CreateList()
{
printf("\n\n\t\t| Create New List |\n");
int n=1,i=0;
struct Node *start;
static struct List *temp;
struct List *ln;


     CheckList=0;
     printf("\nEnter List Name:");      
	 ln=(struct List *)malloc(sizeof(struct List));
	 scanf("%s",&(ln->name)); 
	 ln->link=NULL; 
	 if(LSK==1)
	 {
	 	LS=ln;
	 }
	 
	 if(LSK>1)
	 {
	 	temp->link=ln;
	 }
	    temp=ln;
	    LSK++;
	    //ln->start=start;
	    ln->end=NULL;
	    ln->nodes=0;
	    LC=ln;
	    
	
	
	printf("\nCurrent List:%s",LC->name);
	//printf("\n%d Nodes Created",n);
		
}



void ListContent()
{  
 printf("\n\n\t\t| Add List Content |\n");
struct Node * start,*temp;
    int n,i=0,l=0;
   // char s[50]="EMPTY";
     struct Node * nd=start;
	printf("\nEnter the number of values to be entered:");
	
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\nNo Node Created Node in List!!!\n\n.\n\t");
	    Choice();
	}
	if(LC->start!=NULL)
	{
		i=LC->nodes;
		n=n+LC->nodes;
		temp=LC->end;
	}
	while(i<n)
	{
		
		struct Node  *Nd;
		Nd=(struct Node *)malloc(sizeof(struct Node));
		Nd->link=NULL;
		 if(i==0)
		 {
		 	start=Nd;
		 	LC->start=start;
		 	temp=Nd;
		 	LC->end=start;
		 	LC->nodes++;
		 	printf("\nEnter Name %d: ",i+1);
		 	scanf("%s",&(Nd->name));
		 	//Concat(Nd->name,"EMPTY","");
		 }
		 else
		 {
		 //	Concat(Nd->name,"EMPTY","");
		 	temp->link=Nd;
		 	temp=Nd;
		 	LC->end=Nd;
		 	LC->nodes++;
		 	printf("\nEnter Name: %d",i+1);
		 	scanf("%s",&(Nd->name));
		 }
	i++;	
	}
	printf("\nNames entered");
}

void ShowContent()
{    
 printf("\n\n\t\t| Show List Content |\n");
 struct Node *start=LC->start;
 int n,i=1;
struct Node *nd=start;
	printf("\nEnter the Number names to show:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("Name %d: %s \n",i, nd->name);
		
		nd=nd->link;
		i++;
	}
	
}

void LocateCenter()
{
	int i=1;
	struct Node * start=LC->start;
	printf("\n\t\t| Locate Center |");
	struct Node * A=start,* B=start, * check;
     check=A->link;
     
	while(B->link!=NULL && check->link!=NULL)
	{		
		B=B->link->link;
		check=B->link;
		A=A->link;
		i++;						
	}	
	printf("\nCenter Node:%d   Name: %s \n",i,A->name);	
}



void ReplaceNode()
{
	struct Node * start=LC->start;
	printf("\n\n\t\t| Replace Node |\n");
   struct Node *A=start,* B, *NewNode;
   int i=1,n,limit;
    int choice;
    printf("\nPlease enter the Node number to be replaced:");
    scanf("%d",&n);
   
    while(i<n-1 && A->link!=NULL)
    {
    	A=A->link;
    	i++;
    }   
	NewNode=(struct Node *)malloc(sizeof(struct Node));
	if(n!=1)
	{	
	B=A->link;	
	A->link=NewNode;
	NewNode->link=B->link;
   }
   
   if(n==1)
   {
   	NewNode->link=A->link;
    	B=A;
   		start=NewNode;
   }
	 printf("\nName in Previous Node: %s \n",B->name);	 
	 printf("Press '1' to change name and '0' to assign previous name in new node.\n");	  
	 printf("choice:");
	 
	 scanf("%d",&choice);
	 
	 if(choice==0)
	 {	 
	 	*NewNode=*B;	 	
		  printf("\nName in new Node: %s \n",NewNode->name);	 
	 	printf("Name saved in new node");
	 }
	 else if(choice==1)
	 {
	 	printf("Enter New Name:");
	 	scanf("%s",&(NewNode->name));
	 	printf("Name changed");
	}	 	 
    B=NULL;
    free(B); 
	LC->start=start;   
    //ShowAll();
    printf("\n\n\t Nodes Replaced.");
    
		
}




void DeleteNode()
{    
   struct Node * start=LC->start;
    int i=1, n,ch;  
	struct Node * A=start,*B;  
	printf("\n\n\t\t| Delete Node |\n");
	printf("Please enter the Node Number to delete:");
	scanf("%d",&n);
	while(i<n-1)
	{
		A=A->link;
		i++;
	}
	if(n==1)
	{    if(A->link==NULL)
	  {
		printf("\nWARNING:Only One Node in list!\n");
		printf("Press '0' to delete and '1' to withdraw.\nchoice:");
		scanf("%d",&ch);
		   if(ch==1)
		   {
		   	printf("\nDeletion Cancelled\n");
		   }
		else if(ch==0)
		{
			
			start->link=NULL;
			start=NULL;
			printf("\n\t\t* List Deleted **\n");
			
		}
		
	  }
	if(A->link!=NULL)
	  {
		start=A->link;
		A->link=NULL;
		free(A);
		printf("\nNode Deleted\nStarting Changed");
	  }
	}
	
	if(n!=1 && A->link->link!=NULL)
	{	
	B=A->link;	
	A->link=B->link;
	printf("\nNode Deleted");
    }
    
    if(n!=1 && A->link->link==NULL)
	{	
	A->link=NULL;	
	printf("\nNode Deleted");
    }
    LC->start=start;
		ShowAll();
	
}

void ShowAll()
{
	struct Node * start=LC->start;
	if(start!=NULL){
	
	printf("\n\n\t\t| All Nodes |\n");
	struct Node * A=start;
	int i=1;
	while(A->link!=NULL)
	{
		printf("Node:%d  Name:%s\n",i,A->name);
		A=A->link;
		i++;
	}
	
	printf("Node:%d  Name:%s\n",i,A->name);
}

}

void LocateNode()
{
	struct Node * A=LC->start,* B=LC->start;
	int n,i=1;
	printf("\n\n\t\t| Locate Nodes |\n\n");
	printf("Enter the Node Number(-ve from end and +ve from begining):");
	scanf("%d",&n);
	
	if(n>=0)
	{
		while(i<n && A->link!=NULL)
		{
			A=A->link;
			i++;
		}
		
		if(i!=n)
		{
			printf("\nNode Number exceeds the Number of Nodes by %d\n",n-i);
		}
		else
		{
		printf("\n\nNode %d   Name:%s",n,A->name)	;
		}
		
	}
	
	else if(n<0)
	{
		int m;
		n=(-1)*n;
			
		for(m=1;m<n;m++)
		{B=B->link;	}
				
		while(B->link!=NULL)
		{
			A=A->link;
			B=B->link;
		}
					
		/*		
		EARLY APPROACH
		while(B->link!=NULL)
		{	A=A->link;
			a++;for( j=0;j<n && B->link!=NULL; j++)
			{  B=B->link; b++;}d=b-a;							
			if(d+1>n && B->link==NULL)  
			{  for( k=0; k<d-n+1;k++){A=A->link;
					a++;}}}	*/	
		
		printf("\nNode %d from End   Name:%s",n,A->name);
	}
	
	
}

void Check( )
{
	printf("\n\n\t\t| Check Choice |\n");
	struct Node * start=LC->start;
 int ch;
	printf("\nPress '1' to proceed further and '0' to exit.\nchoice:");
	scanf("%d",&ch);
	if(ch==1)
	{
		Choice(start);
	}
	else if(ch==0)	
	{  
	ChoiceExit(start);	
	}
	else if(ch!=1 && ch!=0)
	{
		printf("\n TRY AGAIN....Enter a valid choice.");
		Choice(start);
	}
}


void AddNode()
{
	int i=1,n;
	struct Node * start=LC->start;
	struct Node *A=start,*B,* NewNode;
	printf("\n\n\t\t| Add Node |\n\n");
	printf("Enter the Node Number:");
	scanf("%d",&n);
	NewNode=(struct Node *)malloc(sizeof(struct Node));
	
	while(i<n-1 && A->link!=NULL)
	{
		A=A->link;
		i++;
	}
		
	if(n==1)
	{
	  NewNode->link=A;
	  start=NewNode;
	}
	
	else if(n!=1)
	{
		NewNode->link=A->link;
		A->link=NewNode;
	}
	printf("\nEnter name in the added New Node:");
	scanf("%s",&(NewNode->name));
	LC->start=start;
	ShowAll();
	
	
}

void AddValue()
{
	struct Node * A=LC->start;;
	int n,i=1;
	printf("\n\n\t\t| Add Node Value |\n\n");
	printf("Enter the Node Number:");
	scanf("%d",&n);
	while(i<n && A->link!=NULL)
	{
		A=A->link;
		i++;
	}
	printf("\nEnter name:");
	scanf("%s",&(A->name));
	
}


void Choice()
 {
 	printf("\n\n\t\t| List Options |\n");
 	struct Node * start=LC->start;
 	int ch;
 	static int i=0;
    struct Node * n1=start;
  if(i==0)
  {
  i++;
    printf("\nEnter the Number according to following Choices:\n");
}
	printf("\n\t->'1' for Creating New List.\n  \n\t->'2' for Show List Content. \n  \n\t->'3' for Locating Center Node.  \n\n\t->'4' for Replacing Node. \n \n\t->'5' for Deleting Node. \n\n\t->'6' for Locating Node. \n\n\t->'7' for Showing List Elements. \n\n\t->'8' for Adding Node. \n\n\t->'9' for Changing or Adding Node Value. \n\n\t->'10' for Swapping Node Values. \n\n\t->'11' for Showing All Lists.\n\n\t->'12' for Connecting Lists.\n\n\t->'13' for Adding Multiple Nodes.\n\n\t->'14' return to Structure Selection.\n\n\t->'15' for Reversing a List.\n\n\t->'16' for Deleting a List.\n\n\t->'17' for Simulating List.\n\n\t->'18' for entering List Content.\n\n\t->'0' for Exit. \n");          
	    
		 printf("\nchoice:");
		 scanf("%d",&ch);
		 
		 switch(ch)
		 {
		 
		 case 1:
		 	CreateList();
	        //ListContent();   
			Check();	        
	        Choice();	       
	        break;
		 
		 
		 case 2:
		 
		 	ShowContent();
		 	 Check();
		 Choice();
		 	break;
		 
		 case 3:
		 
		 	LocateCenter();
		 	Check();
		 	Choice();
		     break;
		 case 4:
		 
		 	ReplaceNode();
		 	Check();
		 	Choice();
		     break;
		 case 5:
		 
		 	DeleteNode();
		 	 Check();
		 	Choice();
		    break;
		 case 6:
		 
		 	LocateNode();
		 	 Check();
		 	Choice();
		 	
		    break;
		 case 7:
		 
		 	ShowAll();
		 	 Check();
		 	Choice();
		    break;
		  case 8:
		 
		    AddNode();
		     Check();
		 	Choice();
		     break;
		 case 9:
		 
		    AddValue();
		     Check();
		 	Choice();
		    break;
		 case 10:
		 
		    SwapValue();
		     Check();
		 	Choice();
		    break;
		 case 11:
		 
		    ShowLists();
		     Check();
		 	Choice();
		    break;
		 case 12:
		   	ConnectLists();
		   	 Check();
		   	Choice();	
		   	break;
	     case 13:
		  MultipleNodes();		   	
		 	  	Check();
		   	Choice();
		 case 14:
		   RunMain();
		   break;
		 case 15:
		 ReverseList();
		 Check();
		  Choice();		  	
	      
		  case 16:	      	
		  DeleteList();
		  Check();
		   Choice();	
		  case 17:
		  	
		  SimulateList();
		  Check();
		  
		  case 18:		  	
		  ListContent();
		  	Check();
			   Choice();		   	   
		 
		 case 0:		 	
		    ChoiceExit();
		 	
		  break;
		  
		  default:
		  	printf("\n TRY AGAIN.....ENTER A VALID CHOICE.\n");
		  	Choice();
	}
	 }
	 
	 void ChoiceExit()
	 {
	 	printf("\n\n\t\t| Exit Option |\n");
	 	struct Node* n1=LC->start;
	 	int ch;
	 	printf("\nAre sure you want to EXIT? Press '0' to confirm exit.\nChoice:");
	 	scanf("%d",&ch);
	 	if(ch==0)
	 	{
	 			printf("\n\nThanks for using the Choice Line :)");
		       exit(0);
		       getch();
		 }
		 else{
		 	
		 	Choice(n1);
		 }
		 
	 }

void RunList()
{
    printf("\n\t\t\t      ** LINK LIST **\n\n");
	
//	struct Node *n1;
	if(list==1||CheckList>0|| LS==NULL)	
	{
		
		LinkListMainChoice();
	}
	else
	{
			Choice();
			
	}
	
}

void LinkListMainChoice()
{
	int ch;
		printf("\n\n\t\t| List Options |\n");
		printf("\n\tSelect from the following choices:\n\n\t->'1' for Creating New List.\n\n\t->'2' for returning to Structure Selection.\n\n\n\t->'0' for exiting the application.\n\nChoice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			CreateList();
			Choice();
			break;
		case 2:
		    RunMain();
			break;
		case 0:
		     ChoiceExit();
			 break;
		default: printf("\n\n\tTRY AGAIN....ENTER A VALID CHOICE.")	;
		       		LinkListMainChoice();
	}
}
        ///........................................
		//}

void show()
{
     struct Nodel *s=SC->start;
	int i=1;
	while(s->linkf!=NULL)
	{
		printf("%d\n",i);
		s=s->linkb;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// STACK      ****************************
//*********

void RunStack()
{
	printf("\n\t\t\t      ** STACK **\n\n");	
	
	CreateStack();
	StackChoice();
}


void CreateStack()
{
	struct Nodel *end,*tempf,*tempb,*u;	
	static struct Stack *prev; 
	struct Stack *s;
	int n,i,top=-1,lm;
	static int k=0;
	
	s=(struct Stack *)malloc(sizeof(struct Stack));
	s->link=NULL;
	
	printf("\n\n\t\t| Create Stack |\n\n");	
	
	printf("Enter the Stack Name:");
	scanf("%s",&(s->name));	
	
	printf("\nSet Stack Limit:");
	scanf("%d",&lm);	
	
	if(k==0)
	{
		Slist=s;		
	}
	
	if(k>0)
	{
		prev->link=s;
	}
	
	prev=s;
	k++;		
	
	for(i=1;i<=lm;i++)
	{			    
	    struct Nodel * s1;
		s1=(struct Nodel *)malloc(sizeof(struct Nodel));
		s1->linkf=NULL;
		s1->linkb=NULL;
		if(i==1)
		{	
		    s->start=s1;
		    tempb=s1;		
			tempf=s1;
			end=s1;
		}
		else
		{
			tempf->linkf=s1;
			s1->linkb=tempb;			
			tempf=s1;
			tempb=s1;			
		}		
	Concat((s1->name),"Empty","");
	u=s1;
	}
 //show();
 /*
 struct Nodel *sm=u;
	int i3=1;
	while(sm->linkb!=NULL)
	{
		printf("\n%s",sm->name);i3++;
		sm=sm->linkb;}
 ///*/
 
	s->end=end;
	s->top=top;
	s->limit=lm;
	
	SC=s;
	printf("\n%d Elements Created.\n",i-1);
	printf("\nCurrent Stack:%s",SC->name);

 //if(n>lm || n<=0)
//{
//	printf("\n\t No Stack Created. %d is not in Stack Range(0,%d]\n\t Try Again....Enter a valid Number.\n",n,lm );
//	free(s);
//	CreateStack();	
//}
	//from now stack will be govrened by current stack.
}

int CheckPush()
{
	if(SC->top==SC->limit-1)
	{
		printf("\n\t Stack Overflowing!!!! Can't Add more values'");
		return 1;
	}
	else
	
	return 0;
}

void Push()
{
	int n,i,t;
	struct Nodel * e=SC->start;
	struct Stack *s=Slist;
	
printf("\n\n\t\t| Push Values |\n");
printf("\nNumber of values to be entered:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
     if(CheckPush()==1)
	{
		break;
	}
	else if(CheckPush()==0)
	{
	printf("Value %d:   Name:",SC->top+2);	
	scanf("%s",&(e->name));
	SC->top++;
	if(i<n-1)
	e=e->linkf;
	}			
}
SC->end=e;

printf("\nValues Entered.");


}



int CheckPop()
{
	if(SC->top==-1)
	{
		printf("\n\t Stack underflowing!!!!\n\t Can't delete more values'");
		return 1;
	}
	else{
		return 0;
	}	
}


void Pop()
{
int n,i,m=0;
struct Stack *s=Slist;
struct Nodel *e;
printf("\n\n\t\t| Pop Values |\n");	
printf("\nNumber of values to Pop:");
scanf("%d",&n);
   e=SC->end;
    for(i=0;i<n;i++)
    {
    	 if (CheckPop==1)
    	{
    		break;
		}
      else if(CheckPop==0)
		{   
		printf("%s\n",SC->name);		
	      Concat(e->name,"Empty","");
    		e=e->linkb;
    		m++;
    		SC->top--;
		}
    	
    	
	}
	SC->end=e;
	printf("\n%d Values Popped\n",m);
	
while(s->name!=SC->name)
{
	s=s->link;
}
	s=SC;
}


void Display()
{
	struct Nodel *s=SC->start,*e=SC->end;
	int i=1;
     printf("\n\n\t\t| Stack Values |\n");	
	while(s!=e )
	{
		
		printf("\nValue:%d   Name:%s",i,s->name);
		if(s->linkf==NULL)
		{
			break;
		}
		s=s->linkf;
		i++;
	}

}

void ShowStack()
{
	printf("\n\n\t\t| Available Stacks |\n\n");
	struct Stack *s=Slist;
	int i=1;
	while(s->link!=NULL)
	{		
	printf("\nStack:%d\tStack Name:%s",i,s->name);
	s=s->link;
	i++;	
	}
	printf("\nStack:%d\tStack Name:%s",i,s->name);	
	printf("\n\nCurrent Stack:%s\n",SC->name);
	ChangeStack(i);
}


void Proceed()
{
	printf("\n\n\t\t| Proceed |\n");
	int ch,ch1;
	printf("\nPress '1' to proceed further and '0' to exit.\n\nChoice:");
	scanf("%d",&ch);
	if(ch==1)
	{
		StackChoice();
	}
	else if(ch==0)
	{
		printf("Are you sure, you want to exit? Press '1' to withdraw and '0' to exit.\n\nChoice: ");
		scanf("%d",&ch1);
		if(ch==0)
		{
			printf("\n\nThanks for using the Command Line :)");
		       exit(0);
		       getch();
		}
		else
		{
			StackChoice();
		}
	}
	else if(ch!=1 && ch!=0)
	{
		printf("\nInvalid input.... Try Again...");
		Proceed();
	}
}


void ChangeStack(int stacks)
{
	int ch,n,i=1;
	struct Stack *s=Slist;
	printf("\nPress '1' to change current Stack and '0' to remain on current Stack\n\nChoice:");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Enter the Stack Number(As above):");
		scanf("%d",&n);
		if(n<0 || n>stacks)
		{
			printf("Entered Stack Number does not exist....Try Again..\n");
			ChangeStack(stacks);
		}
		else
		{
		for(i;i<n;i++)	
		{
			s=s->link;
		}
		SC=s;
		printf("Current Stack:%d   Name:%s\n",n,s->name);
			
		}
	}
}

void ExitChoice()
{
	printf("\n\n\t\t| Exit Option |\n");
	 	int ch;
	 	printf("\nAre sure you want to EXIT? Press '0' to confirm exit.\nChoice:");
	 	scanf("%d",&ch);
	 	if(ch==0)
	 	{
	 			printf("\n\nThanks for using the Command Line :)");
		       exit(0);
		       getch();
		 }
		 else{
		 	
		 	StackChoice();
		 }
}


void DeleteStack()
{
	
}

void StackChoice()
{
	printf("\n\n\t\t| Stack Options |\n\n");
static int g=0,ch;

if(g==0)	
{
	printf("\nEnter the Number according to the following operations:");
	g++;
}

printf("\n\n\t->'1' for Creating New Stack. \n\n\t->'2' for Pushing New Values.\n\n\t->'3' for Poping the Values.\n\n\t->'4' for Showing All Stacks.\n\n\t->'5' for Deleting the Stack.\n\n\t->'6' for Displaying Stack Values.\n\n\t->'7' for returning to Structure Selection.\n\n\t->'0' for Exit.\n");
printf("\nChoice:");
scanf("%d",&ch);

switch(ch)	
{
	case 1:
		CreateStack();
		Proceed();
		StackChoice();
		break;
	case 2:
		Push();
		Proceed();
		StackChoice();
		break;
	case 3:
		Pop();
		Proceed();
		StackChoice();
		break;	
	case 4:
		ShowStack();
		Proceed();
		StackChoice();
		break;
   case 5:
		DeleteStack();
		Proceed();
		StackChoice();
		break;	
	case 6:
		Display();
		Proceed();
		StackChoice();
		break;
	case 7:
		RunMain();		
		break;
	case 0:
		ExitChoice();
		break;
	default:
		printf("\nTRY AGAIN....Enter a valid choice.\n\n");
		StackChoice();
		break;				
		
}
	
}



///////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////
//  QUEUE

void RunQueue()
{
	printf("\n\t\t\t      ** QUEUE **\n\n");	
	CreateQueue();
	QueueChoice();
}


void ExitQueue()
{
	printf("\n\n\t\t| Exit Option |\n");
	 	int ch;
	 	printf("\nAre sure you want to EXIT? Press '0' to confirm exit.\nChoice:");
	 	scanf("%d",&ch);
	 	if(ch==0)
	 	{
	 			printf("\n\nThanks for using the Command Line :)");
		       exit(0);
		       getch();
		 }
		 else{
		 	
		 	QueueChoice();
		 }
}

void QueueProceed()
{
	printf("\n\n\t\t| Proceed |\n");
	int ch,ch1;
	printf("\nPress '1' to proceed further and '0' to exit.\n\nChoice:");
	scanf("%d",&ch);
	if(ch==1)
	{
		QueueChoice();
	}
	else if(ch==0)
	{
		printf("Are you sure, you want to exit? Press '1' to withdraw and '0' to exit.\n\nChoice: ");
		scanf("%d",&ch1);
		if(ch==0)
		{
			printf("\n\nThanks for using the Command Line :)");
		       exit(0);
		       getch();
		}
		else
		{
			QueueProceed();
		}
	}
	else if(ch!=1 && ch!=0)
	{
		printf("\nInvalid input.... Try Again...");
		Proceed();
	}
}


void QueueChoice()
{
	static int u=0;
	int ch;
	printf("\n\n\n\t\t| Queue Choice |\n\n");
	if(u==0){
		printf("Enter the Choice Number according to the following:\n");
		u++;
	}
	printf("\n\t->'1' for Creating New Queue.\n\n\t->'2' for Adding Elements.\n\n\t->'3' for Showing all Elements.\n\n\t->'4' for Showing all Queues.\n\n\t->'5' for returning to Structure Selection.\n\n\t->'0' for Exiting the Application.");
	printf("\n\nChoice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			CreateQueue();
			QueueProceed();
			
			break;
		case 2:
			AddElement();
			QueueProceed();
			break;
		case 3:
		    ShowQueue();
			QueueProceed();
			break;	
		case 4:
		    AllQueues();
			QueueProceed();
			break;	
		case 5:
			RunMain();			
			break;
		case 0:			
			ExitQueue();
			break;
		default:
		     printf("TRY AGAIN...Enter a valid Choice");
		     QueueChoice();
		     break;				
	}
	
}


void CreateQueue()
{
	printf("\n\n\t\t| Create New Queue |\n");
int n,i=0;
struct Nodeq *start,*temp1;
static struct Queue *temp;
struct Queue *ln;
frt=0;

     CheckQueue=0; /////
     printf("\nEnter Queue Name:");      
	 ln=(struct List *)malloc(sizeof(struct List));
	 scanf("%s",&(ln->name)); 
	 ln->link=NULL; 
	 if(LSQ==1)
	 {
	 	LQ=ln;
	 }
	 
	 if(LSQ>1)
	 {
	 	temp->link=ln;
	 }
	    temp=ln;
	    LSQ++;
	    
	printf("\nEnter the Number of Elements in Queue:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\nThere Should be atleast 1 element in Queue!!!\n\n\t1 Element Generated Automatically.\n\t");
		printf("Elements: 1\n");
		n=1;
	}
	
	while(i<n)
	{
		
		struct Nodeq  *Nd;
		Nd=(struct Nodeq *)malloc(sizeof(struct Nodeq));
		Nd->link=NULL;
		 if(i==0)
		 {
		 	start=Nd;
		 	temp1=Nd;
		 	Concat(Nd->name,"EMPTY","");
		 }
		 else
		 {
		 	Concat(Nd->name,"EMPTY","");
		 	temp1->link=Nd;
		 	temp1=Nd;
		 }
	i++;	
	}
	
	ln->front=start;
	ln->rear=start;
	ln->end=temp;;
	ln->f=-1;
	ln->r=-1;
	ln->limit=n;
	
	QC=ln;
	printf("\nCurrent Queue :%s",QC->name);
	printf("\n%d Elements Created",n);
		
}

int CheckAdd()
{
	if(QC->r==(QC->limit-1))
	{
		printf("\n\nQueue is Overloading... Cant add More elements.\n\n");
		return 1;
	}
	else{
		
		return 0;
	}
}

void AddElement()
{
	printf("\n\n\t\t| Add Elements |\n\n");
	struct Nodeq *st=QC->rear;
	int n,i,k=0;
	
	printf("Enter the Number of elements:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(CheckAdd()==1)
		{
			break;
		}
		
	   if(CheckAdd()==0)
		{
			if(frt==0)
			{
				(QC->f)++;
				frt++;
			}
			printf("\nEnter Element %d:",i);
			scanf("%s",&(st->name));
			QC->r++;
			st=st->link;
			k++;			
		}
		//printf("\n%d Check\n",CheckAdd());
	}
	
	printf("\n%d Elements Added.",k);	
	QC->rear=st;
}

void ShowQueue()
{
	printf("\n\n\n\t\t| Queue Elements |\n\n");
	printf("Current Queue:%s\n\n",QC->name);
	struct Nodeq * st=QC->front;
	int i=0;
	while(st!=QC->rear)
	{
		i++;
		printf("Element %d:%s\n\n",i,st->name);
		st=st->link;
		
	}
	if(i==0)
	{
		printf("\n\nQueue is Empty.");
	}
}

void AllQueues()
{

struct Queue * A=LQ,*B=LQ,*C;
int lcount=0,ch,ln,i=1;

printf("\n\n\t\t| Available Lists |\n\n");
	
	while(A->link!=NULL)
	{
		printf("Queue Number:%d   Queue Name:%s\n",lcount+1,A->name);
		A=A->link;
		lcount++;
	}
	printf("Queue Number:%d   Queue Name:%s",lcount+1,A->name);
	lcount++;
	printf("\n\n\tCurrent Queue:%s\n",QC->name);
	printf("\tQueues:%d\n",lcount);
	
	printf("\nPress '1' to change the Current Queue and '0' to remain on previous Queue.\nchoice:");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Enter the required Queue Number(Shown Above):");
		scanf("%d",&ln);
		if(ln>lcount)
		{
			printf("\nEntered Queue Number does not exist.%s is the Current Queue.\n\t\t Process Terminated.\n",QC->name);
			
		}
		else{		
			while(i<ln)
			{
				B=B->link;				
				i++;			
			}
			QC=B;			
		
			printf("\nCurrent Queue changed.\n\nNew Current Queue Number:%d   Queue Name:%s",ln,QC->name);			
		}
	}	
	
}












int main()
{
	RunMain();	
	getch();
		
	return 0;	
}


/// Main Functions are BELOW THE INT MAIN()///////////////////********************************************

void RunMain()
{
	int ch;
	static int m=0;
	if(m==0)
	{
	m++;	
	printf("\n\t\t\t    **** Data Structures ****\n\n");	
	printf("\t\t    |Welcome to Data Structures Choice Line|\n");
	printf("\n\t\t              DOTS Inc. ($$D) NIT-J\n\t\t\t   Computer Science and Engg.\n\n ");
   }
	printf("\n\n\t\t| Structure Selection |");	
	printf("\n\n\tSelect the Structure Type:\n");
	printf("\n\t\->'1' for Link List. \n\n\t->'2' for Stack.\n\n\t->'3' for Queue.\n\n\n\t->'0' for Exiting the Application.\n\n ");
	printf("Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
	     	list++;
			RunList();
			break;
		case 2:
		     stack++;
		     RunStack();		    
			 break;
		case 3:
		     stack++;
		     RunQueue();		    
			 break;
	    case 0 :
		    ChoiceExitMain();		 
	    default:
		   printf("\n\tTRY AGAIN....enter a valid value.\n");
		   	RunMain();
		   	 	break;
		
		
	}
		
}

void ChoiceExitMain()
	 {
	 	printf("\n\n\t\t| Exit Option |\n");
	 	int ch;
	 	printf("\nAre sure you want to EXIT? Press '0' to confirm exit.\nChoice:");
	 	scanf("%d",&ch);
	 	if(ch==0)
	 	{
	 		printf("\n\nThanks for using the Command Line :)");
		       exit(0);
		       getch();
		 }
		 else{
		 	
		 	RunMain();
		 }
		 
	 }

