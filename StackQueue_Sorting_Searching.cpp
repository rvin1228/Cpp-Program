#include <iostream>
#include <cctype>
#include <stack>
#include <queue>
using namespace std;

int stack_function();
int queue_function();
int bubble();
int selection();
int sequential();
int binary();
int menu();

int main()
{
	char choice;
    int repeat,ans;
   	do
  	{
    system("cls");
  	menu();
  	cout<<"Enter your choice: ";
  	cin>>choice;
  	ans=choice;
	if(ans=='1')
	{ 
	stack_function();
    repeat=1;
    }
	else if(ans=='2')
  	{
    queue_function();
    repeat=1;
    }
    else if(ans=='3')
  	{
    bubble();
    repeat=1;
	}
    else if(ans=='4')
  	{
    selection();
    repeat=1;
	}
	else if(ans=='5')
  	{
    sequential();
    repeat=1;
	}
	else if(ans=='6')
  	{
    binary();
    repeat=1;
	}
	else if(ans=='7')
	{
    system("cls");	
    cout<<"Bye!"<<endl;
    system("pause");
    return 0;
	}
	else
	{
    repeat=1;
	}	
	}
	while(repeat==1);
}

int stack_function()
{
	stack <int> A;
	int x, n, ctr;
    int ctr1,ctr2,num,repeat;
    char choice,ans,code = 'a';
    float y,z,small,sum,diff,quot,prod;
do
{ system("cls");
  cout<<"MAIN MENU (STACK)"<<endl;
  cout<<"[A] Push Data"<<endl;
  cout<<"[B] Pop Data"<<endl;
  cout<<"[C] Show Top"<<endl;
  cout<<"[D] Show Size"<<endl;
  cout<<"[E] Exit"<<endl;
  cout<<"Enter Choice:> ";
  cin>>choice;
  choice = toupper(choice);

  if (choice=='A')
  {
    do
    { system ("cls");
      cout<<"[A] Push Data\n"<<endl;
      cout<<"Enter the size of the stack: ";
	cin>>x;
	for (ctr=1; ctr<=x; ctr++)
	{
		cout<<"Enter any element: ";
		cin>>n;
		A.push(n);
	}
	system("pause");
	cout<<endl;
      system("cls");
      } while(code!='a');
      repeat=1;
    }
    
  else if (choice=='B')
  {
    do
    { system ("cls");
      cout<<"[B] Pop Data\n"<<endl;
      A.pop();
  cout << "The element has been POPPED!"<<endl<<endl;
      system("pause");
      system("cls");
      } while(code!='a');
      repeat=1;
    }
   
    else if (choice=='C')
  {
    do
    { system ("cls");
      cout<<"[C] Show Top\n"<<endl;
    
	cout << "The top element is " << A.top() <<endl;
	cout<<endl;
      system("pause");
      system("cls");
      } while(code!='a');
      repeat=1;
    } 
     else if (choice=='D')
     {
     do
    { system ("cls");
      cout<<"[D] Show Size\n"<<endl;
    
	cout << "The size of stack: " << A.size() <<endl;
	cout<<endl;
      system("pause");
      system("cls");
      } while(code!='a');
      repeat=1;
      }
     else if (choice=='E')
   {
      menu();
        return 0;
      }
      else
      {
        repeat=1;
    }
} while (repeat==1);
return 0;
}

int queue_function()
{
	queue <int> A;
	int x, n, ctr;
    int ctr1,ctr2,num,repeat;
    char choice,ans,code = 'a';
    float y,z,small,sum,diff,quot,prod;
do
{ system("cls");
  cout<<"MAIN MENU (QUEUE)"<<endl;
  cout<<"[A] Push Data"<<endl;
  cout<<"[B] Pop Data"<<endl;
  cout<<"[C] Show Front"<<endl;
  cout<<"[D] Show Size"<<endl;
  cout<<"[E] Exit"<<endl;
  cout<<"Enter Choice:> ";
  cin>>choice;
  choice = toupper(choice);

  if (choice=='A')
  {
    do
    { system ("cls");
      cout<<"[A] Push Data\n"<<endl;
      cout<<"Enter the size of the queue: ";
	cin>>x;
	for (ctr=1; ctr<=x; ctr++)
	{
		cout<<"Enter any element: ";
		cin>>n;
		A.push(n);
	}
	system("pause");
	cout<<endl;
      system("cls");
      } while(code!='a');
      repeat=1;
    }
    
  else if (choice=='B')
  {
    do
    { system ("cls");
      cout<<"[B] Pop Data\n"<<endl;
      A.pop();
  cout << "The element has been POPPED!"<<endl<<endl;
      system("pause");
      system("cls");
      } while(code!='a');
      repeat=1;
    }
   
    else if (choice=='C')
  {
    do
    { system ("cls");
      cout<<"[C] Show Front\n"<<endl;
    
	cout << "The top element is " << A.front() <<endl;
	cout<<endl;
      system("pause");
      system("cls");
      } while(code!='a');
      repeat=1;
    } 
     else if (choice=='D')
     {
     do
    { system ("cls");
      cout<<"[D] Show Size\n"<<endl;
    
	cout << "The size of queue: " << A.size() <<endl;
	cout<<endl;
      system("pause");
      system("cls");
      } while(code!='a');
      repeat=1;
      }
     else if (choice=='E')
   {
      menu();
        return 0;
      }
      else
      {
        repeat=1;
    }
} while (repeat==1);
return 0;
}

