//随机数掷骰子游戏 
void diceGame(int randSeed)
{
    srand(randSeed);
    int x, y, z, i;
    x = rand();
    x = x % 6 + 1;
    y = rand();
    y = y % 6 + 1;
    z = x + y;
    if (z == 7 || z == 11)
    {
        printf("Round 1:  Score:%d  Success!", z);
    }else if (z == 2 || z == 3 || z == 12) printf("Round 1:  Score:%d  Failed!", z);
    else {
        printf("Round 1:  Score:%d  Continue!\n", z);
        printf("Next rounds: Score %d:Success, Score 7:Failed, others:Continue\n", z);
        for (int i = 2;; i++)
        {
            int a, b, c;
            a = rand();
            a = a % 6 + 1;
            b = rand();
            b = b % 6 + 1;
            c = a + b;
            if (c == 7) {
                printf("Round %d:  Score:7  Failed!", i);
                break;
            }
            else if (c == z) {
                printf("Round %d:  Score:%d  Success!", i, c);
                break;
            }
            else {
                printf("Round %d:  Score:%d  Continue!\n", i, c);
            }
        }
    }
}

