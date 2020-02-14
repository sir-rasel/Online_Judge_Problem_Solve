#include <cstdio>
#include <deque>
using namespace std;

deque<int> right,left;

void balanced(){
    if (left.size() > right.size()){
        right.push_front(left.back());
        left.pop_back();
    }
    else {
        int res = right.size()-1;
        if (res!=-1 && left.size() < res){
            left.push_back(right.front());
            right.pop_front();
        }
    }
}

void addOperation(int light){
    right.push_back(light);
}

void removeOperation(){
    right.pop_back();
}

void mumOperation(){
    swap(right,left);
}

void printResult(){
    printf("%d\n",right.size()+left.size());
    for(auto val: left) printf("%d ",val);
    for(auto val: right) printf("%d ",val);
    printf("\n");
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    scanf("%d",&n);
    getchar();

    char cmd[10];
    int light;

    for(int i=0;i<n;i++){
        scanf("%s",cmd);
        if(cmd[0]=='a'){
            scanf("%d",&light);
            addOperation(light);
        }
        else if(cmd[0]=='t') removeOperation();
        else mumOperation();

        balanced();
        getchar();
    }
    printResult();
    return 0;
}
