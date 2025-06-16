## Flussdiagramme für Task 3

### Flussdiagramm für transform_complex(int x)

```mermaid
graph TD
    A[Start: x] --> B[Initialize result = 1]
    B --> C{i <= x?}
    C -->|No| F[Return result]
    C -->|Yes| D{i % 2 == 0?}
    D -->|Yes| E[result += i]
    D -->|No| G[result *= i]
    E --> H
    G --> H
    H[result > 1000?] -->|Yes| I[result -= 100]
    H -->|No| J
    I --> J
    J[Increment i] --> C


graph TD
    A[Start: arr, len] --> B[Initialize state = 0]
    B --> C{i < len?}
    C -->|No| E[Switch state]
    C -->|Yes| D[arr[i] < 0?]
    D -->|Yes| F[state = -1]
    D -->|No| G[arr[i] == 0?]
    G -->|Yes| H[state = 0]
    G -->|No| I[state = 1]
    F --> J
    H --> J
    I --> J
    J[state == 1?] -->|Yes| K[Break]
    J -->|No| L[Increment i]
    K --> E
    L --> C
    E -->|state = 1| M[Return true]
    E -->|default| N[Return false]
