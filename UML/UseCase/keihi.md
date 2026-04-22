@startuml

left to right direction

actor "社員" as ippan

actor "マネージャー" as mana

actor "会計システム" as system

ippan <|- mana

rectangle 経営管理システム {

usecase "経費を申請する" as UC1

usecase "経費を承認/却下する" as UC2

}

ippan -- UC1

mana -- UC2

UC2 -- system

@startuml

<img width="468" height="204" alt="image" src="https://github.com/user-attachments/assets/e236d9e1-46fb-4f28-9bce-82e8357e4031" />

