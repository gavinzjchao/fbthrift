/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>



namespace cpp2 {

class Included;

class Included : private apache::thrift::detail::st::ComparisonOperators<Included> {
 public:

  Included() :
      MyIntField(0LL) {}
  // FragileConstructor for use in initialization lists only

  Included(apache::thrift::FragileConstructor, int64_t MyIntField__arg) :
      MyIntField(std::move(MyIntField__arg)) {
    __isset.MyIntField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Included(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Included(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyIntField = arg.move();
    __isset.MyIntField = true;
  }

  Included(Included&&) = default;

  Included(const Included&) = default;

  Included& operator=(Included&&) = default;

  Included& operator=(const Included&) = default;
  void __clear();

  virtual ~Included() throw() {}

  int64_t MyIntField;

  struct __isset {
    void __clear() {
      MyIntField = false;
    }

    bool MyIntField = false;
  } __isset;
  bool operator==(const Included& rhs) const;

  bool operator < (const Included& rhs) const {
    if (!(MyIntField == rhs.MyIntField)) {
      return MyIntField < rhs.MyIntField;
    }
    return false;
  }

  int64_t get_MyIntField() const {
    return MyIntField;
  }

  int64_t& set_MyIntField(int64_t MyIntField_) {
    MyIntField = MyIntField_;
    __isset.MyIntField = true;
    return MyIntField;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(Included& a, Included& b);
extern template uint32_t Included::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Included::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Included::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Included::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Included::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Included::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Included::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Included::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Included>::clear( ::cpp2::Included* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Included>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::Included>::write(Protocol* proto,  ::cpp2::Included const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::Included>::read(Protocol* proto,  ::cpp2::Included* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::Included>::serializedSize(Protocol const* proto,  ::cpp2::Included const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::Included>::serializedSizeZC(Protocol const* proto,  ::cpp2::Included const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2
