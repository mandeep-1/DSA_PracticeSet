#include <bits/stdc++.h>
using namespace std;

/*int movesToMakeZigzag(int nums[], int n) {
        int odd = 0;
        int even = 0;
        int left = 0;
        int right = 0;
        c=0;
        for(int i = 0; i < n; i++){
                if(i - 1 < 0){
                    left = 0;
                }else{
                    left = nums[i - 1];
                }
                if(i + 1 >= n){
                    right = 0;
                }else{
                    right = nums[i + 1];
                }
                int m = min(right,left);

            if(i % 2 == 0){
                if(nums[i] >= m){
                    even += nums[i] - m + 1;
                }
            }else{
                  if(nums[i] >= m){
                    odd += nums[i] - m + 1;
                }
            }
        
        }
        cout<<odd<<" "<<even;
        return min(odd,even);
    } */

/*int main()
{
  //write your code here
  int n;
  cin>>n;
  int a[n;
  for(int i = 0; i<n; i++)
      cin>>a[i];
  n=movesToMakeZigzag(a,n);
  
  cout<<n<<endl;
  return 0;
}*/
int movesToMakeZigzag(vector<int>& A) {
        int res[2] = {0, 0},  n = A.size(), left, right;
        for (int i = 0; i < n; ++i) {
            left = i > 0 ? A[i - 1] : 1001;
            right = i + 1 < n ? A[i + 1] : 1001;
            res[i % 2] += max(0, A[i] - min(left, right) + 1);
        }
        cout<<res[0]<<" "<<res[1]<<endl;
        return min(res[0], res[1]);
    }

int main()
{
  //write your code here
  int n,x;
  cin>>n;
  vector <int> vec;
  for(int i = 0; i<n; i++){
  	 cin>>x;
  	 vec.push_back(x);
  }
     
  n=movesToMakeZigzag(vec);
  
  cout<<n<<endl;
  return 0;
}
