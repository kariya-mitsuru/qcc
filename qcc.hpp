#pragma once

#include "common.hpp"
#include "pp.hpp"
#include "lexer.hpp"
#include "parse.hpp"
#include "codegen.hpp"

#define QCC_VERSION "0.1"

class QCC {
  private:
    Token token;
    Preprocessor PP;
    Lexer LEX;
    Parser PARSE;
    Codegen CODEGEN;
    std::string out_file_name = "a.bc";
    bool emit_llvm_ir = false;
  public:
    void set_out_file_name(std::string);
    void set_emit_llvm_ir(bool);

    int run(std::string);
};
