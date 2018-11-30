
# Table of Contents

1.  [解説](#org1045964)
2.  [第3章 プログラムの流れの分岐](#org2024f10)
    1.  [3-1 if文](#orgd86ecac)
        1.  [if文・その1](#org58983a7)
        2.  [奇数の判定](#orgfa35659)
3.  [第5章 配列](#org80b6222)
    1.  [5-1 配列](#orgcf38be1)
        1.  [配列による成績処理](#orge13fb8b)
        2.  [オブジェクト形式マクロ](#org537c467)
4.  [第9章](#org37c3628)
    1.  [9-2 文字例の配列](#orgd6ab9b9)
        1.  [文字列の配列](#orga9ed1b2)
        2.  [文字列の配列への文字列の読み込み](#org6711354)
        3.  [演習9-3](#org39f6ad7)
    2.  [9-3 文字例の操作](#org54f3aeb)
        1.  [文字列の長さ](#org289db9a)
        2.  [文字列の表示](#org10d307d)
        3.  [数字文字の出現回数](#orgfdf12a2)
        4.  [大文字・小文字の変換](#orgd9c621c)
        5.  [文字列の配列の受け渡し](#org2b08497)
    3.  [まとめ](#org96b4dba)



<a id="org1045964"></a>

# 解説

<http://meikaicansewer.blogspot.com>


<a id="org2024f10"></a>

# 第3章 プログラムの流れの分岐


<a id="orgd86ecac"></a>

## 3-1 if文


<a id="org58983a7"></a>

### if文・その1


<a id="orgfa35659"></a>

### 奇数の判定


<a id="org80b6222"></a>

# 第5章 配列


<a id="orgcf38be1"></a>

## 5-1 配列


<a id="orge13fb8b"></a>

### 配列による成績処理

1.  List5-9


<a id="org537c467"></a>

### オブジェクト形式マクロ

\#define a b
とすると，「この指令以降のaは全てbに置換せよ」という意味．
定義が複数個所に分散しなくて済むので，定義を変更する必要が生じても一括して変えられる．

1.  List5-10

        /*
                学生の点数を読み込んで合計点と平均点を表示（人数をマクロで定義）
        */
        
        #include <stdio.h>
        
        #define NUMBER	5		/* 学生の人数 */
        
        int main(void)
        {
                int i;
                int tensu[NUMBER];	/* NUMBER人の学生の点数 */
                int sum = 0;		/* 合計点 */
        
                printf("%d人の点数を入力してください。\n", NUMBER);
                for (i = 0; i < NUMBER; i++) {
                        printf("%2d番：", i + 1);
                        scanf("%d", &tensu[i]);
                        sum += tensu[i];
                }
        
                printf("合計点：%5d\n", sum);
                printf("平均点：%5.1f\n", (double)sum / NUMBER);
        
                return 0;
        }


<a id="org37c3628"></a>

# 第9章


<a id="orgd6ab9b9"></a>

## 9-2 文字例の配列

配列の作り方．
名前[行][列]として宣言する．
下の例では，行数は自動的に3になっている．
列数は，最も文字数の多い"Turbo"に合わせ，6となっている（5 + ヌル文字1 = 6）．


<a id="orga9ed1b2"></a>

### 文字列の配列

1.  List9-6

        #include <stdio.h>
        int main(void)
        {
          int i;
          char cs[][6] = {"Turbo", "NA", "DOHC"};
        
          for (i = 0; i < 3; i++) {
            printf("cs[%d] = \"%s\"\n", i, cs[i]);
          }
          return 0;
        }


<a id="org6711354"></a>

### 文字列の配列への文字列の読み込み

1.  List9-7

    今度は，scanfでキーボードから読み込んで配列を作る．
    
        /*
                文字列の配列を読み込んで表示
        */
        
        #include <stdio.h>
        
        int main(void)
        {
                int  i;
                char s[3][128];		/* 3は読み込む要素数．128は，何文字入力されるかわからないので，多めに用意している */
                                        /* 実際にはヌル文字が最後にあるので，127文字しか読み込めない */
                for (i = 0; i < 3; i++) {
                        printf("s[%d] : ", i);
                        scanf("%s", s[i]); /* scanfだけど，配列の要素なので&演算子をつけてはだめ． */
                }
        
                for (i = 0; i < 3; i++)
                        printf("s[%d] = \"%s\"\n", i, s[i]);
        
                return 0;
        }


<a id="org39f6ad7"></a>

### 演習9-3

演習9-7を改変

-   文字列の個数を3ではなく大きな数にし，それを[オブジェクト形式マクロ](#org537c467)で定義
-   最初のfor文で，"\[\]"を読みこんだら，その時点で読み込みを中断，終了する
-   2番目のfor文では，"\[\]"より前に入力された前文字例を表示する．

    #include <stdio.h>
    
    #define NUMBER 128            /* ここにはセミコロンをつけてはいけない！！！！ */
    
    int main(void)
    {
      int  i, j;
      char s[NUMBER][128];
    
      for (i = 0; i < NUMBER; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]); /* scanfだけど，配列の要素なので&演算子をつけてはだめ． */
    
        for (j = 0; s[i][j] != '\0'; j++) {
          if (s[i][j] != '$') break;
        }
        if (j == 5) break;
      }
    
      for (j = 0; j < i; j++) { /* 1つめのループで止まったiまで，jのループを回すのがポイント */
        printf("s[%d] = \"%s\"\n", j, s[j]);
      }
    
      return 0;
    }


<a id="org54f3aeb"></a>

## 9-3 文字例の操作


<a id="org289db9a"></a>

### 文字列の長さ

1.  List9-8

        /*
                文字列の長さを調べる
        */
        
        #include <stdio.h>
        /*--- 文字列strの長さを返す ---*/
        /* まず文字列の長さを取得する関数str_lengthを定義 */
        int str_length(const char s[])	/* const は，定数．値を受け取るだけで，変更はしないことを宣言． */
        {
                int len = 0;
        
                while (s[len])		/* s[len] が非ゼロである間繰り返す．ヌル文字はゼロなので，ループは文字列末尾で止まる．*/
                        len++;
                return len;
        }
        
        int main(void)
        {
                char str[128];	/* ナル文字を含めて128文字まで格納できる */
        
                printf("文字列を入力してください：");
                scanf("%s", str);
        
                printf("文字列\"%s\"の長さは%dです。\n", str, str_length(str));
        
                return 0;
        }

2.  演習9-4

    文字列sを空文字列にする関数を作成せよ．
    
        /*
                文字列を空文字列にする
        */
        
        #include <stdio.h>
        void null_string(char s[])	/* void型の関数なので，returnはできない． */
                                        /* 上手くいっているかを確認する手立てがないので気持ち悪い． */
        {
                int len = 0;
        
                while (s[len]) {
                  len++;
                  s[len] = '\0';
                }
        }
        
        int main(void)
        {
                char str[128];	/* ナル文字を含めて128文字まで格納できる */
        
                printf("文字列を入力してください：");
                scanf("%s", str);
        
                printf("文字列\"%s\"を空文字列にしました。\n", str);
        
                return 0;
        }

3.  演習9-5

    文字列の中に文字cが含まれていれば，その添字を返し，
    含まれていなければ-1を返す関数を作成せよ
    
        #include <stdio.h>
        
        int str_char(const char s[], int c) /* cをintとして扱うことに注意 */
        {
          for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == c) return i;	/* 整数として扱うのでstr_compしなくていい */
          }
          return -1;
        }
        
        int main(void)
        {
          char str[128];
          int index;
        
          printf("文字列を入力してください: ");  scanf("%s", str);
        
          index = str_char(str, 'c');	/* 文字を整数として扱うときは単引用付！ */
        
          if (index == -1) {
            printf("文字cは含まれていません\n");
          } else {
            printf("文字cは配列の%d番目にあります", index);
          }
        
          return 0;
        }

4.  演習9-6

    文字列sの中に，文字cが含まれている個数（含まれていなければ0とする）を返す関数をら作成せよ
    
        #include<stdio.h>
        
        int str_chnum(const char s[], int c) /* const とcharの間にはコンマを入れてはいけない！ */
        {
          int cnum = 0;
          for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == c) cnum = cnum + 1;
          }
          return cnum;
        }
        
        int main(void)
        {
          char str[128];		/*要素数の指定を忘れないこと!*/
          int cnum;
        
          printf("文字列を入力してください: ");
          scanf("%s", str);
        
          cnum = str_chnum(str, 'c');
          printf("文字列\"%s\"の中に含まれる\"c\"の数は%d個です．\n", str, cnum);
        
          return 0;
        }


<a id="org10d307d"></a>

### 文字列の表示

1.  List9-9

        /*
                文字列を走査して表示する
        */
        
        #include <stdio.h>
        
        /*--- 文字列sを表示（改行はしない）---*/
        void put_string(const char s[])
        {
          int i = 0;
          while (s[i])
                  putchar(s[i++]); /* こんな短縮表記もできるのか...あまりよくないと思うけど．*/
                                   /*そしてputcharは値を返すわけではないので void型でもいいんだな．*/
        }
        
        int main(void)
        {
          char str[128];
        
          printf("文字列を入力してください：");
          scanf("%s", str);
        
          printf("あなたは");
          put_string(str);
          printf("と入力しました。\n");
        
          return 0;
        }

2.  演習9-7

    文字列sをn回だけ連続して表示する関数を作成せよ
    
        #include <stdio.h>
        
        void put_stringn(const char s[], int n)
        {
          int j;
          for (j = 0; j < n; j++) {
            int i = 0;
            while (s[i] != '\0') {
              putchar(s[i]);
              i = i + 1;
            }
          }
        }
        int main(void)
        {
          char str[128];
          int n;
        
          printf("文字列を入力してください:");
          scanf("%s", str);
          printf("\n繰り返したい数を入力してください:");
          scanf("%d", &n);
        
          printf("文字列\"%s\"を%d回繰り返すと", str, n);
          put_stringn(str, n);
          printf("となります．\n");
        
          return 0;
        }
    
    \#+END<sub>SRC</sub>

3.  演習9-8

    文字列を後ろから逆に表示する関数を作成せよ
    
        #include <stdio.h>
        
        void put_stringn(const char s[])
        {
          int i = 0;
          int j;
          while(s[i] != '\0') {
            i++;
          }
          for (j = i -1; j >= 0; j--) {
            putchar(s[j]);
          }
        
        }
        
        int main(void)
        {
          char str[128];
        
          printf("文字列を入力してください: ");
          scanf("%s", str);
        
          printf("あなたが入力した文字列を逆順に表示すると");
          put_stringn(str);
          printf("です．\n");
        
          return 0;
        }


<a id="orgfdf12a2"></a>

### 数字文字の出現回数

<span class="timestamp-wrapper"><span class="timestamp">[2018-11-30 Fri]</span></span>

1.  List9-10

        
        /*
            文字列内の数字文字をカウントする
        */
        
        #include <stdio.h>
        
        /*--- 文字列s内に含まれる数字文字の出現回数を配列cntに格納 ---*/
        void str_dcount(const char s[], int cnt[])
        {
            int i = 0;
            while (s[i]) {
                if (s[i] >= '0' && s[i] <= '9')
                    cnt[s[i] - '0']++;
                i++;
            }
        }
        
        int main(void)
        {
            int  i;
            int  dcnt[10] = {0};	/* {}で囲った数字は初期化子．本文p.114 */
            char str[128];			/* 文字列 */
        
            printf("文字列を入力してください：");
            scanf("%s", str);
        
            str_dcount(str, dcnt);
        
            puts("数字文字の出現回数");
            for (i = 0; i < 10; i++)
                printf("'%d'：%d\n", i, dcnt[i]);
        
            return 0;
        }

2.  演習9-9

    文字列sの文字の並びを反転する関数を作成せよ．
    演習9-8では逆順で「表示するだけ」だったが，今度は書き換える．
    入力したものを書き換えるので危険性が高く，プログラムとしてはあまりよくない．
    
        #include<stdio.h>
        
        void rev_string(char s[])
        {
            int i, length = 0;
            char tmp[128];
            for (i = 0; s[i] != '\0'; i++) {
                tmp[i] = s[i];
                length++;
            }
        
            for (i = 0; i < length; i++) {
                s[i] = tmp[length - i - 1];
            }
        }
        
        int main (void)
        {
            char str[128];
            int i = 0;
            printf("文字列を入力してください:");
            scanf("%s", str);
            /* str = rev_string(str)  こうではなく*/
            rev_string(str);             /* こう書く．*/
        
            printf("あなたが入力した文字列を反転しました．\n");
            printf("その結果は");
            /* while (str[i]) { */
            /*     printf("%s", str[i]); */
            /*     i++; */
            /* } わざわざループを使う必要はない．*/
            printf("%s", str);          /* strを書き換えたのだから，そのまま表示すればいい． */
            printf("です．\n");
        
            return 0;
        }


<a id="orgd9c621c"></a>

### 大文字・小文字の変換


<a id="org2b08497"></a>

### 文字列の配列の受け渡し


<a id="org96b4dba"></a>

## まとめ

