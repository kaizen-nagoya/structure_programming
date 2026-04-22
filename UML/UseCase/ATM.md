@startuml
left to right direction

actor 振込依頼者 as irai

actor 預金者 as yokin

actor 他銀行 as else

rectangle ATM {

  usecase "預金を引き出す" as UC1

  usecase "預金を預け入れる" as UC2
  
  usecase "通帳を記入する" as UC3
  
  usecase "口座振り込み（振替）を依頼する" as UC4
  
  usecase "暗証番号を入力する" as UC5

}

yokin <|-- irai

yokin -- UC1

yokin -- UC2

yokin -- UC3

UC1 ..> UC5 :<include>

UC4 ..> UC5 :<include>

irai -- UC4

else -- UC4

@enduml


<img width="788" height="437" alt="image" src="https://github.com/user-attachments/assets/ffcb9267-4f88-47e7-99a5-5f97ad3b4d57" />

@startuml
top to bottom direction

actor 振込依頼者 as irai
actor 預金者 as yokin
actor 他銀行 as else

rectangle ATM {

  usecase "預金を引き出す" as UC1
  usecase "預金を預け入れる" as UC2
  usecase "通帳を記入する" as UC3
  usecase "口座振り込み（振替）を依頼する" as UC4
  usecase "暗証番号を入力する" as UC5
  usecase "預金" as UC6
}

yokin <|-- irai

yokin -- UC1
yokin -- UC2
yokin -- UC3
UC1 ..> UC5 :<include>
UC4 ..> UC5 :<include>

irai -- UC4
UC4 -- else

UC1 -- UC6
UC2 -- UC6
UC4 -- UC6
UC6 .. UC3

@enduml

<img width="743" height="626" alt="image" src="https://github.com/user-attachments/assets/b40e3300-af66-40e3-8b20-a09f626bf452" />
