/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/complex-union/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/protocol/Protocol.h>
namespace cpp2 {

struct module_constants {};

class __attribute__((__deprecated__("moduleConstants suffers from the 'static initialization order fiasco' (https://isocpp.org/wiki/faq/ctors#static-init-order) and may CRASH you program. Instead, use module_constants::CONSTANT_NAME()"))) moduleConstants {
 public:
  moduleConstants() {}
};

} // cpp2
