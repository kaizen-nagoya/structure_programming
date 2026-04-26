---
title: プログラマが知っているとよい色使い(JIS安全色)
tags: 色彩工学 配色 色覚 小川メソッド CountdownCalendar2022
author: kaizen_nagoya
slide: false
---
#### プログラマが知っているとよい色(1)使い(JIS安全色)
#### Uso del color que los programadores deben conocer (colores de seguridad JIS)
#### Color usage that programmers should know (JIS safety colors)

毎年の記事の見直しの一環としてChaatGPTに意見をもらいました。
プログラマが知っているとよい色使い 補足 by ChatGPT
flutterなどの例を生成してもらいました。
まだ全部確かめられていません。どなたかflutterの得意な方のご意見、ご要望、ご批判をお待ちしています。

Como parte de mi revisión anual de artículos, solicité la opinión de ChaatGPT.
Uso del color para programadores (Suplemento) de ChatGPT
Les pedí que generaran ejemplos con Flutter.
Aún no lo he revisado todo. Me encantaría conocer sus opiniones, sugerencias y críticas de cualquier experto en Flutter.

As part of my annual article review, I asked ChaatGPT for their input.
Color Usage for Programmers to Know (Supplement) by ChatGPT
I asked them to generate examples using Flutter.
I haven't checked everything yet. I'd love to hear your opinions, requests, and criticisms from anyone who's an expert on Flutter.

プログラマが知っているとよい色使い 補足 by ChatGPT
https://qiita.com/kaizen_nagoya/items/4adf81aa61dd768109e1

flutterって何ですか。
https://qiita.com/kaizen_nagoya/items/54bccd391657da07944d

四色覚　with ChatGPT
https://qiita.com/kaizen_nagoya/items/96435c855fe2602a68fe

<この項は書きかけです。順次追記します。>
 Esta sección está por escribirse, la iré agregando poco a poco.
This section is about to be written. I will add it little by little. 
# 目次の前に(forward)
この記事は、インターンシップの大学生の方に、「ゲームはするよりもゲームプログラムを書く方が楽しい」ということを説明した際に、その説明の一部として書いたものです。ゲームを卒業研究の題材にするなら、ゲームの中での色使いで、人による見え方の違いに配慮した改訂のあったJIS安全色(国際整合：ISO 3864-4:2011(Graphical symbols−Safety colours and safety signs−Part 4: Colorimetric and photometric properties of safety sign materials))を参考にするとよいよという助言の記録です。

