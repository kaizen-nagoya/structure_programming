データ、関数は別に定義

Abstruct Data Type　C++, Java: Class
 構造体の中に、関数がおける。
　模擬試験：simula, Smalltalk

C++, JAVAの問題点
　大きさを固定でclassを宣言しないといけない。
 intで宣言して、longしか使わなくても、使わないintのクラスがプログラムに残る

Template(C++), trait(Rust)
 大きさを指定しないで宣言できる。
 実行行で大きさを指定できる。

例：
 https://learn.microsoft.com/ja-jp/cpp/cpp/templates-cpp?view=msvc-170
 
template <typename T>
T minimum(const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs : rhs;
}

int i = minimum<int>(a, b);
