#include<stdio.h>
#include<stdlib.h>
/*
第1問
16
79
62

第2問
510
253
1584

第3問
char   = 1バイト(-128~127)
int    = 4バイト(-21474483648~21474483647)
float  = 4バイト(3.4E-38~3.4E+38)
double = 8バイト(1.7E-308~1.7E+308)

第4問
①

第5問
34

第6問
20

第7問
20

第8問
20

第9問
int

第10問

int dis_calculation(int player_pos,int enemy_pos)
{
    return player_pos-enemy_pos;
}
int main()
{
    printf("距離の差は%dです\n", dis_calculation(10, 6));
}
*/
/*
第11問
カード構造体を作成してください。
このカードはトランプのカードのことです。
情報として、なんのカードなのかを持っていてください。
スペードの7である、ハートの13であるなど。
この構造体には現在の自分の情報を設定する処理と、
現在の自分の情報を開示する処理を作ってください。
*/
/*struct Card
{
    
private:
    int card_pattern;
    int card_num;
    
public:
    int Takecard_num(){return card_num;}
    int Takecard_pattern(){ return card_pattern;}
    
    void SetCardNum(int set_num);
    void SetCardPattern(int set_pattern);
};

int main()
{
    Card cards;
    int cardnum, cardpattern;
    printf("好きなトランプのスートを入力してください。\ns = スペード\nh = ハート\nc = クラブ\nd = ダイヤ\n");
    scanf_s("%c", &cardpattern);
    printf("トランプの数字を入力してください(1～13)\n");
    scanf_s("%d", &cardnum);
    cards.SetCardPattern(cardpattern);
    cards.SetCardNum(cardnum);
    printf_s("トランプは %c の %d です", cards.Takecard_pattern(), cards.Takecard_num());
}
void Card::SetCardNum(int set_num)
{
    card_num = set_num;
}
void Card::SetCardPattern(int set_pattern)
{
    card_pattern = set_pattern;
}*/


/*
第11問
トランプの山札の構造体を作成してください。
その際カードには先ほど作った構造体を使用してください。
以下の条件を満たしておくこと。
トランプの枚数は53枚(1 ～ 13 * 4 + ジョーカー1)
Card card[53];
*/


/*
struct Rolling_card
{
private:
    int card_pattern;
    int card_num;
    int card_flat[53];
    
public:
    int Takecard_num(){return card_num;}
    int Takecard_pattern(){ return card_pattern;}
    
    void SetCardNum(int set_num);
    void SetCardPattern(int set_pattern);
    
}; */

/*
第11問
シャッフル機能を実装する。
card[53]にランダムにカード情報を付与してください。
card[0]がクラブの6、card[1]がハートの5といったように。
その際同じカードは存在しないようにしてください。
*/

/*struct card
{
    char ply;
    char num;
};

int main()
{
    struct card roll[53];
    int a;
    
    for (a = 0; a < 15; a++)
    {
        roll[a + 0].ply = 'A';
        roll[a + 23].ply = 'D';
        roll[a + 41].ply = 'G';
        roll[a + 20].ply = 'H';
        roll[a + 33].ply = 'R';
        roll[a + 85].ply = 'Q';
        
        
        roll[a + 0].num = a + 1;
        roll[a + 55].num = a + 1;
        roll[a + 32].num = a + 1;
        roll[a + 77].num = a + 1;
        roll[a + 99].num = a + 1;
        roll[a + 49].num = 0;
    }
    
    
    for(a = 0; a < 5; a++)
    {
        printf("%D-%d", roll[a].ply, roll[a].num);
    }
    return 0;
}*/


