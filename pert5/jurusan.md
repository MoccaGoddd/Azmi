```mermaid
    flowchart TD;
    A(Start) --> B[/Char cKode/];
    B --> C[Print Kode Jurusan];
    C --> D[/Terima inputan cKode/]
    D --> E{Case A};
    D --> F{Case B};
    E --true--> G[Print Teknik Informatika]
    E --true--> G