Este artículo fue escrito para un estudiante en prácticas en mi laboratorio. Le expliqué que "es mucho más divertido programar un juego que jugarlo". Este es un consejo si desea informar sobre el juego como tema de su investigación de graduación; debe consultar los colores de seguridad JIS revisados ​​2018 (IDT: ISO 3864-4:2011 (Símbolos gráficos - Colores de seguridad y señales de seguridad - Parte 4: Propiedades colorimétricas y fotométricas de los materiales de las señales de seguridad) teniendo en cuenta la diferencia en la apariencia según la persona.

This article was written for an internship student on my Lab. I explained that "A game is much fun to programmi than to play". This is an advice if you want to report the game as the subject of your graduation research, you should refer to the revised JIS safety colors 2018 (IDT: ISO 3864-4:2011(Graphical symbols−Safety colours and safety signs−Part 4: Colorimetric and photometric properties of safety sign materials) in consideration of the difference in appearance depending on the person.

JIS安全色（JIS Z 9101:2018 (IDT)図記号 - 安全色及び安全標識 - 安全標識及び安全マーキングのデザイン通則、JIS Z 9103:2018(MOD)図記号-安全色及び安全標識-安全色の色度座標の範囲及び測定方法）の2018年の改定は、色の見え方に配慮している。色の見え方の多様性を理解するには、色覚の三種類の視覚錐体細胞の周波数範囲の偏りと、三種類の視覚錐体細胞の数の偏りを知っているとよい。赤と緑の錐体の周波数帯域が近く、赤と緑の錐体の数が多いという状態で赤と緑の扱い方に配慮が必要そうだと推測できるかも。

Colores de seguridad JIS (JIS Z 9101: 2018 (IDT) Símbolos de diagrama-Colores de seguridad y señales de seguridad-Señales de seguridad y reglas de diseño de marcado de seguridad. JIS Z 9103: 2018 (MOD) Símbolos de diagrama-Colores de seguridad y señales de seguridad-Colores de seguridad. Revisión de 2018 del rango de coordenadas de cromaticidad y método de medición) tiene en cuenta la apariencia de los colores. Para comprender la diversidad de la visión del color, es bueno conocer el sesgo del rango de frecuencia de los tres tipos de células piramidales visuales en la visión del color y el sesgo. En el número de los tres tipos de células piramidales visuales, se puede inferir que se debe considerar cómo manejar el rojo y el verde, que las bandas de frecuencia de los conos rojo y verde están cerca y los números son grandes.

JIS Safety Colors (JIS Z 9101: 2018 (IDT) Diagram Symbols-Safety Colors and Safety Signs-Safety Signs and Safety Marking Design Rules. JIS Z 9103: 2018 (MOD) Diagram Symbols-Safety Colors and Safety Signs-Safety Colors. The 2018 revision of the chromaticity coordinate range and measurement method) takes into consideration the appearance of colors. To understand the diversity of color vision, it is good to know the frequency range bias of the three types of visual pyramidal cells in color vision and the bias in the number of the three types of visual pyramidal cells. It may be inferred that consideration should be given to how to handle red and green that the frequency bands of the red and green cones are close and the numbers are large.

Se introducen las normas revisadas "JIS Z 9101:2018 (IDT) Símbolos de diagrama - Colores de seguridad y señales de seguridad - Reglas de diseño de señales de seguridad y marcado de seguridad" y "JIS Z 9103:2018 (MOD) Símbolos de diagrama - Colores de seguridad y señales de seguridad - Rango de coordenadas de cromaticidad de colores seguros y método de medición".

# 目次(content)
はじめに(introduction)
JIS Z 9103:2018(MOD)
JIS Z 9101:2018(IDT)
用語(terms)
事例(case study)
参考文献(reference)
解説(report)
 
プログラマが知っているとよい色使い(目次詳細・文書履歴)
https://qiita.com/kaizen_nagoya/items/12bd9bcca09cccabdcbe

プログラマが知っているとよい色(4)使い(色彩検定)
https://qiita.com/kaizen_nagoya/items/bf2797225618a14b56ab

プログラマが知っているとよい色使い(白黒で確認)
https://qiita.com/kaizen_nagoya/items/b4564d409115b68acd01

プログラマが知っているとよい色(16) 使い(色いろいろ)
https://qiita.com/kaizen_nagoya/items/9619aaf594b72d4b42b3

・光現象(light phenomeno)
・・blown out
・・white out
・・black out
・音色表現(colors of noise)
・・白色音(white noise)
・・・AWGN:additive white Gaussian noise
・・青色音(blue noise)
・・赤色音(red noise)
・・桃色音(pink noise)
・・黒色音(black noise)
・・緑色音(green noise)
・ユニバーサルデザイン 日本経済新聞社 2018
・・Tactile Colour Tag
・・直感的に操作できるリモコン
・・点字ブロック
・高齢者・障害者設計指針等

# はじめに(introduction)
2018年改定のあった「JIS Z 9101:2018 (IDT)図記号 - 安全色及び安全標識 - 安全標識及び安全マーキングのデザイン通則」、「JIS Z 9103:2018(MOD)図記号-安全色及び安全標識-安全色の色度座標の範囲及び測定方法」を紹介する。

Se introducen las normas revisadas "JIS Z 9101:2018 (IDT) Símbolos de diagrama - Colores de seguridad y señales de seguridad - Reglas de diseño de señales de seguridad y marcado de seguridad" y "JIS Z 9103:2018 (MOD) Símbolos de diagrama - Colores de seguridad y señales de seguridad - Rango de coordenadas de cromaticidad de colores seguros y método de medición".

Revised "JIS Z 9101: 2018 (IDT) Diagram Symbols-Safety Colors and Safety Signs-Safety Signs and Safety Marking Design Rules" and "JIS Z 9103: 2018 (MOD) Diagram Symbols-Safety Colors and Safety" Signs-Range of chromaticity coordinates of safe colors and measurement method " are introduced.

## 目的(purpose)
この資料は、プログラマが、見え方に配慮した色使いについて知っていると、
ゲームであっても、WEBであっても、多くの人に理解してもらいやすく、
納得感のある設計ができることに気がついてもらうことです。
色使いは、関数使いや、変数使いと共通で、分かりやすさの鍵となります。
色使いがうまくなると、変数使いや関数使いもうまくなっているかもしれません。
逆に、変数の決め方や、関数の決め方についても、色使いと同じような配慮ができるようになっているかもしれません。
色使いに始まり、設計の基本は何かを考えるきっかけになれば幸いです。

Este artículo afirma que si un programador sabe usar los colores teniendo en cuenta la apariencia, será fácil de entender para muchos, ya sea para juegos o páginas web, y se podrá diseñar con convicción.
El uso del color es similar al uso de funciones y variables, y es clave para la comprensión.
Si se mejora el uso de colores, también se puede mejorar el uso de variables y funciones.
Por el contrario, es posible que se pueda prestar la misma atención a cómo decidir sobre variables y funciones, así como al uso de colores.
Espero que este artículo les brinde la oportunidad de reflexionar sobre los fundamentos del diseño, empezando por el uso de colores.

This article states that if a programmer knows how to use colors with consideration for appearance, it will be easy for many people to understand, whether  game or  WEB pages that will be possible to design with a sense of conviction. 
Color usage is the same as function and variable usage, and is the key to comprehensibility.
If you get better at using colors, you may also get better at using variables and functions.
On the contrary, it may be possible to give the same consideration to how to decide variables and functions as well as how to use colors.
I hope it will give you an opportunity to think about what the basics of design are, starting with the use of colors.

## 自由(free)
プログラムと色は自由である(program and colour are free)。
プログラミング言語に文法があるように、色にも規則がある。物理的な周波数、位相、振幅にかんする原理(principle)・制約(constraints)だけでなく、社会的な色の役割についての諸規則。
視覚として錐体の３種類と分布、１種類の視覚錐体で感知できる周波数帯域、各錐体の遺伝子配列など、より詳細に資料は整理できつつある。
自分の仕事で、最も重要なものは安全色(safety colour)である。交通安全(traffic safety)、自動車安全(automotive safety)、道路安全(road safety),機械安全(machine safety)、労働安全(work safety)など幅広く適用可能。
安全分析の際にHAZOPを利用することを推奨している。

Los programas y los colores son libertad.
Al igual que los lenguajes de programación tienen gramática, los colores también tienen reglas. Estas incluyen no solo principios y restricciones sobre la frecuencia física, la fase y la amplitud, sino también reglas sobre el rol social del color.
Actualmente estoy organizando información más detallada, como los tres tipos de conos visuales y su distribución, la banda de frecuencia detectable por cada tipo de cono visual y la secuencia genética de cada cono.
Lo más importante en mi trabajo es la seguridad del color. Se puede aplicar a una amplia gama de áreas, como la seguridad vial, la seguridad automotriz, la seguridad vial, la seguridad de las máquinas y la seguridad laboral.
Recomiendo utilizar el método HAZOP para realizar análisis de seguridad.

Programs and colors are free.
Just as programming languages ​​have grammar, colors also have rules. These include not only principles and constraints regarding physical frequency, phase, and amplitude, but also rules regarding the social role of color.
I am currently organizing more detailed information, such as the three types of visual cones and their distribution, the frequency band detectable by each type of visual cone, and the genetic sequence of each cone.
The most important thing in my work is safety color. It can be applied to a wide range of areas, including traffic safety, automotive safety, road safety, machine safety, and work safety.
I recommend using HAZOP when conducting safety analyses.

# 安全色(safety colour) 見え方に配慮した改定
安全色のJISを2018年に改定している。見え方に配慮した改定である。

ぜひ参考にしていただけると幸いである。

従来は、色盲、色弱という呼び方で、色覚の多様性を、一面的に捉えて来たかもしれない。現在では、三種類の色覚の機能と、多様性に基づいて、多くの人に識別しやすいような配色の提案が進んでいる。

危険を知らせるには赤(red)、警告には黄赤(orange)・黄(yellow)、安全には緑(green)・青(bue)、放射能は紫(purple)。色の見え方が違う方にも、識別しやすいように色を工夫する。

色の変数名、値を定義する際に、JISの色名の用語、色の定義に基づいた値などを利用すると、両立性(compatibility)、可搬性(portability)を高めることができるかもしれない。

ゲームプログラミング（画像作成）、Webプログラミング（データ作成）に際して、
視覚の多様性(variation)に対応するとよい。視覚の多様性には、視覚の分布と、視覚の多様性の分布を知っているとよい。

## 背景(background)
色使いについては、特に下記JISおよび業界団体規格を参照。
JIS S 0033:2006 高齢者・障害者配慮設計指針―視覚表示物―年齢を考慮した
基本色領域に基づく色の組合せ方法

~~JBMS-80 高齢者・障害者等配慮設計指針―視覚表示物―色覚の多様性に配慮した色の組合せと表示方法（一般社団法人ビジネス機械情報システム産業協会）~~

2019年廃止
https://hyojunka.jbmia.or.jp/hyojun2/upload-v3/list.cgi?mode=up
https://hyojunka.jbmia.or.jp/hyojun2/upload-v3/archive/JBMS-80.txt
>廃止日(Abolition)：20191023
理由(Reason)：
キー色と表示文字色など、デジタル複合機の視覚表示物に対し、色覚異常に配慮した色の組み合せと加齢により見え方が変わる高齢者への対応も規定したJBMSである。
2009年当時は、CUDO（カラーユニバーサルデザイン機構）の指導のもとでJBMSを作成したが、その後の各社の活動から、弱視で色だけを頼りに操作するユーザの存在が明らかになり、色覚異常への対応が一部の弱視ユーザには操作を妨げる可能性があることがわかった。そのため、今回の定期見直しで廃止することとした。
今後、色覚異常への対応については、CUDO・日本眼科学会など多数の知見を入手し、利用可能である。
問い合わせ(Contact):info.std@jbmia.or.jp

色覚の多様性ではなく「色覚異常」と表現している。認識が浅い頃の表現かもしれない。

廃止規格であることを考慮した上で、貴重なデータであるため、保存しておくとよいのではないだろうか。下記に、「発行団体の許可を得て引用、参照ください。」という条件で保存。
https://researchmap.jp/multidatabases/multidatabase_contents/download/231120/c9a24afb72dace04fa5c830db9c064c2/26461?col_no=2&frame_id=576083

カラーユニバーサルデザイン推奨配色セット
https://www2.cudo.jp/wp/?page_id=1565

# JIS Z 9103:2018(MOD)
図記号-安全色及び安全標識-安全色の色度座標の範囲及び測定方法(原案作成団体　公益社団法人 日本保安用品協会)
ISO 3864-4:2011 Graphical symbols - Safety colors and safety signs - Part4: Colorimetric and photometric properties of safety sign material (MOD) 
修正している(Modified)。これは、国際規格(ISO)とJISとが技術的には一致していないことを示している。実際のJISの文面では、一致していないところには印がありわかるようになっている。
付属書JD(参考）に、JISと対応国際規格との対比表があり、輸出するあるいは輸入した製品、海外へのサービスを行なっている場合には、確認するとよい。適用範囲、用語については「次回ISO改正時に提案する(p.27)」とある。下記、日本産業標準調査会で閲覧可能。

> 「安全色は、安全上必要な事項又は箇所を識別しやすくしようとするものであって、本来の事故・災害防止策の代用と考えてはならない。また、鉄道、道路、河川、海事、航空などの分野で法的規制の対象になっているものはそれに従う。」JIS Z 9303:2018 p.1,「1 適用範囲」

| 色の種類| 参考色 | １６進RGB|意味 |
|:--|:--|:--|:--|
||マンセル記号|(JIS外)|表JB.1|
| 赤(red) | 8.75R 5/12 | <font color="#FF4B00">#FF4B00</font> |防火、禁止、停止、危険、緊急 |
| 黄赤(yellow red) | 5YR 6.5/14 | <font color="#F6AA00">#F6AA00</font>|注意警告、明示 |
| 黄(yellow) | 7.5Y 8/12 | <font color="#F2E700">#F2E700</font>|注意警告、注意、明示 |
| 緑(green) | 5G 5.5/10 |<font color="#00B06B"> #00B06B</font>|安全状態、進行、完了・稼働中 |
| 青(blue) | 2.5PB 4.5/10 | <font color="#1971FF">#1971FF</font>|指示、誘導、安全状態、完了・稼働中 |
| 赤紫(purple) | 10P 4/10 |<font color="#990099"> #990099</font>| 放射能、極度の危険 |
|白(white)|N 9.3 |<font color="#BBBBBB">#FFFFFF</font> ||
|黒(black)|N1.5|<font color="#0000">#000000</font>||

色の指定値
http://safetycolor.jp/shiteichi/

JIS外16進数は次の２つの資料に基づき追記。（ただし白の文字色は、#FFFFFFだと読めない。また表の中で背景に色をつける方法を知らない。白の文字色値を ~~#DDDDDD~~ #BBBBBBにしている。）

新JIS安全色普及委員会(New safety colour JIS popularization committee) 
http://safetycolor.jp/shiteichi/ 

視認性に配慮した色の識別！JIS安全色彩(iro-color)
https://iro-color.com/episode/jis.html

資料によっては、青がPB(purple blue)で、赤紫がP(Purple)であるのは、日本語表記で青の概念は幅広いことと、紫が以前は赤紫だったためと推測している。

実際に製品を作る場合だけでなく、製品の完成予想・製品の動作予測のための模擬試験(simulation)ソフトを作る場合にも、これらの色遣いはそのまま同じ色で扱うとよい。

ゲームでも、現実世界の一部を表現する場合には、これらの色使いを踏襲していると現実味が増す。ましてや、2017までの世界と、2018年以降の世界を描写するときに、日本であれば、この色使いの変化を応用すると受ける。

反射及び透過物体、光源など対象の材料による違いもJISで規定している。詳細は参考文献欄のJISを参照してください。ただし、Webで無料でJISを開示しているサイトでは、図などは省略している。JISCで閲覧できるPDFには色の部分がない。

JIS安全色 ( JIS Z 9103 ) 改正内容の紹介
http://safetycolor.jp/

新JIS安全色普及委員会
http://safetycolor.jp

JIS Z 9103(JIS 安全色)改正内容のご紹介　新JIS安全色普及委員会
https://www.fdma.go.jp/singi_kento/kento/items/kento207_60_sankou7-7.pdf

ユニバーサルデザインに配慮し、だれもが識別しやすい色に調整した改正 JIS安全色 (JIS Z 9103) 規格
http://jfly.iam.u-tokyo.ac.jp/temp/JIS/JIS_Press_Conference_4P.pdf

JIS・日本工業規格(JIS Z 8102: 2001 物体色の色名)慣用色名 269色 見本(RGB16進)
http://machizukan.net/DK/bg_color_jis/file.pdf

色の名前と色見本　JIS(Z 8102: 2001 物体色の色名)慣用名(RGB16進)
http://irononamae.web.fc2.com/colorlist/jis.html

マンセル表色系の色見本(RGB16進）
https://www.color-sample.com/popular/munsell/

## 表. 図記号を入れた場合(TABLE. with figure or symbols)
一般材料の色による改正前及び改正後の色
http://www.meti.go.jp/press/2018/04/20180420006/20180420006.html
<img width="602" alt="JIS安全色.png" src="https://qiita-image-store.s3.amazonaws.com/0/51423/a9dc719c-5a32-02f2-0aaf-d7abe39c8b08.png">

JIS Z 9101:2018 表 1 基本形状、意味、安全色、対比色、図記号要素の色及び使用例に記載のあるように、黄の場合は黒が対比色であり、赤、青、緑の対比色は白である。

## JIS Z 9103:2018 付属書(Appendix) JC (参考) 多様な色覚に対する配慮
表JC.1 旧規格(2005年)及びこの規格(2018)の参考色の見分けやすさ評価 
<img width="567" alt="safecolorjc1.png" src="https://qiita-image-store.s3.amazonaws.com/0/51423/e4604603-4ed4-083e-5535-8d5baa0edad0.png">

> 「網膜にはL, M, Sの際種類のすい（錐）体細胞があり、それぞれに主に長波長(long), 中波長(middle),短波長(short)の光に反応する。」「いずれかのすい体を欠失していたり、吸収特性が異なっていたりするために、色の感じ方が一般と異なる人が存在する」「色覚の分類」

錐体の有無（機能の有無）では統計的に多い、C型、D型、P型を対象に、ロービジョンと白内障の場合を加えて統計調査している。母数150を多いと捉えるか、少ないと捉えるかは立場によって違う。今回の改定の妥当性を確認する上では疫学的に ~~優位~~ 有意だと推測。

一般（C型）３種類錐体あり
1型（P型）L錐体(赤)が無い(protan,protanope,protanomal)
2型（D型）M錐体(緑)が無い(deutan,deuteranope,deuteranomal)
3型（T型）S錐体(青)が無い(tritan,tritanopia,tritanomal)
（A型）１種類しか錐体がない(achromatopsia)

日本医学会 医学用語辞典 WEB版
https://jams.med.or.jp/dic/mdic.html

を参考に()書き追記。

(正常色覚、一般色覚より、多数色覚というのが科学的用語として適切かもしれない。)
ロービジョン（色弱）

白内障「白内障は目の水晶体（レンズ）が白く濁る疾患で、濁り方が激しいと短波長の青～緑の光を通さなくなります。」
色覚の仕組み　NPO法人北海道カラーユニバーサルデザイン機構
http://www.color.or.jp/about_cud/construction/

色覚に関する指導の資料　文部省（大阪府）
http://www.pref.osaka.lg.jp/attach/2470/00004402/sikikaku.pdf

### 色覚(color vision)
#### 4色覚
第四の色覚についての資料を記載する。

スーパービジョン 4色覚の分光モデル 〜相思鳥はいかに 紫外の世界を視ているか?
https://www.jstage.jst.go.jp/article/jcsaj/42/6/42_265/_pdf

>哺乳類の共通祖先の脊椎動物は 4 色覚をもち，初めて 色を識別したのは，カンブリア期の魚類とされる

4色覚、3色覚、2色覚を色覚の多様性と考え、正常・異常という発想をしないと、
色について多様な展開が可能かもしれない。
色覚の統計をとり、確率にもとづいて設計(design)するという感じで。

#### 3色覚
色覚分類(color sense group)
錐体(sensitive cone)
L錐体(赤)long wave sensitive cone 
M錐体(緑)middle wave sensitive cone
S錐体(青)short wave sensitive cone

網膜の色覚には赤、緑、青の三種類の視覚錐体細胞がある。

次の事項については、教育を受けた年代、教育の専門性によって、知っていることと知らないことがあるかもしれない。

二つの異なる周波数吸収する視覚錐体細胞があれば、色の識別はある程度可能である。
哺乳類の多くが2種類の錐体視物質しか持たない。
三種類の視覚錐体細胞の存在確率は均一ではない。
三種類の周波数吸収において、緑と赤は近い。（下記図１）
赤錐体と言っているが吸収極大波長の光は「黄緑」。（下記図１）
色認識として異なる二つの光の周波数分布を一つの色と認識する。

<img width="400" alt="img_b01.gif" src="https://qiita-image-store.s3.amazonaws.com/0/51423/a5fbe6b9-f481-7574-bda5-fb209e7e2344.gif">

色覚の多様性と色覚バリアフリーなプレゼンテーション 
第1回　色覚の原理と色盲のメカニズム
「1.2 出発点としての網膜と視物質」
https://www.nig.ac.jp/color/barrierfree/barrierfree1-2.html
岡部正隆 / 伊藤啓  細胞工学Vol.21 No.7 2002年7月号

「1.6 女性で赤緑色盲が少ない理由」
https://www.nig.ac.jp/color/barrierfree/barrierfree1-6.html

>「正常3色型色覚の人における網膜上の赤、緑、青錐体の割合は、平均で赤錐体が 60％、緑錐体が 30％、青錐体が 10％で、赤錐体と緑錐体の比が 2：1 と言われている。」

詳しくはこちらをお読みください。

色覚の多様性と色覚バリアフリーなプレゼンテーション
https://www.nig.ac.jp/color/barrierfree/barrierfree.html

上記資料を整理中。一部URL変遷記録。
https://researchmap.jp/blogs/blog_entries/view/109203/cc396adc8f74231d49015b822e69ee99?frame_id=416975
~~https://researchmap.jp/jo7c0wao1-2207595/#_2207595~~

>「赤錐体が一番多 く全体の60%を占め，緑錐体は30%，青錐体は10%」
http://dl.ndl.go.jp/view/download/digidepo_10746806_po_ART0001831350.pdf?itemId=info%3Andljp%2Fpid%2F10746806&contentNo=1&alternativeNo=&__lang=en

の根拠資料が「色覚の多様性と色覚バリアフリーなプレゼンテーション」であることを確認。

18) Kremers J, et al: J Opt Soc Am A (2000) 17: 517-526
https://www.researchgate.net/profile/Tos_TJM_Berendschot/publication/12607776_LM_cone_ratios_in_human_trichromats_assessed_by_psychophysics_electroretinography_and_retinal_densitometry/links/0046351ada56f4c4cb000000.pdf

#### 錐体の分布(distribution of color vision)
三原色と周波数の関係に偏りがあるだけでなく、錐体の分布に偏りがあることも視覚理解の上で重要である。

脳の世界　三上章允
http://web2.chubu-gu.ac.jp/web_labo/mikami/brain/index.html
>網膜の赤、緑、青錐体の分布はでたらめ
http://web2.chubu-gu.ac.jp/web_labo/mikami/brain/25-8/index-25-8.html

<img width="350" alt="RetinaCones.jpg" src="https://qiita-image-store.s3.amazonaws.com/0/51423/9871cd72-b0af-6daf-3703-6609f614f408.jpeg">

図４　ヒトの網膜の長波長（赤）、中波長（緑）、短波長（青）錐体の分布、Austin Roorda & David R Williams, Nature, 397, 520-522, 1999
https://www.nature.com/articles/17383

<img width="350" alt="MokeyRetina_VR01.jpg" src="https://qiita-image-store.s3.amazonaws.com/0/51423/26dbf719-3379-f704-48e6-dbeb53c7646e.jpeg">

図５　サルの網膜における３種類の錐体の分布。（Roorda、Metha、 Lennie　＆ Williams, Vision Res. 41, 1291-1306, 2001）

赤と緑と青の錐体の存在分布は均一でない。「正常」が、いかに偏っているかが分かる。
多様性という言葉には意味がある。正常＝異常という立場で色を語るのは、統計的あるいは科学的でない。

錐体の周波数分布と、各錐体の分布とを用いた計算模型を作って、多様性に対応した色設計の道具を調べよう。

##### 色覚の多様性への対応
色覚が多様であることを知り一元的な色使いに陥らないことを目指します。

例えば、　
https://www.arealme.com/color-hue-test/ja/
　
のような一元的な試験には反対します。　
https://twitter.com/naokiakutagawa/status/1665799882865774592?s=46&t=UU_Wb_IuvnJkFYBmLRFvBA

>95だったけど色彩の感覚よりは明度に依存　＃短歌　多様性を認めない一元的な試験には反対します。例えば明度、彩度、色相などのn次元試験でプロファイルなら。

色々な可能性を知れていいかも。

私は明るいのが苦手です。若い頃はサングラスをかけていました。今は、度なしブルーカットグラスをかけています。携帯電話もPCもすごく暗くして使っています。そんな私の回答は明度依存です｡

# 用語(terms)
JISでは用語及び定義があるが、ここでは定義は省略する。定義は直接JIS参照のこと。
## JIS Z 9101:2008(IDT) 図記号 - 安全色及び安全標識 - 安全標識及び安全マーキングのデザイン通則
組合せ標識(combination sign)
距離係数(factor fo distance)
防火標識(fire equipment sign)
識別可能性(identifiability)
指示指標(mandatory action sign)
複合指標(multiple sign)
禁止指標(prohibition sign)
安全状態標識(safe condition sign)
視認距離(safe observation distance)
安全色(safety colour)
安全マーキング(safety marking)
安全標識(safety sign)
標識の高さ(sign height)
補助標識(supplementary sign)
視力(visual acuity)
注意警告標識(warning sign)
## JIS Z 9103:2018(MOD)図記号-安全色及び安全標識-安全色の色度座標の範囲及び測定方法
色の範囲(colour region)
対比(contrast)
対比色(contrast color)
内照式安全標識（internally illuminated safety sign)
輝度対比(luminance contrast)
輝度率(luminance actor)
物体色(object color)
一般材料(ordinary material)
蓄光材料(phosphorescent material)
蛍光材料(fluorescent material)＊
再帰性反射材(retroretlecting material)＊
安全色(safety colour)
信号灯(signal light)＊
＊印がJISで追加(MOD)。Z9103でZ9101を引用規格にしておらず安全色の定義は同じである。

markingは日本語では押印。なぜmarkingだけカタカナ語を使っているかは不明。

### JBMS-80 高齢者・障害者等配慮設計指針―視覚表示物―色覚の多様性に配慮した色の組合せと表示方法　表１　色覚関連用語

2019年廃止

|  用語  | 2005 年以降の 日本眼科学会 の用語  | (参考)2005 年 以前の 日本眼科学会 の用語  | (参考)色覚 チェックツールの用語例 | 参考頻度 (日本人男性)  |
|:--|:--|:--|:--|:--|
| 正常色覚  | 正常色覚 normal color vision  | ―  |  | 約 95%  |
| P-type  | 1 型 2 色覚 protanopia  | 第1色盲  | Protanope  | 約 1.5%  |
|  | 1 型 3 色覚 protanomaly  | 第1色弱  |  |  |
| D-type  | 2 型 2 色覚 deuteranopia  | 第2色盲  | Deuteranope  | 約 3.5%  |
|  | 2 型 3 色覚 deuteranomaly  | 第2色弱  |  |  |
|  | 3 型 2 色覚 tritanopia  | 第3色盲  | Tritanope  | 約 0.0001%  |
|  | 3 型 3 色覚 tritanomaly  | 第3色弱  |  |  |
|  | 1 色覚 achromatopsia  | 全色盲  |  | 約 0.0001%  |

## 色の指定及び測定方法(Specify color and methods of colour measurement)
(JIS X 9103:2018 4. 色の指定及び測定方法）
一般材料、蛍光材料、再帰性反射材量のは色度座標、幾何条件は「JIS Z 8722 色の測定方法−反射及び透過物体色」による。
蓄光材料、内照性標識、信号灯の色度座標は「JIS Z 8724 色の測定方法−光源色」による。

## 引用規格(reference standard)
JIS Z 9101:2018 図記号 - 安全色及び安全標識 - 安全標識及び安全マーキングのデザイン通則
 ISO 3864-1:2011, Graphical symbols - Safety colours and safety sings - Part1: Design principles for safety signs and safety markings(IDT)
JIS Z 9103:2018　図記号-安全色及び安全標識-安全色の色度座標の範囲及び測定方法
 ISO 3864-4:2011 Graphical symbols - Safety colors and safety signs - Part4: Colorimetric and photometric properties of safety sign material (MOD) 

JIS Z 8113 照明用語
JIS Z 8716 表面色の比較に用いる常用光源蛍光ランプD65ー形式及び性能
JIS Z 8720 測定用の標準イルミナント（標準の光）及び標準光源
JIS Z 8722 色の測定方法−反射及び透過物体色
JIS Z 8724 色の測定方法−光源色
ISO 17724 Graphical symbols - Vocabulary
ISO 3864-3, Graphical symbols - Safety colors and safety signs - Part3: Design principles for graphical symbols for use in safety signs

## 参考・関連規格(related standard)
JIS C 7601 蛍光ランプ（一般照明用）
JIS E 3701 踏切諸施設−安全色彩
JIS M 7001 鉱山保安警標
JIS W 8301 航空標識の色
JIS Z 8102: 2001 物体色の色名

 JIS Z 8102:2001 表 1  有彩色の基本色名

| 基本色名 | 読み方 | 対応英語 | 略号 |
|:--|:--|:--|:--|
| 赤 |  あか |  red | R |
| 黄赤 | きあか | yellow red/orange | YR/O |
| 黄 | き  | yellow | Y |
| 黄緑 | きみどり |  yellow green | YG |
| 緑 | みどり |  green | G |
| 青緑 | あおみどり |  blue green | BG |
| 青 | あお |  blue | B |
| 青紫 | あおむらさき | purple blue/violet | PB/V |
| 紫 | むらさき |  purple | P |
| 赤紫 | あかむらさき |  red purple | RP |

 JIS Z 8102:2001 表 2  無彩色の基本色名

| 基本色名 | 読み方 | 対応英語 | 略号 |
|:--|:--|:--|:--|
| 白 | しろ |  white | Wt |
| 灰色 | はいいろ |  grey（英）/gray（米） |  Gy |
| 黒 | くろ |  black | Bk |

JIS Z 8717 蛍光物体色の測定方法
JIS Z 8719 条件等色指数−照明光条件等色度の評価方法
JIS Z 8721 色の表示方法−三属性による表示
JIS Z 8781-1：2012(ISO 11664-1：2007)測色−第 1 部：CIE 測色標準観測者の等色関数
JIS Z8781-2：2012(ISO 11664-2：2007)測色−第 2 部：CIE 測色用標準イルミナント
JIS Z8781-3：2016測色−第 3 部：CIE 三刺激値
JIS Z8781-4：2013測色−第 4 部：CIE 1976 L*a*b*色空間
JIS Z 9102 配管系の識別表示
JIS Z 9104:2005 安全標識−一般的事項
ISO 3864-2 Graphical symbols - Safety colors and safety signs - Part2: Design principles for product safety labels.
ISO 7010 Graphical symbols - Safety colors and safety signs - Registers safety signs
ISO 9186-2 Graphical symbols - Test methods - Part2: Method for testing perceptual quality

JIS Z 9103 引用規格の引用規格一覧
https://researchmap.jp/blogs/blog_entries/view/78881/a5037d063aabb693adb75af1bfedbdfa?frame_id=412479

JISハンドブック 色彩 2010, 2011,2012, 2013は改定前で、2018年版の最新JISの掲載はない。2014年以降の「JISハンドブック色彩」が発行されたかどうか、見当たっていない。
2010 https://www.amazon.co.jp/dp/4542178420
2011 https://www.amazon.co.jp/dp/4542179370
2012 https://www.amazon.co.jp/dp/454218076X
3013 https://www.amazon.co.jp/dp/4542181758

### 分野規格(domain standard)
#### JIS E3701-1995 踏切諸施設−安全色彩

|色|基準値|JIS Z 9103|
|:--|:--|:--|
|赤 |10R5.5/14.5|8.75R 5/12|
|黄 |7.5YR7.5/16|7.5Y 8/12|
|白 |N9.5 |N 9.3|
|黒| N1.0| N1.5 |

#### 防衛省規格 標準色　NDS Z 8201E
http://www.mod.go.jp/atla/nds/Z/Z8201E.pdf

<img width="629" alt="bouei.png" src="https://qiita-image-store.s3.amazonaws.com/0/51423/99846fa8-7389-d554-3ebf-b7fd0412d12d.png">

参照規格
JIS F 7005 船用配管の識別
JIS W 8301 航空標識の色
JIS Z 8716 表面色の比較に用いる常用光源蛍光ランプD65-形式及び性能 JIS Z 8721 色の表示方法-三属性による色の表示
JIS Z 8722 色の測定方法-反射及び透過物体色
JIS Z 8741 鏡面光沢度-測定方法
JIS Z 9102 配管系の識別表示
JIS Z 9103 安全色-一般的事項

海上衝突予防法 昭和52年法律第62号(Act for Preventing Collisions at Sea）
http://elaws.e-gov.go.jp/search/elawsSearch/elaws_search/lsg0500/detail?lawId=352AC0000000062&openerCode=1
> 「３　この法律において「両色灯」とは、紅色及び緑色の部分からなる灯火であつて、その紅色及び緑色の部分がそれぞれげん灯の紅灯及び緑灯と同一の特性を有することとなるように船舶の中心線上に装置されるものをいう。」21条３項

#### JIS W 8301 航空標識の色
毒物及び劇物取締法 昭和25年法律第303号(Poisonous and Deleterious Substances Control Act)
http://elaws.e-gov.go.jp/search/elawsSearch/elaws_search/lsg0500/detail?lawId=325AC0000000303
> 「第十二条　毒物劇物営業者及び特定毒物研究者は、毒物又は劇物の容器及び被包に、「医薬用外」の文字及び毒物については赤地に白色をもつて「毒物」の文字、劇物については白地に赤色をもつて「劇物」の文字を表示しなければならない。」

|色の種類 |意味または目的| 色票番号| マンセル値|
|:--|:--|:--|:--|
|黄赤| 昼間障害標識| 09-50X| 10R5/14|
|白| 昼間障害標識| N-95| N9.5|
マンセル値は参考値
https://www.paint-city.com/pdf/jisanzen02.pdf

航空障害灯/昼間障害標識の設置等に関する 解説・実施要領 国土交通省航空局 航空灯火・電気技術室
http://ocab.mlit.go.jp/news/sign/img/oblyoryo_26_01.pdf

JIS W8301航空標識の色及び風力発電機群の航空障害標識に関する調査
https://www.njss.info/offers/view/6901975/

航空法施行規則 昭和二十七年運輸省令第五十六号(Ordinance for Enforcement of the Civil Aeronautics Act）
http://elaws.e-gov.go.jp/search/elawsSearch/elaws_search/lsg0500/detail?lawId=327M50000800056&openerCode=1
>「第百十六条　法第三十九条第一項（法第四十三条第二項において準用する場合を含む。）に規定する航空灯台の位置、構造等の設置の基準は、種類別に次のとおりとする。」
「ロ　灯光は、航空白と航空赤の閃せん交光であること。
ハ　一分間の閃せん光回数は、十二から二十までであること。
ニ　実効光度は、白色光では十五万カンデラ以上、赤色光では二万三千カンデラ以上であること。」

# JIS Z 9101:2018 (IDT)
図記号 - 安全色及び安全標識 - 安全標識及び安全マーキングのデザイン通則(原案作成団体　公益社団法人 日本保安用品協会)
 ISO 3864-1:2011, Graphical symbols - Safety colours and safety sings - Part1: Design principles for safety signs and safety markings(IDT)。一致している(identical)。

改正JIS Z 9101・JIS Z 9103の概要及び解説 - 日本保安用品協会
http://jsaa.or.jp/wp/wp-content/uploads/2018/07/5adbd5ec14cec6c33b3c5534e9aa52c8.pdf

JIS Z 9101:2018 表 1 基本形状、意味、安全色、対比色、図記号要素の色及び使用例
<img width="734" alt="safety1.png" src="https://qiita-image-store.s3.amazonaws.com/0/51423/bd0b700c-3c74-b4fa-58a5-f6112d533f99.png">

## ISO 3864-4 
ISO 3864-4:2011(Graphical symbols−Safety colours and safety signs−Part 4:Colorimetric and photometric properties of safety sign materials)
https://www.iso.org/standard/51000.html

####   Normative references
>The following referenced documents are indispensable for the application of this document. For dated references, only the edition cited applies. For undated references, the latest edition of the referenced document (including any amendments) applies.
ISO 3864-1: —1), Graphical symbols — Safety colours and safety signs — Part 1: Design principles for safety signs and safety markings
ISO 17724:2003, Graphical symbols — Vocabulary
CIE 15, Colorimetry
CIE 69, Methods of characterizing illuminance meters and luminance meters: Performance, characteristics and specifications

#### 3   Terms and definitions
>For the purposes of this document, the terms and definitions given in ISO 17724 and the following apply.
##### 3.1 colour region
>boundary values of x, y chromaticity coordinates of the CIE 2° standard colorimetric observer and luminance factor or luminance for the named colour
##### 3.2 contrast C
>difference in luminance factors of the graphical symbol and its background, divided by the larger luminance factor βa, where βb is the smaller luminance factor
mml_m1
##### 3.3 contrast colour
>colour that contrasts with the safety colour in order to make the safety colour more conspicuous
##### 3.4 externally illuminated safety sign
>safety sign that is illuminated, when required, by an external source
##### 3.5 internally illuminated safety sign
>safety sign that is illuminated, when required, by an internal source
##### 3.6 luminance contrast k
>luminance of the contrast colour, L1, divided by the luminance of the safety colour, L2, where L1 is greater than L2
k = L1 / L2 [SOURCE:ISO 17724:2003, definition 43]
##### 3.7 luminance factor β
>ratio of the luminance of the surface element in a given direction to that of a perfect reflecting or transmitting diffuser identically illuminated [SOURCE:ISO 17724:2003, definition 44]
##### 3.8 maintained safety sign
>sign in which the integral lamps are energized at all times when normal or emergency mode of operation is required
##### 3.9 non-maintained safety sign
>sign in which the integral lamps are in operation only when the power supply to the normal lighting fails
##### 3.10 object colour
>named colour of safety sign elements specified in terms of chromaticity coordinates x, y of the CIE 2° standard colorimetric observer and either luminance factor or luminance
##### 3.11 ordinary material
>material which is neither retroreflecting nor fluorescent nor phosphorescent nor involves powered light emission nor is activated by a radioactive source
##### 3.12 phosphorescent material
>material incorporating phosphors that, if excited by UV or visible radiation, store energy, which is emitted as light over a period of time
##### 3.13 safety colour
>specific colour with special properties to which a safety meaning is attributed [SOURCE:ISO 17724:2003, definition 66]

#### Bibliography
> [1]	ISO 16069, Graphical symbols — Safety signs — Safety way guidance systems (SWGS)
[2]	ISO 17398, Safety colours and safety signs — Classification, performance and durability of safety signs
[3]	ISO 23601, Safety identification — Escape and evacuation plan signs
[4]	ISO 30061, Emergency lighting
[5]	MUNSELL, Book of colour
[6]	ANSI Z535.1, Standard for Safety Colors
[7]	BS 5252, Framework for colour co-ordination for building purposes
[8]	CIE 13.3, Method of measuring and specifying colour rendering properties of light sources
[9]	CIE 39-2, Recommendations for surface colours for visual signalling
[10]	CIE 51.2, A method for assessing the quality of daylight simulators for colorimetry
[11]	CIE 127, Measurement of LEDs
[12]	CIE 179, Methods for characterizing tristimulus colorimeters for measuring the colour of light
[13]	DIN 6164 (all parts), DIN colour chart
[14]	IEC 60050-845, International electrotechnical vocabulary — Chapter 845: Lighting/CIE 17.4 International lighting vocabulary
[15]	JIS Z 9103, Safety colours — General specification
[16]	SS 19102, NCS ATLAS

## 色のことわざ(color study)
「色彩」のことわざ・慣用句・故事成語・四字熟語一覧
http://kotowaza-allguide.com/keyword/color/index.html

### 朱色(vermilion)と赤(red)
「朱に交われば赤くなる」という言葉がある。朱色は重要な色である。印鑑を押す朱肉、神社の柱の色、書道の直しの朱筆など日本的な生活では中心的な役割を働いている。御朱印帳という風習も大事。

<font color="#F26649"> 朱　マンセル値:6R 5.5/14, 16進数 #F26649</font>と <font color="#FF4B00">赤 マンセル値　8.75R 5/12 #FF4B00</font>はマンセル値は近く、１６進数値としてはそこそこ離れている。見た目には近い。

### 青(blue)と藍(indigo)
「青は藍より出でて藍より青し」
藍染の浴衣は、日本の夏を色彩る。木綿であれば涼しげ。
<font color="#1971FF">青(blue) マンセル値 2.5PB 4.5/10  #1971FF</font>と<font color="#234794">藍(indigo) マンセル値 6.9PB 3/10.3  #234794</font>はマンセル値は近く、１６進数値としてはそこそこ離れている。明度の違いは際立つ。

### 紺(mazarine)と白(white)
「紺屋の白袴」
この記事自体が紺屋の白袴にならないように、追記中。

## マンセル値（Munsell color system）
色の三属性（色相、明度、彩度）の組み合わせ

＜この項は書きかけです。順次追記。＞
### 色相(hue)
虹の七色をはじめ、光の三原色:赤(red)、緑(green)、青(blue)、色の三原色:青緑(cyan)、紫(magenta)、黄(yellow)など。

### 明度(lightness, blrightness)
明度10の白と明度０の黒の間を感覚的に等間隔に区分する尺度。

### 彩度(chroma)
鮮やかさ。色相は周波数、明度は光源であれば光度、それ以外では反射光など物理的な測定値との関係がわかりやすい。彩度は直接的な体系として説明しにくい。体系によって定義、最大値などが違う。マンセル値では、
色相と明度によって彩度の最大値が違う。5Rでは14、5BGでは10。

HSL色空間とHSY色空間の変換式
https://qiita.com/lookman/items/d518f16c897c94bc4e78

彩度100%の色見本(HSV)
https://www.color-sample.com/saturation/100/

HSV(Hue, Saturation, Value)=HSL(Hue、Saturation、Lightness)=HSB(Hue, saturation, Brightness)

## 四色覚(four color sense) 
第四の色覚についての資料を記載する。

スーパービジョン 4色覚の分光モデル 〜相思鳥はいかに 紫外の世界を視ているか?
https://www.jstage.jst.go.jp/article/jcsaj/42/6/42_265/_pdf

>哺乳類の共通祖先の脊椎動物は 4 色覚をもち，初めて 色を識別したのは，カンブリア期の魚類とされる

# 事例(case study)
Color(Apple Human Interface Guideline)
https://developer.apple.com/design/human-interface-guidelines/macos/visual-design/color/
「Be aware of colorblindness. Many colorblind people find it difficult to distinguish red from green (and either color from gray), or blue from orange. Avoid using these color combinations as the only way to distinguish between two states or values. 」

Windows10アプリUXデザインガイド, Microsoft, P329
https://msdn.microsoft.com/ja-jp/mt634411.aspx
> 「色を情報を伝える唯一の手段として使わないようにします。 色覚に障碍があるユ ーザーは、色によるステータス インジケーターのような色を通じてのみ伝えられ る情報は受け取ることができません。他の視覚的な合図 (テキストが望ましい) を含 めるようにして、情報にアクセスできるようにします。」

色彩基準について　奈良県
http://www.pref.nara.jp/secure/57739/keikankizyun2.pdf
http://www.pref.nara.jp/secure/24241/guidelines2.pdf

くまもとカラーガイド　熊本県
http://www.pref.kumamoto.jp/kiji_12052.html

色の表示方法について　北九州市
http://www.city.kitakyushu.lg.jp/files/000081888.pdf

 第4章 色彩の基礎知識　各務ヶ原市
https://www.city.kakamigahara.lg.jp/dbps_data/_material_/_files/000/000/001/101/05.pdf

色彩ガイドライン　成田市
https://www.city.narita.chiba.jp/content/000063255.pdf

建物の色彩について　豊島区
https://www.city.toshima.lg.jp/296/machizukuri/toshikekaku/shisaku/tochiriyo/documents/ike-ekisyuuhen-saido.pdf

大田区色彩ガイドライン
https://www.city.ota.tokyo.jp/seikatsu/sumaimachinami/machizukuri/keikan/keikanguidline.files/keikan_color_guideline.pdf

### 色無障壁(color barrier free) 色万能設計(color universal design)
カラーバリアフリー 神奈川県 保健福祉部地域保健福祉課
https://www.nig.ac.jp/color/guideline_kanagawa.pdf

カラーバリアフリーって何だろう
伊藤啓東京大学分子細胞生物学研究所 NPO法人カラーユニバーサルデザイン機構 (CUDO)
http://www.pref.kanagawa.jp/docs/n7j/cnt/f6880/documents/576625.pdf

新聞広告の カラーユニバーサルデザイン 第一版 2008年7月28日 北海道新聞社営業局
https://adv.hokkaido-np.co.jp/etc/cud.pdf

2018年4月18日(水) 番組のカラーユニバーサルデザイン対応
より多くの方へ正確な情報を 「あなたとHTB」、夜の「HTBニュース」で始まる
https://www.htb.co.jp/htb/kouhou/pdf/2018/20180418_01.pdf

MUD（メディア・ユニバーサルデザイン）の取り組み　＞　実例
http://www.hpp-c.jp/mud2.html

東京都カラーユニバーサルデザインガイド
http://www.fukushihoken.metro.tokyo.jp/kiban/machizukuri/kanren/color.files/colorudguideline.pdf

カラーユニバーサルデザイン推奨配色セット　東京大学分子細胞生物学研究所
http://jfly.iam.u-tokyo.ac.jp/colorset/

ユニバーサルデザインによる色覚バリアフリー　公益財団法人　和歌山県人権啓発センター
http://w-jinken.jp/color/

カラーユニバーサルデザイン ガイドブック　福島県
https://www.pref.fukushima.lg.jp/uploaded/attachment/2574.pdf

カラーユニバーサルデザイン ガイドブック　鳥取県
https://www.pref.tottori.lg.jp/secure/954753/CDU01_CUD20.pdf

カラーバリアフリー　調布市
http://www.city.chofu.tokyo.jp/www/contents/1381397666037/index.html

広報印刷物等制作時にかかる色の配慮について　札幌市総務局広報部広報課
http://www.city.sapporo.jp/koho/color/index.html

カラーバリアフリーガイドver1.01
http://www.geocities.jp/cbfgver101/

すべての人にや さし い 情 報 を 届 けよう ~視覚情報のユニバーサルデザインガイドブック~ 愛知県健康福祉部障害福祉課　2018年2月発行
https://www.pref.aichi.jp/uploaded/life/209128_568410_misc.pdf

上記愛知県の資料は、文書作成技術面で課題がある。課題を指摘している記事はこちら。

色(color)万能設計(universal design)手引き(manual)指針(guide)
https://qiita.com/kaizen_nagoya/items/0678708a7c1afa4d1e2c

### 色見本（color for reference）
札幌市の景観色７０色
https://www.city.sapporo.jp/keikaku/keikan/panfu/documents/70shoku.pdf

日本塗料工業会発行の色見本帳
http://www.toryo.or.jp/jp/color/index.html

COLOR FINDER WEB REFERENCE, 東洋インキ
https://www.toyoink1050plus.com/color/color-finder/

色見本・色票　日本色彩研究所
http://www.jcri.jp/JCRI/seihin/IROMIHON/sikihyo.htm

色のページ（国鉄色）　鐵道CAD製作所
http://www.geocities.jp/rail_cad/color/color.html

イメージスケール　日本カラーデザイン研究所
http://www.ncd-ri.co.jp/about/image_system/imagescale.html

カラーコード一覧表　HTML,CSS　ホームページの背景色や文字色 （フォントカラー）
http://www.netyasun.com/home/color.html

「matplotlib 色 一覧」で検索するのはもう止めよう
https://qiita.com/take_me/items/481e248bf56aca56b1ee

25年ほど前、公設試験研究機関のデザイン部門の職員が受講する中小企業大学校（現在の独立行政法人 中小企業基盤整備機構）デザイナ指導者養成コース（３ヶ月合宿）を受講した。１日、日本カラーデザイン研究所の方が講師の、イメージスケールの講習を受講したことがある。その時は、イメージスケールというやり方(system)も役に立つかもしれないが、もっと違うやり方(system)で配色を決めたいと思った。

公設試験研究機関デザイン部門一覧（作成中）
~~https://researchmap.jp/jo6r1nhl3-45644/#_45644~~
https://researchmap.jp/blogs/blog_entries/view/78451/5d82b453f3988c6df053e49764b844e2?frame_id=407644 

### 教科書(text book)
教科書のユニバーサルデザイン化が進んでいるとのこと。
土井諭【現代文講師】@stmdcon 
<img width="400" alt="Dzqmoq1VYAEr7Rx.jpg" src="https://qiita-image-store.s3.amazonaws.com/0/51423/40e1018b-5472-ed8e-941e-374416889775.jpeg">

p.268 第11章　欧米における近代国民国家の発展　イタリアとドイツの統一

<img width="400" alt="Dzqmoq1U8AArz6h.jpg" src="https://qiita-image-store.s3.amazonaws.com/0/51423/418c92f2-9a21-95c4-e38e-0b495ae860ed.jpeg">
https://twitter.com/stmdcon/status/1097372691651121152

高校世界史
https://www.yamakawa.co.jp/product/70032

山川出版社にお問い合わせさせていただいたところ、

>詳説世界史B　81　世B 304  2013
2012年（平成24年）３月27日　文部科学省検定済　ISBN 978-r-634-70027-7

とのことでした

教科書の図表は番号がついていないことが引用しにくい課題かも。
第何刷かの記載もない。印刷20140301, 発行 20140305の冊子で現物確認

### 中国と日本における色に関する文化比較
安全色のリスク認知における日本と中国の交叉文化的研究, 船越美保子（指導：斎藤　美穂）
https://waseda.repo.nii.ac.jp/?action=repository_uri&item_id=23840&file_id=162&file_no=1&usg=AOvVaw02qHXhl8XE1kASwF3lV5Vx

落合信寿、船越美保子、齋藤美穂, 2007, 安全色のリスク認知における北京と東京の比較：予備調査報告、日本色彩学会誌、31, pp268-275
http://dl.ndl.go.jp/view/download/digidepo_10748860_po_ART0008955229.pdf?contentNo=1&alternativeNo=

色彩学入門―色と感性の心理,大山正, 齋藤美穂,東京大学出版会(2009/05/01)
https://www.amazon.co.jp/dp/4130820702

p. 186 
>「図9.2 ,東京と北京における色の潜在危険度の比較（落合ら, 2007)」

>「東京と北京における色の潜在危険度を比較した結果を図9.2に示す。これにより、８色の洗剤危険度の順位は、東京では赤（R)＞黒（Bk),黄（Y)＞赤紫（RP)、オレンジ（O)＞青（B）、緑（G)＞白（W)の順であり、北京では黒、赤＞白、黄、赤紫、オレンジ＞青、緑の順であった」

