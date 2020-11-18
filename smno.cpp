#include<iostream>
#include<vector>
using namespace std;

int findmiss(std::vector<int> a,int start,int end)
{
	if(start>end)
		return end+1;
	if(start!=a[start])
		return start;
	int mid=(start+end)/2;

	if(a[mid]==mid)
		return findmiss(a,mid+1,end);
	return findmiss(a,start,mid);
}
int smallest_missing_number_offline(std::vector<int> numbers) {
  // You should return smallest missing non-negative integer in the structure.

  // The following is just an example (of compiling, but incorrect) solution.
  // Please, replace it with correct and efficient implementation.
  // It is allowed to modify the numbers argument here.

//To sort
  int i,j,p,m=-1;
  for( i=1;i<numbers.size();i++)
  {
  	p=numbers[i];
  	j=i-1;
  	while(j>=0&&numbers[j]>p)
	  {
	  	numbers[j+1]=numbers[j];
	    j--;
	  }
   numbers[j+1]=p;
  }

 /* for(int a=0;a<numbers.size();a++)
 {
	if((numbers[a+1]-numbers[a])>1)
 	{
 		m=numbers[a]+1;
		 break;
	 }
  }
  if(m=-1&&numbers[0]>0)
  	m=numbers[0]-1;
  /*if(m=-1&&numbers[0]==0)
    m=numbers.end()+1;
    */
    int start=0,end=numbers.size();
    findmiss(numbers,start,end);

 return m;
}

int main()
{
	int n;
	vector <int> arr;
	cout<<"How many values you want to insert ";
	cin>>n;
	cout<<"Enter the values";
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	int x=smallest_missing_number_offline(arr);
	cout<<"\n The smallest missing number is "<<x;
	return 0;
}