int bubble()
{
	system("cls");
	int A[50],a, size,x,y,temp, swap=0,comp=0,repeat;
    cout<<"BUBBLE SORTING"<<endl<<endl;
    cout<<"Enter the size: ";
    cin>>size;
   
    for(a=0; a<size; a++)
	{
		cout<<"Enter the element "<<a+1<<": ";
		cin>>A[a];
	}
	
    for(x=1;x<size;x++)
    {
     for(y=0;y<(size-x);y++)
     {
     if(A[y]>A[y+1])
     {
       temp=A[y];
       A[y]=A[y+1];
       A[y+1]=temp;
       swap++;
      }
 	comp++;
    }
   
}
    cout<<"ASCENDING ORDER: "<<endl;
    for(x=0;x<size;x++)
    cout<<" "<<A[x]<<endl;
    cout<<"Number of times compared: ";
    cout<<comp<<endl;
    cout<<"Number of times swapped: ";
    cout<<swap<<endl;
    system("pause");
}

int selection()
{
	system("cls");
	int a, size, A[50], num, ctr, temp, index, small, swap=0, comp=0,count=0;
    cout<<"SELECTION SORTING"<<endl<<endl;
    cout<<"Enter the size: ";
    cin>>size;
    for(a=0; a<size; a++)
	{
		cout<<"Enter the element "<<a+1<<": ";
		cin>>A[a];
	}
    for(num=0; num<(size-1); num++)
    {
        small = A[num];
        for(ctr=(num+1); ctr<size; ctr++)
        {
            if(small>A[ctr])
            {
                small = A[ctr];
                count++;
                index = ctr;
            }
            comp++;
        }
        if(count!=0)
        {
            temp = A[num];
            A[num] = small;
            A[index] = temp;
            swap++;
        }
        count=0;
    }
    cout<<"ASCENDING ORDER:"<<endl;
    for(num=0; num<size; num++)
        cout<<A[num] << endl;
       cout<<"Number of times compared: ";
	    cout<<comp<<endl;
	    cout<<"Number of times swapped: ";
	    cout<<swap<<endl;
    system("pause");
}

int sequential()
{
	system("cls");
	int A[50], a, search, index, size, compared=0;
	cout<<"SEQUENTIAL SEARCHING"<<endl<<endl;
	cout<<"Enter the size: ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cout<<"Enter the element "<<a+1<<": ";
		cin>>A[a];
	}
	
	cout<<"Enter the element you want to search :";
	cin>>search;
	cout<<endl;
	
	for(int w=0;w<size;w++)
	{
		compared++;
		if(A[w] == search)
		{
			index=w;
			break;
		}else
		{
			index = -1;
		}
	}
	if(index != -1)
	{
		cout<<"The element was found at index: "<<index+1;
		cout<<endl;
	}
	else{
		cout<<"The element was not found! ";
	}
		cout<<"\nNumber of times compared: ";
		cout<<compared<<endl;
	system("pause");
}

int binary()
{
	system("cls");
	int size, a, array[50], number, first, last, mid,comp=0;
	cout<<"BINARY SEARCHING"<<endl<<endl;
	cout<<"Enter the size: ";
	cin>>size;
	
	for(a=0; a<size; a++)
	{
		cout<<"Enter the element "<<a+1<<": ";
		cin>>array[a];
	}
	
	cout<<"Enter the number that you want to search: "<<endl;
	cin>>number;
	first=0;
	last=size-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		comp++;
		if(array[mid]<number)
		{
			first=mid+1;
		}
		else if(array[mid]==number)
		{
			cout<<"The element was found at index: "<<mid+1<<"\n";
			break;
		}
		else{
			last=mid-1;
		}
			mid=(first+last)/2;
		}
		if(first>last)
		{
			cout<<"The element was not found!"<<endl;
		}
		cout<<"Number of times compared: "<<comp<<endl;
	system("pause");
}

int menu()
{
	cout<<"C++ Program"<<endl<<endl;
	cout<<"[1] STACK"<<endl;
  	cout<<"[2] QUEUE"<<endl;
  	cout<<"[3] BUBBLE SORTING"<<endl;
  	cout<<"[4] SELECTION SORTING"<<endl;
  	cout<<"[5] SEQUENTIAL SEARCHING"<<endl;
  	cout<<"[6] BINARY SEARCHING"<<endl;
  	cout<<"[7] QUIT"<<endl<<endl;
}
