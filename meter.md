```Mermaid
    flowchart TD;
    A(start) --> B[/Masukan nilai meter/];
    B --> C[/cm=m*100/];
    C --> D[/inc=m*100/2.54/];
    D --> E[/Cetak cm/];
    E --> F[/Cetak inc/];
    F --> G(finish);
```