p187
> 「安全色のリスク認知に関する普遍性と文化的差異について明らかにすることは、安全色の国際標準を確立する上で十分検討の余地があるだろう．」

ゲームの色を決め、出荷する場合に、中国濾紙(china filter), 日本濾紙(Japan filter)を選択できるようにするとよいかもしれない。

中国が赤を基調とする国旗、日本が白と赤の国旗による影響を始め、建物の色、お祭りの色など文化的要因を精密に分析するとよい。

### アニメ　ポケモン　点滅　事件
日比野治雄、佐野裕子、2000、ポケモン事件の視覚的ストレスに関する認知的要因, アニメーション研究, 2, p5-11

色彩学入門―色と感性の心理,大山正, 齋藤美穂,東京大学出版会(2009/05/01)
https://www.amazon.co.jp/dp/4130820702

p.191
ポケモン事件　
> 「1997年12月子供向けアニメーション番組　ポケットモンスターを視聴した子供たちを中心に軽重さまざまな症状（けいれん発作・意識障害から眼の痛み・不快気分など、さまざまな程度の健康被害）を訴える人々が現われ、全国で７００名近い患者が医療機関に搬送された」
「赤と青のきわめて明るい色を含むシーンが十数Hzの周波数で交互に繰り返される刺激（フリッカー刺激という）だった」

