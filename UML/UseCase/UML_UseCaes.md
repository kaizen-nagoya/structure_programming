Use case図とsequence図を相互生成できるかどうかは、場合による。
sequence図からuse case図の生成の方が楽そう。


@startuml

left to right direction

actor "Designer" as de

actor "Source Code" as sc

rectangle UML {

usecase "State Diagram" as UC1

usecase "Sequence Diagram" as UC2

usecase "Timing Diagram" as UC3

usecase "Use Case Diagrm" as UC4

}

UC4 --   UC2

de --> UC1

de --> UC2

de --> UC3

de --> UC4

UC1 --> sc : generate

UC2 --> sc : generate

UC3 --> sc : generate

UC1 --> UC2 : generate

UC1 --> UC3 : generate

UC2 --> UC3 : generate

sc --> UC1 : generate

@enduml


<img width="859" height="330" alt="image" src="https://github.com/user-attachments/assets/ce5a033b-7b19-4594-9080-9195ed496cda" />


@startuml

left to right direction

actor "Designer" as de

actor "Source Code" as sc

rectangle UML {

usecase "State Diagram" as UC1

usecase "Sequence Diagram" as UC2

usecase "Timing Diagram" as UC3

}

de --> UC1

de --> UC2

de --> UC3

UC1 --> sc : generate

UC2 --> sc : generate

UC3 --> sc : generate

UC1 --> UC2 : generate

UC1 --> UC3 : generate

UC2 --> UC3 : generate

sc --> UC1 : generate

@enduml

<img width="844" height="292" alt="image" src="https://github.com/user-attachments/assets/6ede256e-e191-42e0-8cb2-1b8c12f976fe" />





@startuml

left to right direction

actor "Designer" as de

actor "Source Code" as sc

rectangle UML {

  usecase "State Diagram" as UC1
  
  usecase "Sequence Diagram" as UC2
  
  usecase "Timing Diagram" as UC3

}

de --> UC1

de --> UC2

de --> UC3

UC1 --> sc

UC2 --> sc

UC3 --> sc

UC1 --> UC2

UC1 --> UC3

UC2 --> UC3

@enduml

<img width="854" height="190" alt="image" src="https://github.com/user-attachments/assets/1d65cabb-0635-40a6-9c9b-0ba8c92d378e" />
