# Polygon testlib.h wrapper

Simple testlib.h wrapper to run polygon requirements locally.  

## Supports

Coverage
* Fully Covered
  * Supports almost same function at local.
* Just Wrapped
  * Just passes at local.
* Not Supported

| testlib.h | wrapper fn | coverage |
| :-: | :-: | :-: |
| `registerGen(int argc, char* argv[])` | `w_register(int argc, char* argv[])` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) [^1] |
| `rnd.next(int n)` | `w_rnd_next(int n)` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `rnd.next(int L, int R)` | `w_rnd_next(int init, int fin)` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `rnd.next(double n)` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `rnd.next(string pattern)` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `rnd.wnext(int n, int t)` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `rnd.any(container)` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |

[^1]: `IS_GENERATOR` must be `true`

| testlib.h | wrapper fn | coverage |
| :-: | :-: | :-: |
| `void registerValidation(int argc, char* argv[])` | `void w_register(int argc, char* argv[])` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) [^2] |
| `void setTestCase(int T)` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `void unsetTestCase()` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `string validator.testset()` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `string validator.group()` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `void ensure(bool cond)` | `void w_ensure(bool cond)` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `void ensuref(bool cond, char *format, ...)` | `void w_ensuref(bool cond, char *format)` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |

[^2]: `IS_VALIDATOR` must be `true`

| testlib.h | wrapper fn | coverage |
| :-: | :-: | :-: |
| `char readChar()` | `char w_readChar()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `char readChar(char c)` | `char w_readChar(char c)` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `char readSpace()` | `char w_readSpace()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `void unreadChar(char c)` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `string readToken()` | `string w_readToken()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `string readToken(string regex)` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `string readWord()` | `string w_readWord()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `string readWord(string regex)` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `long long readLong()` | `i64 w_readLong()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `long long readLong(long long L, long long R)` | `i64 w_readLong(i64 L, i64 R)` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `vector<long long> readLongs(int n, long long L, long long R)` | - | ![](https://img.shields.io/badge/-not%20supported-red) | ![](https://img.shields.io/badge/-not%20supported-red) |
| `int readInt()` | `int w_readInt()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `int readInteger()` | `int w_readInteger()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `int readInt(int L, int R)` | `int w_readInt(int L, int R)` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `int readInteger(int L, int R)` | `int w_readInteger(int L, int R)` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `vector<int> readInts(int n, int L, int R)` | - | ![](https://img.shields.io/badge/-not%20supported-red) |
| `vector<int> readIntegers(int n, int L, int R)` | - | ![](https://img.shields.io/badge/-not%20supported-red) |
| `double readReal()` | `double w_readReal()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `double readDouble()` | `double w_readDouble()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `double readReal(double L, double R)` | `double w_readReal(double L, double R)` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `double readDouble(double L, double R)` |`double w_readDouble(double L, double R)` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `double readStrictReal(double L, double R, int minPrecision, int maxPrecision)` | - | ![](https://img.shields.io/badge/-not%20supported-red) |
| `double readStrictDouble(double L, double R, int minPrecision, int maxPrecision)` | - | ![](https://img.shields.io/badge/-not%20supported-red) |
| `string readString()` | `string w_readString()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `string readLine()` | `string w_readLine()` | ![](https://img.shields.io/badge/-fully%20covered-brightgreen) |
| `string readString(string regex)` | - | ![](https://img.shields.io/badge/-not%20supported-red) |
| `string readLine(string regex)` | - | ![](https://img.shields.io/badge/-not%20supported-red) |
| `void readEoln()` | `void w_readEoln()` | ![](https://img.shields.io/badge/-just%20wrapped-yellow) |
| `void readEof()` | `void w_readEof()` | ![](https://img.shields.io/badge/-just%20wrapped-yellow) |

| testlib.h | wrapper fn | coverage |
| :-: | :-: | :-: |
| (All functions of Checkers) | - | ![](https://img.shields.io/badge/-not%20supported-red) |

| testlib.h | wrapper fn | coverage |
| :-: | :-: | :-: |
| (All functions of Interactors) | - | ![](https://img.shields.io/badge/-not%20supported-red) |