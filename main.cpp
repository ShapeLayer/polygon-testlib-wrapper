/*
 * If applying code to polygon, set `IS_POLYGON_ENV` to `true`.
 * If use this to validator, set `IS_VALIDATOR` to `true`.
 * If use this to generator, set `IS_GENERATOR` to `true`.
 */
#define IS_POLYGON_ENV false
#define IS_VALIDATOR false
#define IS_GENERATOR false

#include <iostream>
#include <vector>
#include <string>
#include <random>

#if IS_POLYGON_ENV
#include "testlib.h"
#endif

#define i32 long
#define i64 long long

#define __IS_IN_RANGE(N, L, R) (L <= N && N <= R)

using namespace std;

// Commons

void w_register(int argc, char* argv[]);

// Generator

int w_rnd_next(int n);
int w_rnd_next(int init, int fin);

// Validator

// void w_setTestCase(int T);
// void w_unsetTestCase();
// string w_validator_testset();
// string w_validator_group();
void w_ensure(bool cond);
void w_ensuref(bool cond, char *format);

char w_readChar();
char w_readChar(char c);
char w_readSpace();
// void w_unreadChar(char c);
string w_readToken();
// string w_readToken(string regex);
string w_readWord();
// string w_readWord(string regex);
i64 w_readLong();
i64 w_readLong(i64 L, i64 R);
// vector<i64> w_readLongs(int n, i64 L, i64 R);
int w_readInt();
int w_readInteger();
int w_readInt(int L, int R);
int w_readInteger(int L, int R);
// vector<int> w_readInts(int n, int L, int R);
// vector<int> w_readIntegers(int n, int L, int R);
double w_readReal();
double w_readDouble();
double w_readReal(double L, double R);
double w_readDouble(double L, double R);
// double w_readStrictReal(double L, double R, int minPrecision, int maxPrecision);
// double w_readStrictDouble(double L, double R, int minPrecision, int maxPrecision);
string w_readString();
string w_readLine();
// string w_readString(string regex);
// string w_readLine(string regex);
void w_readEoln();
void w_readEof();

/* ========== Runner ==========*/
int main(int argc, char* argv[]) {
  w_register(argc, argv);
  return 0;
}

/* ========== Implementation ========== */

void w_register(int argc, char* argv[]) {
  #if IS_POLYGON_ENV
    #if IS_VALIDATOR
    registerValidation(argc, argv);
    #elif IS_GENERATOR
    registerGen(argc, argv, 1);
    #endif
  #endif
}

int w_rnd_next(int n) { return w_rnd_next(0, n - 1); }
int w_rnd_next(int init, int fin) {
  #if IS_POLYGON_ENV
  return rnd.next(init, fin);
  #else
  random_device rnd;
  mt19937 gen(rnd());
  uniform_int_distribution<> dist(init, fin);
  return dist(gen);
  #endif
}

void w_ensure(bool cond) {
  #if IS_POLYGON_ENV
  ensure(cond)
  #else
  if (!cond) { exit(1); }
  #endif
}

void w_ensuref(bool cond, char *format) {
  #if IS_POLYGON_ENV
  ensuref(cond, format);
  #else
  if (!cond) {
    cout << format << endl;
    exit(1);
  }
  #endif
}

char w_readChar() {
  #if IS_POLYGON_ENV
  return inf.readChar();
  #else
  return cin.get();
  #endif
}

char w_readChar(char c) {
  #if IS_POLYGON_ENV
  return inf.readChar(c);
  #else
  char _c = cin.get();
  w_ensure(_c == c);
  return _c;
  #endif
}

char w_readSpace() {
  #if IS_POLYGON_ENV
  return inf.readSpace();
  #else
  return w_readChar(' ');
  #endif
}

string w_readToken() {
  #if IS_POLYGON_ENV
  return inf.readToken();
  #else
  string _gets;
  cin >> _gets;
  return _gets;
  #endif
}

string w_readWord() { return w_readToken(); }

i64 w_readLong() {
  #if IS_POLYGON_ENV
  return inf.readLong();
  #else
  i64 _gets;
  cin >> _gets;
  return _gets;
  #endif
}

i64 w_readLong(i64 L, i64 R) {
  #if IS_POLYGON_ENV
  return inf.readLong(L, R);
  #else
  i64 _gets = w_readLong();
  w_ensure(__IS_IN_RANGE(_gets, L, R));
  return _gets;
  #endif
}

int w_readInt() {
  #if IS_POLYGON_ENV
  return inf.readInt();
  #else
  int _gets;
  cin >> _gets;
  return _gets;
  #endif
}

int w_readInteger() { return w_readInt(); }

int w_readInt(int L, int R) {
  #if IS_POLYGON_ENV
  return inf.readInt(L, R);
  #else
  int _gets = w_readInt();
  w_ensure(__IS_IN_RANGE(_gets, L, R));
  return _gets;
  #endif
}

int w_readInteger(int L, int R) { return w_readInt(L, R); }

double w_readReal() {
  #if IS_POLYGON_ENV
  return inf.readReal();
  #else
  double _gets;
  cin >> _gets;
  return _gets;
  #endif
}

double w_readDouble() { return w_readReal(); }

double w_readReal(double L, double R) {
  #if IS_POLYGON_ENV
  return inf.readReal(L, R);
  #else
  double _gets = w_readReal();
  w_ensure(__IS_IN_RANGE(_gets, L, R));
  return _gets;
  #endif
}

double w_readDouble(double L, double R) { return w_readReal(L, R); }

string w_readString() {
  #if IS_POLYGON_ENV
  return inf.readString();
  #else
  string _gets;
  getline(cin, _gets);
  return _gets;
  #endif
}

string w_readLine() { return w_readString(); }

void w_readEoln() {
  #if IS_POLYGON_ENV
  inf.readEoln();
  #else
  #endif
}

void w_readEof() {
  #if IS_POLYGON_ENV
  inf.readEof();
  #else
  #endif
}
