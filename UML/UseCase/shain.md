@startuml
left to right direction

skinparam monochrome true

actor 社員

actor 一般社員

actor マネージャ

' 汎化関係

一般社員 --|> 社員

マネージャ --|> 社員

' 共通のアクター

note right of 社員

  共通のアクター
  
end note

' 個別のアクター

note right of マネージャ

  個別のアクター
  
end note

' 汎化関係（説明は社員側に集約）

note left of 社員

  汎化関係
  
  ↑汎化 / ↓特化
  
end note

@enduml

<img width="471" height="279" alt="image" src="https://github.com/user-attachments/assets/03f9057e-7fc0-48e0-ac8d-028934e08ce6" />
