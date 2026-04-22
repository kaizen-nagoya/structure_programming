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
