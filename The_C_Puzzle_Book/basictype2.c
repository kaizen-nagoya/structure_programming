#include <stdio.h>
//#define PR(x) printf("x = %.8g\t",(double)x)
#define PR(x) printf(#x "= %.8" #x "\t",(double)x)
#define NL putchar('\n')
#define PRINT4(x1,x2,x3,x4) PR(x1); PR(x2); PR(x3); PR(x4)

int main(void)
{
    double d;
    float f;
    long l;
    int i;
    
    i = l = f = d = 100/3; PRINT4(i,l,f,d);NL;
    d = f = l = i = 100/3; PRINT4(i,l,f,d);NL;
    i = l = f = d = 100/3; PRINT4(i,l,f,d);NL;
    d = f = l = i = (double)100/3;
    PRINT4(i,l,f,d);NL;
    
    i = l = f = d = (double)(100000/3);
    PRINT4(i,l,f,d);NL;
    
    d = f = l = i = 100000/3; PRINT4(i,l,f,d); NL;
}
/*
i= 33	l= 33	f= 33	d= 33	
i= 33	l= 33	f= 33	d= 33	
i= 33	l= 33	f= 33	d= 33	
i= 33	l= 33	f= 33	d= 33	
i= 33333	l= 33333	f= 33333	d= 33333	
i= 33333	l= 33333	f= 33333	d= 33333	// 33333.33333にならない理由はなんじゃらほい。
*/
/*
Q1  下記URLのプログラムで、３行目のプログラムが、Webコンパイラ、GCC、Clangとも桁数８の出力をしませんでした。桁数８の出力をするにはどうしたらいいですか。
A1 
URLがこちらから見えていないので、まずそのコード（特に「3行目」）を貼ってもらえると正確に指摘できます。

ただ、この質問の内容からするとかなり典型的なケースで、原因はほぼこれです👇

---

# 🎯 よくある原因：整数同士の割り算

例えばこういうコードになっていませんか？

```c
printf("%f\n", 1/3);
```

これは **整数 ÷ 整数** なので結果は **0** になり、
そのあとに浮動小数点に変換されます。

👉 だから桁数を増やしても意味がありません

---

# ✅ 解決方法：どちらかを浮動小数点にする

```c
printf("%.8f\n", 1.0/3);
```

または

```c
printf("%.8f\n", (double)1/3);
```

👉 これで「小数として計算」されます

---

# 🎯 桁数8で出力する正しい書き方

```c
printf("%.8f\n", value);
```

ポイント：

* `%.8f` → 小数点以下8桁
* `%f` だけだとデフォルト6桁

---

# ⚠️ もう一つの落とし穴：float精度

もしこうなっている場合：

```c
float x = 1.0/3;
printf("%.8f\n", x);
```

👉 `float` は精度が低いので誤差が出る

---

# ✅ より正確にするなら

```c
double x = 1.0/3;
printf("%.8f\n", x);
```

---

# 💡 まとめ

桁数8にならない原因は主に3つ：

1. 整数同士で計算している
2. `%.8f` を使っていない
3. `float` を使っている

---

# 👉 次にやると良いこと

URLかコードを貼ってください。
「3行目」が何をしているかを見れば、ピンポイントで直し方を示せます。

Q2 https://github.com/kaizen-nagoya/structure_programming/edit/main/The_C_Puzzle_Book/basictype2.c
A2
リンク先は「編集画面」だったのでコード本体は直接読めませんが、この手の問題（**桁数8が出ない**）はほぼ原因が特定できます。

結論から言うと👇

---

# 🎯 原因（かなり確実）

「3行目」がこういう形になっている可能性が高いです：

```c
printf("%8f\n", x);
```

または

```c
printf("%8.0f\n", x);
```

👉 これは **「桁数8」ではなく「幅8」** の指定です

---

# ⚠️ `%8f` の意味（ここが誤解ポイント）

| 書式     | 意味                    |
| ------ | --------------------- |
| `%8f`  | 全体の幅が8（小数点以下はデフォルト6桁） |
| `%.8f` | 小数点以下が8桁（←これが欲しい）     |

---

# ✅ 正しい書き方（これに直す）

```c
printf("%.8f\n", x);
```

👉 これで「小数点以下8桁」になります

---

# 🧠 さらによくある地雷（このコードの可能性高い）

## ❌ ケース1：整数計算

```c
printf("%.8f\n", 1/3);
```

👉 結果は 0.00000000（整数除算）

---

### ✔ 修正

```c
printf("%.8f\n", 1.0/3);
```

---

## ❌ ケース2：floatを使っている

```c
float x = 1.0/3;
printf("%.8f\n", x);
```

👉 桁は出るが精度が怪しい

---

### ✔ 修正（推奨）

```c
double x = 1.0/3;
printf("%.8f\n", x);
```

---

# 🎯 まとめ（今回の答え）

桁数8を出すには：

```c
printf("%.8f\n", 値);
```

さらに正確にするなら：

```c
double x = 1.0/3;
printf("%.8f\n", x);
```

---

# 👉 次にやるとよいこと

もし可能なら：

* 「3行目の実際のコード」を貼ってください
* もしくは GitHub の「Raw表示」URLをください

👉 その1行をピンポイントで修正します（今回かなり当たってると思います）

*/

#include <stdio.h>
//#define PR(x) printf("x = %.8g\t",(double)x)
#define PR(x) printf(#x "= %.8f\t",(double)x)
#define NL putchar('\n')
#define PRINT4(x1,x2,x3,x4) PR(x1); PR(x2); PR(x3); PR(x4)

