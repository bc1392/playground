# Type Table

| **Type**             | **Signed** | **Size**                   | **`printf` Format Specifier** |
|:---------------------|:-----------|:---------------------------|:------------------------------|
| `short`              | Yes        | 2 Bytes                    | `%hd`                         |
| `unsigned short`     | No         | 2 Bytes                    | `%hu`                         |
| `int`                | Yes        | 4 Bytes                    | `%d`                          |
| `unsigned int`       | No         | 4 Bytes                    | `%u`                          |
| `long`               | Yes        | 4 Bytes (8 on 64-bit *nix) | `%ld`                         |
| `unsigned long`      | No         | 4 Bytes (8 on 64-bit *nix) | `%lu`                         |
| `long long`          | Yes        | 8 Bytes                    | `%lld`                        |
| `unsigned long long` | No         | 8 Bytes                    | `llu`                         |