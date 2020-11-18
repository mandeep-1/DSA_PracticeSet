#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
int s1=0,s2=0,d;
for(int i=0;i<arr.size();i++)
{
for(int j=0;j<arr.size();j++)
{
    if(i==j)
     s1+=arr[i][j];
    else if((i+j)==(arr.size()-1))
     s2+=arr[i][j];
}
}
cout<<s1<<"  "<<s2;
 d=s1-s2;
 return abs(d);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