int main(void)
{
    double d;
    float f;
    long l;
    int i;
    
    i = l = f = d = 100/3; PRINT4(i,l,f,d);NL;
    d = f = l = i = 100/3; PRINT4(i,l,f,d);NL;
    i = l = f = d = 100/3; PRINT4(i,l,f,d);NL;
    d = f = l = i = (double)100/3;
    PRINT4(i,l,f,d);NL;

    d = f = l = i = ((double)100)/3;
    PRINT4(i,l,f,d);NL;
    
    i = l = f = d = ((double)((double)100000)/3);
    PRINT4(i,l,f,d);NL;

    i = l = f = d = ((double)((double)100000)/(double)3);
    PRINT4(i,l,f,d);NL;

    i = l = f = d = (double)(100000/3);
    PRINT4(i,l,f,d);NL;
    
    d = f = l = i = 100000/3; PRINT4(i,l,f,d); NL;
}
/*

i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33333.00000000	l= 33333.00000000	f= 33333.33203125	d= 33333.33333333	
i= 33333.00000000	l= 33333.00000000	f= 33333.33203125	d= 33333.33333333	
i= 33333.00000000	l= 33333.00000000	f= 33333.00000000	d= 33333.00000000	
i= 33333.00000000	l= 33333.00000000	f= 33333.00000000	d= 33333.00000000	

[Execution c
*/

#include <stdio.h>
//#define PR(x) printf("x = %.8g\t",(double)x)
#define PR(x) printf(#x "= %.8f\t",(double)x)
#define NL putchar('\n')
#define PRINT4(x1,x2,x3,x4) PR(x1); PR(x2); PR(x3); PR(x4)

int main(void)
{
    double d;
    float f;
    long l;
    int i;
    
    i = l = f = d = 100/3; PRINT4(i,l,f,d);NL;
    d = f = l = i = 100/3; PRINT4(i,l,f,d);NL;
    i = l = f = d = 100/3; PRINT4(i,l,f,d);NL;
    d = f = l = i = (double)100/3;
    PRINT4(i,l,f,d);NL;

    d = f = l = i = ((double)100)/3;
    PRINT4(i,l,f,d);NL;

    
    d = f = l = i = (double)(((double)100)/3);
    PRINT4(i,l,f,d);NL;

    i = l = f = d = ((double)((double)100)/3);
    PRINT4(i,l,f,d);NL;

       
    d = f = l = i = (double)(((double)100)/(double)3);
    PRINT4(i,l,f,d);NL;
    
    i = l = f = d = ((double)((double)100000)/3);
    PRINT4(i,l,f,d);NL;

    i = l = f = d = ((double)((double)100000)/(double)3);
    PRINT4(i,l,f,d);NL;

    i = l = f = d = (double)(100000/3);
    PRINT4(i,l,f,d);NL;
    
    d = f = l = i = 100000/3; PRINT4(i,l,f,d); NL;
}

/*

i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33.00000000	l= 33.00000000	f= 33.33333206	d= 33.33333333	
i= 33.00000000	l= 33.00000000	f= 33.00000000	d= 33.00000000	
i= 33333.00000000	l= 33333.00000000	f= 33333.33203125	d= 33333.33333333	
i= 33333.00000000	l= 33333.00000000	f= 33333.33203125	d= 33333.33333333	
i= 33333.00000000	l= 33333.00000000	f= 33333.00000000	d= 33333.00000000	
i= 33333.00000000	l= 33333.00000000	f= 33333.00000000	d= 33333.00000000	


*/

#include <stdio.h>
//#define PR(x) printf("x = %.8g\t",(double)x)
#define PR(x) printf(#x "= %.8g\t",(double)x)
#define NL putchar('\n')
#define PRINT4(x1,x2,x3,x4) PR(x1); PR(x2); PR(x3); PR(x4)

int main(void)
{
    double d;
    float f;
    long l;
    int i;
    
    i = l = f = d = 100/3; PRINT4(i,l,f,d);NL;
    d = f = l = i = 100/3; PRINT4(i,l,f,d);NL;
    i = l = f = d = 100/3; PRINT4(i,l,f,d);NL;
    d = f = l = i = (double)100/3;
    PRINT4(i,l,f,d);NL;

    d = f = l = i = ((double)100)/3;
    PRINT4(i,l,f,d);NL;

    
    d = f = l = i = (double)(((double)100)/3);
    PRINT4(i,l,f,d);NL;

    i = l = f = d = ((double)((double)100)/3);
    PRINT4(i,l,f,d);NL;

       
    d = f = l = i = (double)(((double)100)/(double)3);
    PRINT4(i,l,f,d);NL;
    
    i = l = f = d = ((double)((double)100000)/3);
    PRINT4(i,l,f,d);NL;

    i = l = f = d = ((double)((double)100000)/(double)3);
    PRINT4(i,l,f,d);NL;

    i = l = f = d = (double)(100000/3);
    PRINT4(i,l,f,d);NL;
    
    d = f = l = i = 100000/3; PRINT4(i,l,f,d); NL;
}

/*
i= 33	l= 33	f= 33	d= 33	
i= 33	l= 33	f= 33	d= 33	
i= 33	l= 33	f= 33.333332	d= 33.333333	
i= 33	l= 33	f= 33	d= 33	
i= 33333	l= 33333	f= 33333.332	d= 33333.333	
i= 33333	l= 33333	f= 33333.332	d= 33333.333	
i= 33333	l= 33333	f= 33333	d= 33333	
i= 33333	l= 33333	f= 33333	d= 33333	

[Execution complete with exit code 0]


*/
