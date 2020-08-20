#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Partition(int arr[],int st,int en ,int &low,int &high) {


   int pivot = arr[en];
   low = st;
   high = en;
   int i  = st;

   while(i<=high) {

        if(arr[i]<pivot) {

            swap(arr[i],arr[low]);
            ++low;
            ++i;

        } else if(arr[i]>pivot) {

                swap(arr[i],arr[high]);
                --high;
        } else {

            ++i;
        }
   }


}


void quick_sort(int arr[],int st ,int en) {

int low,high;
  if(st>=en) return;
  int p = Partition(arr,st,en,low,high);
  quick_sort(arr,st,low-1);
  quick_sort(arr,high+1,en);

}




int main()
{

  int arr[] = {5,8,4,57,43,6,9};
  for(int i= 0;i<7;i++) {

      cout << arr[i]<<" ";

  }

 cout<<endl;
 quick_sort(arr,0,7);

  for(int i= 0;i<7;i++) {

      cout << arr[i]<<" ";

  }


    return 0;
}
