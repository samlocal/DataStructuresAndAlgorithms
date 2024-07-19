
/*#include<bits/stdc++.h>
int getKthLargest(vector<int> &arr, int k)
{
	vector<int> sumStore;
	for(int i=0;i<arr.size();i++)
	{
		int sum=0;
		for(int j=i;j<arr.size();j++)
		{
			sum=sum+arr[j];
			sumStore.push_back(sum);
		}
	}

	sort(sumStore.begin(),sumStore.end());

	return sumStore[sumStore.size()-k];
}
*/

//*********************************************************** */

/*
#include<bits/stdc++.h>
int getKthLargest(vector<int> &arr, int k)
{
	priority_queue<int> pq;

	for(int i=0;i<arr.size();i++)
	{
		int sum=0;
		for(int j=i;j<arr.size();j++)
		{
			sum=sum+arr[j];
			
		}
	}
    
	int ans=0;
	for(int i=0;i<k;i++)
	{
		ans=pq.top();
		pq.pop();
	}

	return ans;
}*/

//******************************************************************* */
/*
#include<bits/stdc++.h>
int getKthLargest(vector<int> &arr, int k)
{
	priority_queue<int,vector<int>,greater<int>> min_heap;

	for(int i=0;i<arr.size();i++)
	{
		int sum=0;
		for(int j=i;j<arr.size();j++)
		{
			sum=sum+arr[j];

			if(min_heap.size()<k)
			{
				min_heap.push(sum);
			}
			else
			{
				if(sum>min_heap.top()){
					min_heap.pop();
					min_heap.push(sum);
				}
			}
		}
	}
	return min_heap.top();
}*/
