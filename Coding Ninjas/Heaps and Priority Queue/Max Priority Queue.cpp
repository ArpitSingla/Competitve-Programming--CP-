
#include<bits/stdc++.h>
using namespace std;

/***************
 * Following is the main function that er are using internally
 *
 
int main() {
    PriorityQueue pq;
    int choice;
    cin >> choice;
    while(choice != -1) {
        switch(choice) {
            case 1 : // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2 : // getMax
                cout << pq.getMax() << endl;
                break;
            case 3 : // removeMax
                cout << pq.removeMax() << endl;
                break;
            case 4 : // size
                cout << pq.getSize() << endl;
                break;
            case 5 : // isEmpty
                if(pq.isEmpty()) {
                    cout << "true" << endl;
                }
                else {
                    cout << "false" << endl;
                }
            default :
                return 0;
        }
        cin >> choice;
    }
}
*******************/

class PriorityQueue {
    vector<int> pq;
    public:
    int getSize(){
        return pq.size();
    }
    bool isEmpty(){
        return pq.size()==0;
    }
    void insert(int element){
        pq.push_back(element);
        int childIndex=pq.size()-1;
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if(pq[parentIndex]<pq[childIndex]){
                swap(pq[parentIndex],pq[childIndex]);
            }
            else{
                break;
            }
            childIndex=parentIndex;
        }
    }
    int getMax(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }
    int removeMax(){
        if(isEmpty()){
            return 0;
        }
        int ans=pq[0];
        swap(pq[0],pq[pq.size()-1]);
        pq.pop_back();
        int pi=0;
        int lci=2*pi+1;
        int rci=2*pi+2;
        while(lci<pq.size()){
            int minIndex=pi;
            if(pq[minIndex]<pq[lci]){
                minIndex=lci;
            }
            if(rci<pq.size() && pq[minIndex]<pq[rci]){
                minIndex=rci;
            }
            if(minIndex==pi){
                break;
            }
            swap(pq[minIndex],pq[pi]);
            pi=minIndex;
            lci=2*pi+1;
            rci=2*pi+2;
        }
        return ans;
    }
};
