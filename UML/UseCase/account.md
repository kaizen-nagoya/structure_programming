# service oriented architecture
@startuml
left to right direction

actor "一般社員" as user
actor "マネージャー" as mane

rectangle "経費管理システム" {

  usecase "経費を登録する" as UC1
  usecase "経費を申請する"as UC2
  usecase "経費を承認却下する" as UC3
}

user --- UC1
user ---UC2
mane --- UC3

mane -l-|>user

@enduml

<img width="396" height="245" alt="image" src="https://github.com/user-attachments/assets/8b0a0031-ce06-4776-b521-d2bef0b08a53" />

# data centerd design

@startuml
left to right direction

actor "一般社員" as user
actor "マネージャー" as mane

rectangle "経費管理システム" {

  usecase "経費" as UC1 
}

user --- UC1 : 登録する
user ---UC1 : 申請する

mane --- UC1 : 却下する

mane -l-|>user: 指導

@enduml

<img width="391" height="221" alt="image" src="https://github.com/user-attachments/assets/ee9561bf-5a43-4863-a3d5-480e4f8a948b" />
