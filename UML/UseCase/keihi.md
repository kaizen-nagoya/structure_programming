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

@startuml
left to right direction

actor "社員" as ippan

actor "マネージャー" as mana

actor "会計システム" as system

ippan <|- mana : 指導 

rectangle 経営管理システム {

usecase "経費を申請する" as UC1

usecase "経費を承認/却下する" as UC2

}

ippan --> UC1

UC1 --> mana

mana --> UC2

UC2 --> system

UC2 --> ippan

UC1 --> UC2

@startuml

<img width="538" height="364" alt="image" src="https://github.com/user-attachments/assets/b67289a9-ec04-4763-ae19-3f8fa573d59b" />