松阪ケーブルテレビ・ステーション株式会社　放送番組基準
https://www.mctv.jp/part/top/shingi_kijyun.pdf
別紙：アニメーション等の映像手法について
1998年4月8日 作 成 2006年4月1日 一部改訂
日本放送協会 (社)日本民間放送連盟

4K・8K放送における「アニメーション等の映像手法に関するガイドライン」 運用にあたっての基本的な考え方
https://www.nhk.or.jp/bs4k8k/assets/pdf/anime_guide.pdf

### テレビドラマでの英語表現　名探偵ポアロ(Agatha Christie's Poirot)　チョコレートの蓋(the chocolate box)
 #39　チョコレートの箱
名探偵ポワロ[完全版]DVD-BOX2

<img width="250" alt="21WDRX8M5AL.jpg" src="https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/51423/193b5ada-d5ce-ee6a-9096-a46025b59154.jpeg">

https://www.amazon.co.jp/dp/B000AMYZNQ/
>チョコレートの箱と蓋の色の違いがわからなかったくだりの英語表現を確認。
My eyesight is not good it was.
視力が悪いという表現をしている。
文化的な背景を調査予定。

20220727 追記：小説の原文でも確認予定。
https://agathachristie.fandom.com/wiki/The_Chocolate_Box

>The story was published in the U.S. in The Blue Book Magazine in February 1925.
 Poirot's Early Cases, published in 1974.
