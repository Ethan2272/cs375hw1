#include <stdlib.h>
#include <iostream>
#include <utility>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
  unordered_map<int,pair<int,int>> sums;
  vector<int> arr;
  int key;

  while(!cin.eof())
    {
      cin >> key;
      if(!cin.eof())
        arr.push_back(key);
    }
  int len = arr.size();

  for(int i = 0; i<len-1; i++)
    {
    sums[arr[i]+arr[i+1]] = make_pair(i,i+1);
    }
  for(int j = 0; j<len; j++)
    {
      //cout << arr[j] << endl;
      if(sums.find(arr[j]) != sums.end())
	{
	  int f = arr[sums[arr[j]].first];
	  int s = arr[sums[arr[j]].second];
	  if(f > s)
	    {
	      cout << "key " << arr[j] << " = " << s << " + " << f << endl;
	    }
	  else
	    {
	      cout << "key " << arr[j] << " = " << f << " + " << s << endl;
	    }
	}
    }
    
}
