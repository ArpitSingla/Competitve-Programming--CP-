#include<bits/stdc++.h>
using namespace std;

void inplaceHeapSort(int input[], int n){
	int index=1;
    while(index<n){
        int childIndex=index;
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if(input[parentIndex]>input[childIndex]){
                swap(input[parentIndex],input[childIndex]);
            }
            else{
                break;
            }
            childIndex=parentIndex;
        }
        index++;
    }
    int size=n-1;
    while(size>0){
        swap(input[0],input[size]);
        int pi=0;
        int lci=2*pi+1;
        int rci=2*pi+2;
        while(lci<size){
            int minIndex=pi;
            if(input[minIndex]>input[lci]){
                minIndex=lci;
            }
            if(rci<size && input[minIndex]>input[rci]){
                minIndex=rci;
            }
            if(minIndex==pi){
                break;
            }
            swap(input[minIndex],input[pi]);
            pi=minIndex;
            lci=2*pi+1;
            rci=2*pi+2;
        }
        size--;
    }
}
