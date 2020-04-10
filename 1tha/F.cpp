#include <bits/stdc++.h>
using namespace std;

class clothes {
   public:
    int lowTem, highTem, beauty, clothesNo;
    int istemTarget(int curTem, int standard) {
        if (curTem >= lowTem && curTem <= highTem) {
            return 1;
        } else
            return 0;
    }
    int isbeautyTarget(int curTem, int standard) {
        if (beauty >= standard) {
            return 1;
        } else
            return 0;
    }
};
int main() {
    int clothesNum;
    int curTem;
    int standard;
    int istem = 0;
    int isbeauty = 0;
    clothes target;
    target.beauty = -1000000;
    cin >> curTem >> standard >> clothesNum;
    clothes closet[clothesNum + 5];
    for (int i = 0; i < clothesNum; i++) {
        closet[i].clothesNo = i + 1;
        cin >> closet[i].lowTem >> closet[i].highTem >> closet[i].beauty;
    }
    for (int i = 0; i < clothesNum; i++) {
        if (closet[i].istemTarget(curTem, standard)) {
            istem = 1;
            if (closet[i].isbeautyTarget(curTem, standard)) {
                isbeauty = 1;
                if (closet[i].beauty > target.beauty) {
                    target = closet[i];
                }
            }
        }
    }
    if (istem == 0) {
        cout << "All the dress are inappropriate. Buy new one!";
    } else if (isbeauty == 0) {
        cout << "All the dress are ugly. Buy new one!";
    }
    else cout << "Choose " << target.clothesNo << " dress.";
}