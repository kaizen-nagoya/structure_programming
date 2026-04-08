```
@startuml
skinparam shadowing false

state 固体
state 液体
state 気体
state プラズマ
state ボーズアインシュタイン凝縮

固体 --> 液体 : 蒸発
液体 --> 気体 : 凝縮
気体 --> 液体 : 凝固
液体 --> 固体 : 昇華
固体 --> 気体 : 昇華
気体 --> 固体 : 融解
気体 --> ボーズアインシュタイン凝縮
液体 --> ボーズアインシュタイン凝縮
ボーズアインシュタイン凝縮 --> 気体 
ボーズアインシュタイン凝縮 --> 気体 
プラズマ --> 気体 : 脱イオン化
気体 --> プラズマ : イオン化
プラズマ --> 液体
液体 --> プラズマ
プラズマ --> 固体
固体 --> プラズマ
@enduml
```
<img width="764" height="562" alt="image" src="https://github.com/user-attachments/assets/892d2ca2-5a6e-45c1-a95b-7c47677ed00a" />
