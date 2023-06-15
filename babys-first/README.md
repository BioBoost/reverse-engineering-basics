# Babys First

Compile using:

```bash
g++ -std=c++2a main.cpp -o hackme
```

Get all strings (at least 5 characters):

```bash
strings hackme | less
```

Disassemble:

```bash
objdump -d -Mintel hackme | less
```

Or use [Ida Free](https://hex-rays.com/ida-free/)