https://agathachristie.fandom.com/wiki/Poirot%27s_Early_Cases
https://www.gutenberg.org/ebooks/search/?query=Agatha+Christie&submit_search=Go%21
にはまだ掲載がないような気がする。

## 国旗(national flag)
世界の国旗の模様は正確に把握しているとよい。
ゲームなどで適当に作ったつもりの印が、どこかの国の国旗と同一であると、その国に対する特定の意思表明になる可能性がある。

世界の国旗一覧
https://www.abysse.co.jp/world/flag/index.html

### 赤十字(Red Cross logo)
ジュネーブ条約
http://www.mod.go.jp/j/presiding/treaty/geneva/
> 「戦地にある軍隊の傷者及び病者の状態の改善に関する千九百四十九年八月十二日のジュネーヴ条約（第一条約）第三十八条〔条約の標章〕
　スイスに敬意を表するため、スイス連邦の国旗の配色を転倒して作成した白地に赤十字の紋章は、軍隊の衛生機関の標章及び特殊記章として維持されるものとする。
２　もっとも、赤十字の代りに白地に赤新月又は赤のライオン及び太陽を標章として既に使用している国については、それらの標章は、この条約において同様に認められるものとする。」

赤十字の標章及び名称等の使用の制限に関する法律（昭和二十二年法律第百五十九号）
http://elaws.e-gov.go.jp/search/elawsSearch/elaws_search/lsg0500/detail?lawId=322AC0000000159&openerCode=1
> 「第一条　白地に赤十字、赤新月若しくは赤のライオン及び太陽の標章若しくは赤十字、ジュネーブ十字、赤新月若しくは赤のライオン及び太陽の名称又はこれらに類似する記章若しくは名称は、みだりにこれを用いてはならない。」

ゲームの中でも、赤十字の趣旨に沿って、赤十字の活動を示す使い方をしている場合には、使用の制限に該当しないと理解できる。ただ、当事者のかってな解釈で大丈夫と思うのではなく、赤十字に問い合わせて、使い方で赤十字に迷惑がかからないかの確認を取ると良い。

#### ヘルプマークと赤十字 
赤十字については、記事を書いた最初から紹介させていただいていました。インタネットは戦場につながっています。戦争について語らない技術は、戦争の一方に加担している可能性があることをご推察くださると幸いです。

この記事では日本産業規格　JIS Z 78210 案内用図記号付属書 JD(規定)　ヘルプマークについて記載していなかった。ごめんなさい。合わせて、厚生労働省のマタニティマークを紹介させてください。

標準化に関わっている方、標準を仕事で使っているはずの技術士の方、ゲーム・デザインでお仕事をしている方々に、伝わっていない事態を知り、追記させていただくものです。　

他にも、こんなことを知らせてはという色に関する標準等がありましたらお知らせください。

プログラマが知っているとよい色使い・形（JIS 案内用図記号）鉄道(15)
https://qiita.com/kaizen_nagoya/items/988a2cd7d0ec0a44afed

さすがに、鉄ちゃんはよくご存知の方が多く、敬意を表して、鉄道記事の一覧にも追記させていただきました。

##### ヘルプマーク(help mark)
日本産業規格　JIS Z 8210 案内用図記号

