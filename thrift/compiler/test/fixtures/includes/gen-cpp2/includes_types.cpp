/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.tcc"


#include <algorithm>

namespace cpp2 {

void Included::__clear() {
  MyIntField = 0LL;
  __isset.__clear();
}

bool Included::operator==(const Included& rhs) const {
  if (!((MyIntField == rhs.MyIntField))) {
    return false;
  }
  return true;
}

void swap(Included& a, Included& b) {
  using ::std::swap;
  swap(a.MyIntField, b.MyIntField);
  swap(a.__isset, b.__isset);
}

template uint32_t Included::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Included::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Included::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Included::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Included::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t Included::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Included::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Included::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
