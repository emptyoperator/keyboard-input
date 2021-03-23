#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define ESCAPE 0x1B
#define SLASH 0x5C
#define ENTER 0xD
#define RIGHT 0x4D
#define DOWN 0x50
#define LEFT 0x4B
#define UP 0x48

void readKey(void);

int main() {
    system("chcp 65001");
    printf("%#x\n", _getch());
    readKey();
    getchar(); getchar();
    return 0;
}

void readKey(void) {
    while (1) {
        int key = _getch();
        switch (key) {
            case ESCAPE:
                exit(0);
            case ENTER:
                printf("ENTER is pressed\n");
                break;
            case SLASH:
                printf("SLASH is pressed\n");
                break;
            case 0xE0:
                switch (_getch()) {
                    case LEFT:
                        printf("LEFT is pressed\n");
                        break;
                    case RIGHT:
                        printf("RIGHT is pressed\n");
                        break;
                    case UP:
                        printf("UP is pressed\n");
                        break;
                    case DOWN:
                        printf("DOWN is pressed\n");
                        break;
                    default:
                        break;
                }
            default:
                break;
        }
    }
}