付属書 JD(規定　　
https://www.fukushihoken.metro.tokyo.lg.jp/shougai/shougai_shisaku/helpmark.html

平成29年7月20日、ＪＩＳ（案内用図記号）に採用

>ヘルプマークとは：援助や配慮を必要としている方が、身につけることで、周囲の方に配慮を必要としていることを知らせることができる表示。　

![helpmark.png](https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/51423/c4d6d52f-0a1c-1987-6da2-a282303bc2a1.png)

##### マタニティマーク
マタニティマークのデザイン及び利用方法について
https://www.mhlw.go.jp/bunya/kodomo/maternity_mark_riyou/index.html

![マタニティ.png](https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/51423/706fe3af-54c4-4f25-5fc1-6aadea459bd0.png)

 マタニティマーク使用規程
https://www.mhlw.go.jp/content/000615203.pdf

# 案内用図記号(pictogram)
JIS Z 8210:  案内用図記号-施設などの種類
http://www.mlit.go.jp/sogoseisaku/barrierfree/sosei_barrierfree_tk_000145.html
<img width="921" alt="jisannnai.png" src="https://qiita-image-store.s3.amazonaws.com/0/51423/653e11c7-b05a-5854-168e-cf951239676e.png">

安全
http://www.mlit.go.jp/common/001245708.pdf
禁止
http://www.mlit.go.jp/common/001245709.pdf
注意
http://www.mlit.go.jp/common/001245710.pdf
災害
http://www.mlit.go.jp/common/001245712.pdf

(参考)ヘルプマーク
http://www.mlit.go.jp/common/001245713.pdf

>
「案内用図記号の JIS 改正
-2020 年東京オリパラに向け、より円滑な移動を目指して-
国際規格(ISO)との整合の観点から、アンケート調査や関係者の意見を踏まえて審議した結果、 以下の通り、7 種類の案内用図記号を変更することが決定しました。
1国際規格(ISO)に整合(移行期間:2 年間※)
※従来 JIS の案内用図記号は、2 年間の移行期間(2017.7.20~2019.7.19)を経て、JIS から削除される
平成29年7月20日」（経済産業省）　
http://www.meti.go.jp/press/2017/07/20170720002/20170720002-2.pdf

ISO 20712-1:2008

## 材料(material)
 「蓄光材に関する日本工業規格と技術動向」
Japan Industrial Standards and Technology Trends about Phosphorescent Material, 井上 之彦 中込  徹, 技術士 2014年11月号

JIS Z 9107-1998(安全標識)
JIS Z 9095:2011(安 全標識 - 避難誘導システム(SWGS)- 蓄光式)
JIS Z 9096(床面に設置する蓄光式の安全標 識及び誘導ライン)
JIS Z 9097(津 波避難誘導標識システム)

### 材料による差異(Material difference)
JIS Z 9103:2018には一般材料、蛍光材料、再帰性反射材、蓄光材料、内照式安全標識、信号灯による色度座標範囲と輝度率の差の記載がある。JIS Z9103:2018附属書JA（参考）各材料の色見本では、一般材料、再帰性反射材、蛍光材料はあるが、蓄光材料、内照式安全標識、信号灯の色見本は付属していない。

## 交通信号機(related) wiki
https://ja.wikipedia.org/wiki/警告色
警戒色、危険色。JISでは異なる色に分類している危険と警告が一つの項目で未分化になっている。追記方針についてご助言またはWikiに直接編集をお願い。
https://ja.wikipedia.org/wiki/交通信号機

### 法改正と閲覧方法の変更
令和元年七月一日、工業標準化法が産業標準化法に変更になりました。
https://elaws.e-gov.go.jp/document?lawid=324AC0000000185

JISの閲覧には登録が必要になりました。

>令和２年１２月２日（水）から、ＪＩＳ（日本産業規格）及びＴＳ（標準仕様書）／ＴＲ（標準報告書）を閲覧いただく際には、利用者登録が必要となりました。 

以前は、Windows のIEでしか閲覧できませんでした。
現在は、他のOSの他のブラウザでも閲覧可能かも。

JIS 等無償閲覧機能 利用者登録操作マニュアル
https://www.jisc.go.jp/site/pdf/sousa-manual.pdf
2021 年2月4日

閲覧方法が変更になり、ブラウザの対応も増えている。

>ログインしていない状態で、PDFを選択するとログイン画面が表示されます。(音声PDFはログイン不要です。)
【重要なお知らせ】ＪＩＳ及びＴＳ／ＴＲ閲覧機能をご利用の皆様へ 
　令和２年１２月２日（水）から、ＪＩＳ（日本産業規格）及びＴＳ（標準仕様書）／ＴＲ（標準報告書）を閲覧いただく際には、利用者登録が必要となりました。 
　今回の措置は、ＪＩＳ等の著作権について、より適切な保護を図ることから行うものです。 
　※登録及び利用に費用は発生しません。 
　※登録後は、登録時に付与されるＩＤ及びパスワードを用いて閲覧できます。 
　※組織単位での登録は認めておりません。必ず利用者一人一人のご登録をお願いします。 
　なお、登録の手続きに関しましては、JIS等を閲覧をしていただきますと登録画面になります。詳細は利用者登録操作マニュアルを参考にしてください。 
　また、本件に係るご質問は、「お問い合わせ」ページより、カテゴリー【ＪＩＳ等閲覧の利用者登録】を選択し、お問い合わせください。
本サイトでは、JISの閲覧は可能ですが、印刷・購入はできません。
JISの購入は、（一財）日本規格協会 へお問合せください。
接続環境によっては表示まで時間がかかることがあります。
（そのまましばらくお待ちください。）

## 色弱模擬
フィルタ「バリアントール」
http://www.variantor.com/jp/

を名古屋市工業研究所で備えています。バリアントールを利用した相談は有償（目安は２０００円から２５０００円）となる場合があります。事前にご確認いただけると幸いです。

## 短縮名(short name)
各用語の最後に分類（c:color, s:standard, m: machine(computer or software), n:net, h:human）をつけます。

@:at (m)
3D: three dimension  (m)
A: achromatopsia (h)
ATK: Automotive Kernel (m)
B: Blue (c)
BG: Blue Green (c)
Bk: black (c)
c: copyright
CAD: computer aided design (m)
CC: Creative Cloud(Adobe) (m)
CIE: Commission internationale de l'lairage (s)
CMY: cyan magenta yellow
com: commercial (n)
css: Cascading Style Sheets (m)
CUDO: color universal design organization (s)
D: deutan (h)
go, gov: government (n)
G: green (c)
Gy: gray/grey (c)
HAZOP: Hazard and Operability (s)
HCD: human centered design (s)
HSB: Hue, saturation, Brightness (c)
HSL: Hue、Saturation、Lightness (c)
HSV: Hue, Saturation, Value (c)
html: hyper text markup language (n)
http: hyper text transfer protocol (n)
IDT: identical (s)
IEC: International Electrotechnical Commission (s)
IoT: Internet of Things (n)
ISO: International Organization for Standardization (s)
JBMS: Japan Business Machine and Information System Industries Association (s)
JIS: Japan Industrial Standard (s)
JISC: Japanese Industrial Standards Committee (s)
jp: japan (n)
JSA: Japan Standard Association (s)
L: long (h)
lg: local government (s)
M: middle (h)
MOD: Modified (s)
NDS: National Defense Standard (s)
NPO: NonProfit Organization (s)
or: organization (n)
P: page
P: protan (h)
P: purple ©
PB: purple blue
PC: Personal Computer (m)
PDF:Portable Document Forma by Adobe (m)
R: Red (c)
RP: red purple (c)
RBG: Red Blue Green (c)
S: short (h)
T: tritan (h)
TBT: Technical Barriers to Trade (s)
TM: trade mark (s)
TOPPERS: Toyohashi OPen Platform for Embedded Real-time Systems (s)
UI: User Interface (m)
UX: user experience (m) 
URL: Uniform Resource Locator (n)
Wiki: Wikipedia (m)
Wt: white (c)
WTO: World Trade Organization (s)
Y: yellow (c)
YG: yellow green (c)
YR: yellow red (c)
Z:JISのZは順次番号で、略号ではない。分類は「その他」そのうち9110は「共通的試験方法」に相当。C（電気）M（鉱山）W（航空）X（情報処理）
http://www.jiskikaku-s.co.jp/mysite1/jis-kigou-bangou.pdf
スマフォ：smart phone

## 1月６日は「色（いろ）」の日
1月６日は「色（いろ）」の日(1)参考資料
https://qiita.com/kaizen_nagoya/items/fcfe3901a0d7468d1528

1月６日は「色（いろ）」の日(2)視覚細胞
https://qiita.com/kaizen_nagoya/items/55efca064b3a19eb4b90

1月６日は「色（いろ）」の日(3) 色体系(color system)いろいろ
https://qiita.com/kaizen_nagoya/items/5746ba51e797eb41fb1d

# 解説(report)
Appleが白黒の機材から多色の機材に進化した時、多色版の画面、ソフトでも、白黒にしても識別できるかどうかを一つの基準にしていたという記憶がある。現在のAppleのWeb上では下記「事例」の項に記載しています。

画面でも、印刷物でも、多色設計した後で、白黒表示（印刷）して確認する習慣を持つようになった。

新人向けの設計(Design)系の講習をする際に、安全色（主に赤）の使い方とともに、一度は白黒表示（印刷）するように伝えている。今回のJISの安全色の改定は、ちょうど広めるのによい事項だと感じた。

## 考察(consideration)
会社のロゴ、登録商標などで赤を使っている場合には、指定の赤を使うしか仕方がない。
ただし、国や地方によっては広告などで赤を使うことを禁止している場合がある。赤信号を見落としたり、危険な信号を見落とすためかもしれない。

会社のロゴ、登録商標以外は、危険を示す以外に文書、広告などで赤を使わない方がよいというのが経験則です。

商品説明で、赤を使っていると、なんとなく押し付けがましいように感じることがある。
逆に、操作間違いや、やってはいけないことには赤を使うと効果的でしょう。

軽井沢町で看板を出すときのきまり
http://www.town.karuizawa.lg.jp/www/contents/1001000000571/simple/kanbansassi.pdf
## 立場の違いによって見えるものが違う（Difference in appearance due to differences in viewpoint）

立場１（左）から見ると、全体はAで、色は黄色（薄い色）、Bは中心の部分で色は黄緑（濃い色）
立場２（右）から見ると、全体はBで、色は空色（やや薄い色）、Aは中心部分で色は黄緑色（濃い色）

立場が違えば、集合関係も違うように見えるかもしれないし、色も違うように見えるかもしれない。

<img width="568" alt="視点の違い.png" src="https://qiita-image-store.s3.amazonaws.com/0/51423/38c6c560-22cf-3c19-1b7a-ca64539fee53.png">
 HAZOP 質疑応答編&記録編(3.6a) Safety and Security 
https://www.slideshare.net/kaizenjapan/hazop-tokyo201809 p.174

　この資料は、三次元のA、Bを二次元表記したものです。全体像は、横から、左下は左から、右下は右から見た像の二次元表記です。屈折率等を考慮すると、下の左右の中心像はもっと大きくなるというご指摘をいただいています。三次元描画ソフトでこの資料を作成してくださる方を募集しています。
## 環境(environment)、前提条件(prerequisite)、制約(constraints),要請(requirements)
画面出力（発光体、投影の場合は反射光）、印刷物、製造物（広告のためのネオンサインを含む）の作成のため、プログラミングをする計画者(programmer)が知っているとよい色使いのうち、安全色を中心に資料を集め、説明し、考えるきっかけを作ろうとする。
前提条件としては、プログラムをしたことがなく、Webを閲覧したり、ゲームしかしていないプログラムの利用者も含む。Webを閲覧したりゲームをしていて、プログラムを利用するだけでなく、プログラムする側に回れば、いろいろな知識や経験を生かすことができるきっかけになることを期待する。
ゲーム世界では、現実世界のすべての事象の模擬試験(simulation)をすることができ、現実世界で必要な技術、知識、色使いを試すことができる。

環境は多色画像・印刷だけでなく、白黒画像・印刷の場合を含む。多色画像を白黒表示しても、識別できるような色使いが、結果として利用者にわかりやすいプログラムとして好まれる可能性が高くなるかもしれない。

自分と相手が見えているものが同じだと思うのは、仕事としてプログラムする場合には好ましくないかもしれない。自分と相手が見えているものが違うという前提に立って、相手の制約、要請を考えてみませんか。
## 未着手課題(Unfinished task)
### 発光体と輝度(luminant and luminance)
材料による違いの詳細と、発光体と輝度について未整理。
#### White out
雪の日などに、目の前が白いものであふれて、何も見えなくなる状態。

'This is an Absolute Whiteout': Blizzard Pummels South Dakota Last Week
https://www.youtube.com/watch?v=A3gMxvgXrCI

#### black out
電源断などで明かりが全くなくなり、真っ暗になること。または電源断の状態。

How Power Blackouts Work
https://www.youtube.com/watch?v=R_HGnc63QKU

#### brown out
電圧が低下すると電球が暗くなり、茶色っぽくなることを指す。
ネットで探しても、lEDの話題ばkりでいい映像がみつかっていない。

arXivで８文献あった。

似た用語で自動車のタイヤの破裂(burst)をblowoutと呼ぶ。似ている用語で要注意。nativeにはRとLが違うだろって突っ込まれる。
Top Causes of Car Accidents: Tire Blowouts
https://seriousaccidents.com/personal-injury-resources/top-causes-of-car-accidents/tire-blowouts/

#### Redout
負の重力がかかった状態の血流などの現象。
#### greyout
光、色が暗くなっていく状態。blackoutの過程の場合がある。
血圧低下に伴う視力の低下の場合もある。Redoutの逆現象であることがある。
#### greenout
薬物に関する用語で、Whiteout、Whitey

### 補色(complementary color)
色使いで、補色は大事。捕色に関する資料は未整理。Qiitaの関連記事は下記。
16進数カラーコードから補色を算出する
https://qiita.com/AkihikoIkeda/items/8c3eb61812cf44129e0a
### HSY
Yが何の略号か未調査
### 色の測定方法
JISの手法等未調査。
### 印刷物の発色(printing color)
紙の色による発色の違い、布の生地による発色の違いなど、色の材質について調査中。
##「赤錐体が一番多 く全体の60%を占め，緑錐体は30%，青錐体は10%」
(色覚の多様性と色覚バリアフリーなプレゼンテーションに記述あり。参考文献一覧追記)
### 色に関する規格動向(Standards trend of color)
視覚や色の規格化の最新動向
https://home.jeita.or.jp/device/lirec/symposium/fpd/pdf/2018_4a.pdf
# 検討する立場
## 目が見えない方の立場(view of invisible people)
視覚への疑い（『目の見えない人は世界をどう見ているのか』を読んで）
https://blog.hidenorigoto.com/entry/2017/02/23/002838

見えにくさの分布にもとづいた確認方法など。

## 耳が聞こえない方の立場(vew of deaf)
視覚に訴えて表現していることを、聴覚にどう訴えるか。

### 聴覚の多様性
#### 蚊音(mosquito tone)
聞こえ年齢チェックしませんか？
https://www.signia.jp/mosquite-noise/

家族から、
「電子機器が煩い。」
「電源を切れ。」
「音がしない電子機器を設計しろ。」
と言われたことがある。

### 目が見えず、かつ、耳が聞こえない方の立場(view of deaf-blindness)
触覚での対話など。

### 2019年6月12日　資料追記
カラーユニバーサルデザイン推奨配色セット ガイドブック 第２版 2018年8月発行
https://jfly.uni-koeln.de/colorset/CUD_color_set_GuideBook_2018.pdf
https://jfly.uni-koeln.de/colorset/
>カラーユニバーサルデザイン推奨配色セット制作委員会
■ 東京大学分子細胞生物学研究所　脳神経回路研究分野　伊藤啓 https://jfly.uni-koeln.de/lab/
■ 社団法人日本塗料工業会（JPMA）https://www.toryo.or.jp
■ DIC 株式会社（DICグラフィックス株式会社・DICカラーデザイン株式会社）http://www.dic-global.com/ja/
■ 特定非営利活動法人カラーユニバーサルデザイン機構（CUDO:Color Universal Design Organization）http://www2.cudo.jp/wp/
■ 石川県工業試験場　前川満良 http://www.irii.jp/staff/home/mmm/m2home.htm

p.14
>Q9 推奨配色セットとJIS安全色(JIS Z 9103:2018)は、どのように違うのでしょうか？
A　様々な色覚の人にも違いが見分けやすいように調整された色のセットを、ユニバーサルデザインカラーといいます。推奨配色セットはできるだけ多様な目的に使えるように２０色を、一方、JIS安全色（一般材料）は安全標識で用いられる８色を収録しています。色数が異なるそれぞれのセット内で、各色が最も見分けやすくなるように調整されているため、色名は同じでも色あいが多少異なる場合があります。例えば青系の色では、JIS安全色は青のみですが、推奨配色セットでは青と空色があるため、空色との明度差をつけて青を少し暗めにしてあります。
※　JIS安全色ではマンセル値のみが規定されています。印刷用CMYK値と画面用RGB値は新JIS安全色普及委員会(http://safetycolor.jp/ )から提供されています。

具体的には　http://safetycolor.jp/shiteichi/
![スクリーンショット-2019-03-01-13.16.11-1.jpg](https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/51423/3f6a2010-0526-dc89-7da8-d4a1837a5b9f.jpeg)


## 1月６日は「色（いろ）」の日
1月６日は「色（いろ）」の日(1)参考資料
https://qiita.com/kaizen_nagoya/items/fcfe3901a0d7468d1528

1月６日は「色（いろ）」の日(2)視覚細胞
https://qiita.com/kaizen_nagoya/items/55efca064b3a19eb4b90

1月６日は「色（いろ）」の日(3) 色体系(color system)いろいろ
https://qiita.com/kaizen_nagoya/items/5746ba51e797eb41fb1d


# 資料見直し依頼(Call for review)
このQiita文書の Reviewをお願い中。
１　わかりにくい単語、言い回し
２　説明のない用語、定義（原則、参考文献、URLを示すものを除く）
３　略号でfull spellingのないもの(20180824済のはず）
４　誤植、誤字、Spelling misstake
５　わかりやすい図の提供
６　大事だと思う参考資料・書籍・URL

読書メーターにここへのURLを100箇所記載することを計画
1
JIS Z 9101:2018 (IDT)図記号 - 安全色及び安全標識 - 安全標識及び安全マーキングのデザイン通則 日本産業標準調査会
https://bookmeter.com/books/18248191
2
JIS Z 9103:2018(MOD)図記号-安全色及び安全標識-安全色の色度座標の範囲及び測定方法　日本産業標準調査会
https://bookmeter.com/books/18248221

3
 塚田敢 著 1986 『色彩の美学』 東京:紀伊国屋書店
https://bookmeter.com/books/1113849

4
未来短歌会　歌誌　未来2019年5月号
https://bookmeter.com/books/13887011

5
色彩学概説　千々岩 英彰　東京大学出版会(2001/04)
https://bookmeter.com/books/215956

# 参考資料(reference)

公設試験研究機関　デザイン部門
https://qiita.com/kaizen_nagoya/items/2db39f32e0b821fd9029
## 書籍　資料
色彩学入門―色と感性の心理　東京大学出版会(2009/05/01)
~~https://researchmap.jp/jo810layq-51292/#_51292~~
https://researchmap.jp/blogs/blog_entries/view/78881/1e7524bcced9a148adcdc2827c6a0564?frame_id=412479

カラー・ヴィジョン―色の知覚と反対色説
レオ・M.ハーヴィッチ
誠信書房(2002/09)
https://www.amazon.co.jp/dp/4414302935/

## JBMS-80 参考文献
高齢者・障害者等配慮設計指針―視覚表示物―色覚の多様性に配慮した色の組合せと表示方法
2019年廃止

#### 参考文献の参考文献
[1] JIS C 0448:1997 表示装置(表示部)及び操作機器(操作部)のための色及び補助手段に 関する規準
[2] JIS S 0033 高齢者・障害者配慮設計指針-視覚表示物-年齢を考慮した基本色領域に基 づく色の組み合せ方法
[3] JIS X 6910 事務機器-複写機・複合機の仕様書様式及びその関連試験方法
[4] JIS Z 8110:1995 色の表示方法-光源色の色名
[5] JIS Z 8701:1999 色の表示方法-XYZ表色系及びX10Y10Z10表色系
[6] JIS Z 8729:2004 色の表示方法-L*a*b*表色系及びL*u*v*表色系
[7] ISO 3864-1:2002 Graphical symbols-Safety colours and safety signs-Part 1:
     Design principles for safety signs in workplaces and public areas
図記号-安全色及び安全標識-第 1 部:職場及び公共区域の安全標識の設計原則
[8] ISO 3864-2:2004 Graphical symbols-Safety colours and safety signs-Part 2:Design principles for product safety labels 図記号-安全色及び安全標識-第 2 部:製品安全ラベルの設計原則
[9] ISO 3864-3:2006 Graphical symbols-Safety colours and safety signs-Part 3: Design principles for graphical symbols for use in safety signs 図記号-安全色及び安全標識-第3 部:安全標識に使用する図記号のためのデザイン原則
[10] ANSI Z535.1 ANSI Z 535:2002 Series ANSI Z535 Series ANSI 安全標識・警告ラベル基準(全 5 規格)
[11] EN12368:2000 Traffic Light Color :European traffic signal color requirement European Standard
[12] SAE J578 Color Spec SAE ground vehicle lighting color standards (The Engineering Society For Advancing Mobility Land Sea Air and Space)
[13]事務機械製品の安全確保のための表示に関するガイドライン〈第3版〉 平成 12 年 12 月改訂 社団法人日本事務機械工業会  http://www.jbmia.or.jp/~tc/gl-hyouji.pdf
[14]シュレッダ可動部の安全性に関するガイドライン〈第2版〉
平成 19 年 8 月改訂 社団法人日本事務機械工業会  http://www.jbmia.or.jp/new/sh_GL.pdf
[15]W3Cガイドライン Web Content Accessibility Guidelines 2.0  http://www.jsa.or.jp/stdz/instac/commitee-acc/W3C-WCAG/WCAG20/index.html
[16] 塚田敢 著 1986 『色彩の美学』 東京:紀伊国屋書店
https://bookmeter.com/books/1113849

### 塚田敢 著「色彩の美学」
業界標準の参考文献になぜ掲載されているかを調べた。

1) 構成
第1章色彩の歴史、
第2章色彩の基礎、
第3章色彩美の創造
という構成がよい。量的には、第3章がもう少しあると嬉しい。

２）参考文献
各章の参考文献が英語、日本語の量。古典から著作年までの網羅性。理論、心理、応用までの幅広さなど、現在でもほとんど色褪せない。
参考文献のうち、改訂を重ねて再販しているものもあり、近年再販しているものもある。
https://researchmap.jp/blogs/blog_entries/view/78451/b21a36423de4ecce38ea80b24f850f63

３）図表
目次前には多色刷りの色相対比、明度対比、彩度対比、補色対比の例がある。２章、３章は、適切な図表がある。

４）塚田敢略歴
著者が東京高等工芸学校（千葉大学工学部の前身）工芸図案科で、宮下孝雄教授の「色彩学」を受講し、大阪の塗料会社で塗装の研究を２年ほどしたのち、母校で約３０年勤務。
東京大学第二工学科建築学科　星野昌一教授のもとで半年、色彩学。
東京大学工学部計測工学科の研究員として４年、日置隆一教授のもとで色彩学。
東京教育大学心理学科、小保内虎夫教授のもとで知覚心理学を１年。
造形のための色彩計画が専門。

塚田敢 博論：建築色彩の視覚効果に関する基礎事項の研究、東工大。昭和37年3月31日。

### 塗装と機械学習と品質と配色
<img width="400" alt="196505516_4020123721401577_5687086552191931638_n.jpg" src="https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/51423/4ba6ed01-ce63-0b49-9ad7-7328c72d5352.jpeg">
技術士(金属部門・総合技術監理部門) 小柳 拓央さんの呟きで、
塗装における機械学習と品質と配色がつながった感じがした。

プログラマにも読んでほしい「QC検定にも役立つ！QCべからず集」
https://qiita.com/kaizen_nagoya/items/d8ada7b7fceafe2e5f0e

製造業における機械学習
https://qiita.com/kaizen_nagoya/items/fbe846de16f74bea1d6f

経験と度胸と感が分布と確率に裏打ち可能な証拠能力が一番高いという仮説。
https://qiita.com/kaizen_nagoya/items/f5ec32472774d17e46ec

### 色彩学概説
千々岩 英彰
東京大学出版会(2001/04)
https://researchmap.jp/blogs/blog_entries/view/78451/a575faef6f310359cdd42a316f7b9b17
https://bookmeter.com/books/215956

説明歌「色と音、香りと味と軽重感時間温冷嗜好と作用」

デザイナー指導者養成講座の教科書

>p. 42
表1.3 先天性色覚障害の頻度( 太田 1980)
太田安雄、 新編色彩科学ハンドブック、東京大学出版会, p473
ノルウェー,　8.01
米国（白）,  8.20
日本, 4.25
米国（黒）, 3.91
コンゴ, 1.7
報告: 1927-1955、人数:148-9049などばらけている。

### 色再現工学
色再現工学の基礎
大田 登
コロナ社(1997/08/01)
https://researchmap.jp/blogs/blog_entries/view/98225/576823e89c77f5eb209cd8f1b6f93a58?frame_id=424477

廃番色再現レシピ
https://www.bonnycolart.co.jp/upload/files/190806190023.pdf

ビビッドカラー印刷
https://www.wave-inc.co.jp/data/dtp/vivid.html

カラーマネジメントシステム 新藤慶昌堂
http://www.shindo.co.jp/quality/index.html

広演色インキ「Kaleido」や多色印刷「Kaleido Plus」
https://www.toyoink1050plus.com/information/information/20180502117.php

## twitterから
https://twitter.com/kaizen_nagoya/status/1033483195805659136
「プログラマが知っているとよい色使い(安全色)」って記事書いた時、全部ゲーム開発には役立つことをすぐかけた。すべての計画(program)はゲームから始まる。ゲームは現実世界の模擬試験(simulation)。

## 謝辞(thanks)・お詫び(apology)
わけわからない段階から、この項目にいいねいただいた方、編集リクエスト・コメントいただいた方、twitterでいいね、RTいただいた方、facebookでいいねいただいた方、はてなブログでいいね・コメントいただいた方、ありがとうございます。

QiitaのProfileが英語だけでごめんなさい（名刺も）。twitter http://twitter.com/kaizen_nagoya は、日本語です。

日本技術士会の方から、この記事に、技術士（情報工学）を明記するように指導を受け追記しました。

なぜプログラマ（ウェブデザイナ）が配色に強くなれるか。
https://qiita.com/kaizen_nagoya/items/85e3603d59599b964149

英語(29)日本語と英語の色名または翻訳候補（黄色系）
https://qiita.com/kaizen_nagoya/items/88c122e40be51c3671bc

データサイエンティストの気づき『勉強だけして仕事に役立てない人。大嫌い』それ自分かもってなった。
https://qiita.com/kaizen_nagoya/items/d85830d58d8dd7f71d07

からリンクを貼ったのは、どんなことでも 役立てる方法はあるのに、それをしないのはどうよと思った時、自分のことをはっと思うと、批判しようとする対象が明確になるのは、自分にその批判対象と同じような傾向があるときかもって思ったからでした。多様性を認めないのは、自己中心主義だけではない。自分が世間と同じだと思い込みたい安心感の追求からの場合もある。
 色覚の多様性は、なかなか気づけない。他の人が見えてる景色が、 視覚を経た後でどうなっているかは、常時は本人しか知らない。本人も、知覚が視覚で見えたものを処理して変えていることを自覚していないこともあるらしい。
 
# スタイルシート
JIS安全色で色指定したスタイルシート
https://qiita.com/ounziw/items/d5bc56db992173b8d0b4

# 「色　いろいろ」 
Calendar 2021 
https://qiita.com/advent-calendar/2021/colour

に協賛しています。ぜひ、ご投稿ください。 I would be co-supporing. Please post.

「色　いろいろ」Calendar 2021 を満席にする4つの方法
https://qiita.com/kaizen_nagoya/items/8294b80c5fb8499298a9

もご参考まで。See above.

JIS安全色
https://qiita.com/kaizen_nagoya/items/45e546921c536ab4aba7

プログラマが知っているとよい色使い(白黒で確認)
https://qiita.com/kaizen_nagoya/items/b4564d409115b68acd01

プログラマが知っているとよい色使い(色彩検定)
https://qiita.com/kaizen_nagoya/items/bf2797225618a14b56ab

プログラマが知っているとよい色使い(関連自己資料・法令等)
https://qiita.com/kaizen_nagoya/items/56c9430066de5399e7b5

プログラマが知っているとよい色使い(目次詳細・文献URL改廃・参考文献・文書履歴)
https://qiita.com/kaizen_nagoya/items/12bd9bcca09cccabdcbe

名刺代わりの技術書10選
https://qiita.com/kaizen_nagoya/items/dc497dcaa5a304fc96c8

<この項は書きかけです。順次追記します。>
This article is not completed. I will add some words and/or centences in order.
Este artículo no está completo. Agregaré algunas palabras en orden.
# Qiita Calendar 2024
祝休日・謹賀新年 2025年の目標
https://qiita.com/kaizen_nagoya/items/dfa34827932f99c59bbc

Qiita 1年間をまとめた「振り返りページ」＠2024
https://qiita.com/kaizen_nagoya/items/ed6be239119c99b15828

2024 参加・主催Calendarと投稿記事一覧 Qiita(248)
https://qiita.com/kaizen_nagoya/items/d80b8fbac2496df7827f

主催Calendar2024分析 Qiita(254)
https://qiita.com/kaizen_nagoya/items/15807336d583076f70bc

Calendar 統計
https://qiita.com/kaizen_nagoya/items/e315558dcea8ee3fe43e

LLM 関連 Calendar 2024 
https://qiita.com/kaizen_nagoya/items/c36033cf66862d5496fa

Large Language Model Related Calendar 
https://qiita.com/kaizen_nagoya/items/3beb0bc3fb71e3ae6d66

博士論文 Calendar 2024 を開催します。 
https://qiita.com/kaizen_nagoya/items/51601357efbcaf1057d0

博士論文(0)関連記事一覧
https://qiita.com/kaizen_nagoya/items/8f223a760e607b705e78

# 関連資料
' @kazuo_reve 私が効果を確認した「小川メソッド」
https://qiita.com/kazuo_reve/items/a3ea1d9171deeccc04da

' @kazuo_reve 新人の方によく展開している有益な情報
https://qiita.com/kazuo_reve/items/d1a3f0ee48e24bba38f1

' @kazuo_reve Vモデルについて勘違いしていたと思ったこと
https://qiita.com/kazuo_reve/items/46fddb094563bd9b2e1e

# 自己記事一覧
Qiitaで逆リンクを表示しなくなったような気がする。時々、スマフォで表示するとあらわっることがあり、完全に削除したのではなさそう。

４月以降、せっせとリンクリストを作り、統計を取って確率を説明しようとしている。
2025年２月末を目標にしている。

一覧の一覧( The directory of directories of mine.) Qiita(100)
https://qiita.com/kaizen_nagoya/items/7eb0e006543886138f39

仮説（0）一覧（目標100現在40）
https://qiita.com/kaizen_nagoya/items/f000506fe1837b3590df

Qiita(0)Qiita関連記事一覧（自分）
https://qiita.com/kaizen_nagoya/items/58db5fbf036b28e9dfa6

Error一覧 error(0)
https://qiita.com/kaizen_nagoya/items/48b6cbc8d68eae2c42b8

C++ Support(0)　
https://qiita.com/kaizen_nagoya/items/8720d26f762369a80514

Coding(0) Rules, C, Secure, MISRA and so on
https://qiita.com/kaizen_nagoya/items/400725644a8a0e90fbb0

Ethernet 記事一覧　Ethernet(0)
https://qiita.com/kaizen_nagoya/items/88d35e99f74aefc98794

Wireshark 一覧 wireshark(0)、Ethernet(48) 
https://qiita.com/kaizen_nagoya/items/fbed841f61875c4731d0

線網（Wi-Fi）空中線(antenna)(0) 記事一覧(118/300目標)
https://qiita.com/kaizen_nagoya/items/5e5464ac2b24bd4cd001

なぜdockerで機械学習するか 書籍・ソース一覧作成中 (目標100)
https://qiita.com/kaizen_nagoya/items/ddd12477544bf5ba85e2

プログラムちょい替え（0）一覧:4件
https://qiita.com/kaizen_nagoya/items/296d87ef4bfd516bc394

言語処理100本ノックをdockerで。python覚えるのに最適。:10+12
https://qiita.com/kaizen_nagoya/items/7e7eb7c543e0c18438c4

Python(0)記事をまとめたい。
https://qiita.com/kaizen_nagoya/items/088c57d70ab6904ebb53

安全（0）安全工学シンポジウムに向けて: 21
https://qiita.com/kaizen_nagoya/items/c5d78f3def8195cb2409

プログラマによる、プログラマのための、統計(0)と確率のプログラミングとその後
https://qiita.com/kaizen_nagoya/items/6e9897eb641268766909

転職(0)一覧
https://qiita.com/kaizen_nagoya/items/f77520d378d33451d6fe

技術士(0)一覧
https://qiita.com/kaizen_nagoya/items/ce4ccf4eb9c5600b89ea

Reserchmap(0) 一覧
https://qiita.com/kaizen_nagoya/items/506c79e562f406c4257e

物理記事　上位100
https://qiita.com/kaizen_nagoya/items/66e90fe31fbe3facc6ff

量子(0) 計算機, 量子力学 
https://qiita.com/kaizen_nagoya/items/1cd954cb0eed92879fd4

数学関連記事１００
https://qiita.com/kaizen_nagoya/items/d8dadb49a6397e854c6d

coq(0) 一覧
https://qiita.com/kaizen_nagoya/items/d22f9995cf2173bc3b13

統計(0)一覧
https://qiita.com/kaizen_nagoya/items/80d3b221807e53e88aba

図(0) state, sequence and timing. UML and お絵描き 
https://qiita.com/kaizen_nagoya/items/60440a882146aeee9e8f

色(0) 記事100書く切り口 
https://qiita.com/kaizen_nagoya/items/22331c0335ed34326b9b

品質一覧 
https://qiita.com/kaizen_nagoya/items/2b99b8e9db6d94b2e971

言語・文学記事　１００
https://qiita.com/kaizen_nagoya/items/42d58d5ef7fb53c407d6

医工連携関連記事一覧
https://qiita.com/kaizen_nagoya/items/6ab51c12ba51bc260a82

水の資料集(0)　方針と成果
https://qiita.com/kaizen_nagoya/items/f5dbb30087ea732b52aa

自動車　記事　１００
https://qiita.com/kaizen_nagoya/items/f7f0b9ab36569ad409c5

通信記事１００
https://qiita.com/kaizen_nagoya/items/1d67de5e1cd207b05ef7

日本語（０）一欄
https://qiita.com/kaizen_nagoya/items/7498dcfa3a9ba7fd1e68

英語(0) 一覧
https://qiita.com/kaizen_nagoya/items/680e3f5cbf9430486c7d

音楽　一覧(0) 
https://qiita.com/kaizen_nagoya/items/b6e5f42bbfe3bbe40f5d

「@kazuo_reve 新人の方によく展開している有益な情報」確認一覧 
https://qiita.com/kaizen_nagoya/items/b9380888d1e5a042646b

鉄道（０）鉄道のシステム考察はてっちゃんがてつだってくれる
https://qiita.com/kaizen_nagoya/items/faa4ea03d91d901a618a

OSEK OS設計の基礎　OSEK(100)
https://qiita.com/kaizen_nagoya/items/7528a22a14242d2d58a3

coding (101) 一覧を作成し始めた。omake:最近のQiitaで表示しない5つの事象
https://qiita.com/kaizen_nagoya/items/20667f09f19598aedb68

官公庁・学校・公的団体（NPOを含む）システムの課題、官（０）
https://qiita.com/kaizen_nagoya/items/04ee6eaf7ec13d3af4c3

「はじめての」シリーズ　 ベクタージャパン　
https://qiita.com/kaizen_nagoya/items/2e41634f6e21a3cf74eb

AUTOSAR(0)Qiita記事一覧, OSEK(75)
https://qiita.com/kaizen_nagoya/items/89c07961b59a8754c869

プログラマが知っていると良い「公序良俗」
https://qiita.com/kaizen_nagoya/items/9fe7c0dfac2fbd77a945

LaTeX(0) 一覧　
https://qiita.com/kaizen_nagoya/items/e3f7dafacab58c499792

自動制御、制御工学一覧（０）
https://qiita.com/kaizen_nagoya/items/7767a4e19a6ae1479e6b

Rust(0) 一覧　
https://qiita.com/kaizen_nagoya/items/5e8bb080ba6ca0281927

programの本質は計画だ。programは設計だ。
https://qiita.com/kaizen_nagoya/items/c8545a769c246a458c27

登壇直後版 色使い(JIS安全色) Qiita Engineer Festa 2023〜私しか得しないニッチな技術でLT〜 スライド編 0.15
https://qiita.com/kaizen_nagoya/items/f0d3070d839f4f735b2b

プログラマが知っていると良い「公序良俗」
https://qiita.com/kaizen_nagoya/items/9fe7c0dfac2fbd77a945

逆も真：社会人が最初に確かめるとよいこと。OSEK(69)、Ethernet(59)
https://qiita.com/kaizen_nagoya/items/39afe4a728a31b903ddc

統計の嘘。仮説（127）
https://qiita.com/kaizen_nagoya/items/63b48ecf258a3471c51b

自分の言葉だけで論理展開できるのが天才なら、文章の引用だけで論理展開できるのが秀才だ。仮説（136）
https://qiita.com/kaizen_nagoya/items/97cf07b9e24f860624dd

参考文献駆動執筆(references driven writing)・デンソークリエイト編
https://qiita.com/kaizen_nagoya/items/b27b3f58b8bf265a5cd1

「何を」よりも「誰を」。１０年後のために今見習いたい人たち
https://qiita.com/kaizen_nagoya/items/8045978b16eb49d572b2

Qiitaの記事に３段階または５段階で到達するための方法
https://qiita.com/kaizen_nagoya/items/6e9298296852325adc5e

出力(output)と呼ばないで。これは状態(state)です。
https://qiita.com/kaizen_nagoya/items/80b8b5913b2748867840

coding (101) 一覧を作成し始めた。omake:最近のQiitaで表示しない5つの事象
https://qiita.com/kaizen_nagoya/items/20667f09f19598aedb68

あなたは「勘違いまとめ」から、勘違いだと言っていることが勘違いだといくつ見つけられますか。人間の間違い(human error(125))の種類と対策
https://qiita.com/kaizen_nagoya/items/ae391b77fffb098b8fb4

プログラマの「プログラムが書ける」思い込みは強みだ。３つの理由。仮説（168）統計と確率(17) , OSEK(79)
https://qiita.com/kaizen_nagoya/items/bc5dd86e414de402ec29

出力(output)と呼ばないで。これは状態(state)です。
https://qiita.com/kaizen_nagoya/items/80b8b5913b2748867840

これからの情報伝達手段の在り方について考えてみよう。炎上と便乗。
https://qiita.com/kaizen_nagoya/items/71a09077ac195214f0db

ISO/IEC JTC1 SC7 Software and System Engineering
https://qiita.com/kaizen_nagoya/items/48b43f0f6976a078d907

アクセシビリティの知見を発信しよう！（再び）
https://qiita.com/kaizen_nagoya/items/03457eb9ee74105ee618

統計論及確率論輪講（再び）
https://qiita.com/kaizen_nagoya/items/590874ccfca988e85ea3

読者の心をグッと惹き寄せる7つの魔法
https://qiita.com/kaizen_nagoya/items/b1b5e89bd5c0a211d862

「@kazuo_reve 新人の方によく展開している有益な情報」確認一覧
https://qiita.com/kaizen_nagoya/items/b9380888d1e5a042646b

ソースコードで議論しよう。日本語で議論するの止めましょう（あるプログラミング技術の議論報告）
https://qiita.com/kaizen_nagoya/items/8b9811c80f3338c6c0b0

脳内コンパイラの3つの危険
https://qiita.com/kaizen_nagoya/items/7025cf2d7bd9f276e382

心理学の本を読むよりはコンパイラ書いた方がよくね。仮説（34）
https://qiita.com/kaizen_nagoya/items/fa715732cc148e48880e

NASAを超えるつもりがあれば読んでください。
https://qiita.com/kaizen_nagoya/items/e81669f9cb53109157f6

データサイエンティストの気づき!「勉強して仕事に役立てない人。大嫌い!!」『それ自分かも?』ってなった!!! 
https://qiita.com/kaizen_nagoya/items/d85830d58d8dd7f71d07

「ぼくの好きな先生」「人がやらないことをやれ」プログラマになるまで。仮説（37）　
https://qiita.com/kaizen_nagoya/items/53e4bded9fe5f724b3c4

なぜ経済学徒を辞め、計算機屋になったか（経済学部入学前・入学後・卒業後対応） 転職(1)  
https://qiita.com/kaizen_nagoya/items/06335a1d24c099733f64    

プログラミング言語教育のXYZ。 仮説（52） 
https://qiita.com/kaizen_nagoya/items/1950c5810fb5c0b07be4

【24卒向け】9ヶ月後に年収１０００万円を目指す。二つの関門と三つの道。
https://qiita.com/kaizen_nagoya/items/fb5bff147193f726ad25

「【25卒向け】Qiita Career Meetup for STUDENT」予習の勧め
https://qiita.com/kaizen_nagoya/items/00eadb8a6e738cb6336f

大学入試不合格でも筆記試験のない大学に入って卒業できる。卒業しなくても博士になれる。
https://qiita.com/kaizen_nagoya/items/74adec99f396d64b5fd5

全世界の不登校の子供たち「博士論文」を書こう。世界子供博士論文遠隔実践中心 安全(99)
https://qiita.com/kaizen_nagoya/items/912d69032c012bcc84f2

小川メソッド　覚え（書きかけ）
https://qiita.com/kaizen_nagoya/items/3593d72eca551742df68

DoCAP（ドゥーキャップ）って何ですか？
https://qiita.com/kaizen_nagoya/items/47e0e6509ab792c43327

views 20,000越え自己記事一覧
https://qiita.com/kaizen_nagoya/items/58e8bd6450957cdecd81

Views１万越え、もうすぐ１万記事一覧 最近いいねをいただいた213記事
https://qiita.com/kaizen_nagoya/items/d2b805717a92459ce853

amazon 殿堂入りNo1レビュアになるまで。仮説(102)
https://qiita.com/kaizen_nagoya/items/83259d18921ce75a91f4

100以上いいねをいただいた記事16選
https://qiita.com/kaizen_nagoya/items/f8d958d9084ffbd15d2a

小川清最終講義、最終講義（再）計画, Ethernet(100) 英語(100) 安全(100)
https://qiita.com/kaizen_nagoya/items/e2df642e3951e35e6a53

＜この記事は個人の過去の経験に基づく個人の感想です。現在所属する組織、業務とは関係がありません。＞
This article is an individual impression based on my individual experience. It has nothing to do with the organization or business to which I currently belong.
Este artículo es una impresión personal basada en mi experiencia personal. No tiene nada que ver con la organización o empresa a la que pertenezco actualmente.
### 最後までおよみいただきありがとうございました。
いいね　💚、フォローをお願いします。
#### Thank you very much for reading to the last sentence.
Please press the like icon 💚　and follow me for your happy life.
### Muchas gracias por leer hasta la última oración.
Por favor, haz clic en el ícono Me gusta 💚 y sígueme para tener una vida feliz.

<a href="https://b.hatena.ne.jp/entry/s/qiita.com/kaizen_nagoya/items/cb7eb3199b0b98904a35" class="hatena-bookmark-button" data-hatena-bookmark-layout="basic-label-counter" data-hatena-bookmark-lang="ja" title="このエントリーをはてなブックマークに追加"><img src="https://b.st-hatena.com/images/v4/public/entry-button/button-only@2x.png" alt="このエントリーをはてなブックマークに追加" width="20" height="20" style="border: none;" /></a><script type="text/javascript" src="https://b.st-hatena.com/js/bookmark_button.js" charset="utf-8" async="async"></script>
http://b.hatena.ne.jp/guide/bbutton
