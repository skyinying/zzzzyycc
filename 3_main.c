//202610112119
//郑宇辰
#include <stdio.h>

struct Window {
    int buffer[3];
    int count;
};

struct Window push_data(struct Window win, int val) {
    win.buffer[win.count % 3] = val;
    win.count++;
    return win;
}

int get_average(struct Window win) {
    int sum = 0;
    if (win.count < 3) {
        for (int i = 0; i < win.count; i++) {
            sum += win.buffer[i];
        }
        return sum / win.count;
    } else {
        for (int i = 0; i < 3; i++) {
            sum += win.buffer[i];
        }
        return sum / 3;
    }
}

int main() {
    int m;
    if (scanf("%d", &m) != 1) return 0;

    struct Window win;
    win.count = 0;

    for (int i = 0; i < m; i++) {
        int val;
        scanf("%d", &val);
        win = push_data(win, val);
        printf("%d\n", get_average(win));
    }

    return 0;
}
