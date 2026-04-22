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
