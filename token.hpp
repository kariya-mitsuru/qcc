#pragma once

#include "common.hpp"

enum {
  TOK_TYPE_IDENT,
  TOK_TYPE_SYMBOL,
  TOK_TYPE_NUMBER,
  TOK_TYPE_STRING,
  TOK_TYPE_CHAR,
  TOK_TYPE_END,
};

struct token_t {
  int type;
  std::string val;
  int line;
};

class Token {
  public:
    std::vector<token_t> token;
    int pos = 0;

    void add_ident_tok  (std::string, int);
    void add_symbol_tok (std::string, int);
    void add_number_tok (std::string, int);
    void add_string_tok (std::string, int);
    void add_char_tok   (std::string, int);
    void add_end_tok    ();

    token_t get();
    token_t next();

    bool is(std::string);
    void skip();
    bool skip(std::string);
    void prev();

    void show();
};