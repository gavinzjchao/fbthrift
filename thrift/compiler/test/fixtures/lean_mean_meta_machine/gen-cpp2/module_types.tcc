/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/lean_mean_meta_machine/gen-cpp2/module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include "thrift/compiler/test/fixtures/lean_mean_meta_machine/gen-cpp2/module_fatal.h"
#include <thrift/lib/cpp2/fatal/serializer.h>
namespace test_cpp2 { namespace cpp_reflection {

}} // test_cpp2::cpp_reflection
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

}} // test_cpp2::cpp_reflection
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

}} // test_cpp2::cpp_reflection
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

}} // test_cpp2::cpp_reflection
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t union1::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t union1::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t union1::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t union1::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t union2::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t union2::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t union2::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t union2::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t union3::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t union3::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t union3::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t union3::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t structA::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t structA::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t structA::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t structA::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t unionA::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t unionA::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t unionA::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t unionA::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t structB::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t structB::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t structB::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t structB::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <typename T_structC_g_struct_setter>
 ::test_cpp2::cpp_reflection::union1& structC::set_g(T_structC_g_struct_setter&& g_) {
  g = std::forward<T_structC_g_struct_setter>(g_);
  __isset.g = true;
  return g;
}

template <typename T_structC_h_struct_setter>
 ::test_cpp2::cpp_reflection::unionA& structC::set_h(T_structC_h_struct_setter&& h_) {
  h = std::forward<T_structC_h_struct_setter>(h_);
  __isset.h = true;
  return h;
}

template <typename T_structC_i_struct_setter>
 ::test_cpp2::cpp_reflection::unionA& structC::set_i(T_structC_i_struct_setter&& i_) {
  i = std::forward<T_structC_i_struct_setter>(i_);
  __isset.i = true;
  return i;
}

template <typename T_structC_j_struct_setter>
std::vector<int32_t>& structC::set_j(T_structC_j_struct_setter&& j_) {
  j = std::forward<T_structC_j_struct_setter>(j_);
  __isset.j = true;
  return j;
}

template <typename T_structC_j1_struct_setter>
std::vector<int32_t>& structC::set_j1(T_structC_j1_struct_setter&& j1_) {
  j1 = std::forward<T_structC_j1_struct_setter>(j1_);
  __isset.j1 = true;
  return j1;
}

template <typename T_structC_j2_struct_setter>
std::vector< ::test_cpp2::cpp_reflection::enum1>& structC::set_j2(T_structC_j2_struct_setter&& j2_) {
  j2 = std::forward<T_structC_j2_struct_setter>(j2_);
  __isset.j2 = true;
  return j2;
}

template <typename T_structC_j3_struct_setter>
std::vector< ::test_cpp2::cpp_reflection::structA>& structC::set_j3(T_structC_j3_struct_setter&& j3_) {
  j3 = std::forward<T_structC_j3_struct_setter>(j3_);
  __isset.j3 = true;
  return j3;
}

template <typename T_structC_k_struct_setter>
std::set<int32_t>& structC::set_k(T_structC_k_struct_setter&& k_) {
  k = std::forward<T_structC_k_struct_setter>(k_);
  __isset.k = true;
  return k;
}

template <typename T_structC_k1_struct_setter>
std::set<int32_t>& structC::set_k1(T_structC_k1_struct_setter&& k1_) {
  k1 = std::forward<T_structC_k1_struct_setter>(k1_);
  __isset.k1 = true;
  return k1;
}

template <typename T_structC_k2_struct_setter>
std::set< ::test_cpp2::cpp_reflection::enum2>& structC::set_k2(T_structC_k2_struct_setter&& k2_) {
  k2 = std::forward<T_structC_k2_struct_setter>(k2_);
  __isset.k2 = true;
  return k2;
}

template <typename T_structC_k3_struct_setter>
std::set< ::test_cpp2::cpp_reflection::structB>& structC::set_k3(T_structC_k3_struct_setter&& k3_) {
  k3 = std::forward<T_structC_k3_struct_setter>(k3_);
  __isset.k3 = true;
  return k3;
}

template <typename T_structC_l_struct_setter>
std::map<int32_t, int32_t>& structC::set_l(T_structC_l_struct_setter&& l_) {
  l = std::forward<T_structC_l_struct_setter>(l_);
  __isset.l = true;
  return l;
}

template <typename T_structC_l1_struct_setter>
std::map<int32_t, int32_t>& structC::set_l1(T_structC_l1_struct_setter&& l1_) {
  l1 = std::forward<T_structC_l1_struct_setter>(l1_);
  __isset.l1 = true;
  return l1;
}

template <typename T_structC_l2_struct_setter>
std::map<int32_t,  ::test_cpp2::cpp_reflection::enum1>& structC::set_l2(T_structC_l2_struct_setter&& l2_) {
  l2 = std::forward<T_structC_l2_struct_setter>(l2_);
  __isset.l2 = true;
  return l2;
}

template <typename T_structC_l3_struct_setter>
std::map<int32_t,  ::test_cpp2::cpp_reflection::structB>& structC::set_l3(T_structC_l3_struct_setter&& l3_) {
  l3 = std::forward<T_structC_l3_struct_setter>(l3_);
  __isset.l3 = true;
  return l3;
}

template <typename T_structC_m1_struct_setter>
std::map< ::test_cpp2::cpp_reflection::enum1, int32_t>& structC::set_m1(T_structC_m1_struct_setter&& m1_) {
  m1 = std::forward<T_structC_m1_struct_setter>(m1_);
  __isset.m1 = true;
  return m1;
}

template <typename T_structC_m2_struct_setter>
std::map< ::test_cpp2::cpp_reflection::enum1,  ::test_cpp2::cpp_reflection::enum2>& structC::set_m2(T_structC_m2_struct_setter&& m2_) {
  m2 = std::forward<T_structC_m2_struct_setter>(m2_);
  __isset.m2 = true;
  return m2;
}

template <typename T_structC_m3_struct_setter>
std::map< ::test_cpp2::cpp_reflection::enum1,  ::test_cpp2::cpp_reflection::structB>& structC::set_m3(T_structC_m3_struct_setter&& m3_) {
  m3 = std::forward<T_structC_m3_struct_setter>(m3_);
  __isset.m3 = true;
  return m3;
}

template <typename T_structC_n1_struct_setter>
std::map<std::string, int32_t>& structC::set_n1(T_structC_n1_struct_setter&& n1_) {
  n1 = std::forward<T_structC_n1_struct_setter>(n1_);
  __isset.n1 = true;
  return n1;
}

template <typename T_structC_n2_struct_setter>
std::map<std::string,  ::test_cpp2::cpp_reflection::enum1>& structC::set_n2(T_structC_n2_struct_setter&& n2_) {
  n2 = std::forward<T_structC_n2_struct_setter>(n2_);
  __isset.n2 = true;
  return n2;
}

template <typename T_structC_n3_struct_setter>
std::map<std::string,  ::test_cpp2::cpp_reflection::structB>& structC::set_n3(T_structC_n3_struct_setter&& n3_) {
  n3 = std::forward<T_structC_n3_struct_setter>(n3_);
  __isset.n3 = true;
  return n3;
}

template <typename T_structC_o1_struct_setter>
std::map< ::test_cpp2::cpp_reflection::structA, int32_t>& structC::set_o1(T_structC_o1_struct_setter&& o1_) {
  o1 = std::forward<T_structC_o1_struct_setter>(o1_);
  __isset.o1 = true;
  return o1;
}

template <typename T_structC_o2_struct_setter>
std::map< ::test_cpp2::cpp_reflection::structA,  ::test_cpp2::cpp_reflection::enum1>& structC::set_o2(T_structC_o2_struct_setter&& o2_) {
  o2 = std::forward<T_structC_o2_struct_setter>(o2_);
  __isset.o2 = true;
  return o2;
}

template <typename T_structC_o3_struct_setter>
std::map< ::test_cpp2::cpp_reflection::structA,  ::test_cpp2::cpp_reflection::structB>& structC::set_o3(T_structC_o3_struct_setter&& o3_) {
  o3 = std::forward<T_structC_o3_struct_setter>(o3_);
  __isset.o3 = true;
  return o3;
}

template <class Protocol_>
uint32_t structC::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t structC::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t structC::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t structC::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <typename T_struct1_field4_struct_setter>
 ::test_cpp2::cpp_reflection::union1& struct1::set_field4(T_struct1_field4_struct_setter&& field4_) {
  field4 = std::forward<T_struct1_field4_struct_setter>(field4_);
  __isset.field4 = true;
  return field4;
}

template <typename T_struct1_field5_struct_setter>
 ::test_cpp2::cpp_reflection::union2& struct1::set_field5(T_struct1_field5_struct_setter&& field5_) {
  field5 = std::forward<T_struct1_field5_struct_setter>(field5_);
  __isset.field5 = true;
  return field5;
}

template <class Protocol_>
uint32_t struct1::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct1::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct1::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct1::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <typename T_struct2_fieldE_struct_setter>
 ::test_cpp2::cpp_reflection::union1& struct2::set_fieldE(T_struct2_fieldE_struct_setter&& fieldE_) {
  fieldE = std::forward<T_struct2_fieldE_struct_setter>(fieldE_);
  __isset.fieldE = true;
  return fieldE;
}

template <typename T_struct2_fieldF_struct_setter>
 ::test_cpp2::cpp_reflection::union2& struct2::set_fieldF(T_struct2_fieldF_struct_setter&& fieldF_) {
  fieldF = std::forward<T_struct2_fieldF_struct_setter>(fieldF_);
  __isset.fieldF = true;
  return fieldF;
}

template <typename T_struct2_fieldG_struct_setter>
 ::test_cpp2::cpp_reflection::struct1& struct2::set_fieldG(T_struct2_fieldG_struct_setter&& fieldG_) {
  fieldG = std::forward<T_struct2_fieldG_struct_setter>(fieldG_);
  __isset.fieldG = true;
  return fieldG;
}

template <class Protocol_>
uint32_t struct2::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct2::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct2::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct2::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <typename T_struct3_fieldE_struct_setter>
 ::test_cpp2::cpp_reflection::union1& struct3::set_fieldE(T_struct3_fieldE_struct_setter&& fieldE_) {
  fieldE = std::forward<T_struct3_fieldE_struct_setter>(fieldE_);
  __isset.fieldE = true;
  return fieldE;
}

template <typename T_struct3_fieldF_struct_setter>
 ::test_cpp2::cpp_reflection::union2& struct3::set_fieldF(T_struct3_fieldF_struct_setter&& fieldF_) {
  fieldF = std::forward<T_struct3_fieldF_struct_setter>(fieldF_);
  __isset.fieldF = true;
  return fieldF;
}

template <typename T_struct3_fieldG_struct_setter>
 ::test_cpp2::cpp_reflection::struct1& struct3::set_fieldG(T_struct3_fieldG_struct_setter&& fieldG_) {
  fieldG = std::forward<T_struct3_fieldG_struct_setter>(fieldG_);
  __isset.fieldG = true;
  return fieldG;
}

template <typename T_struct3_fieldH_struct_setter>
 ::test_cpp2::cpp_reflection::union2& struct3::set_fieldH(T_struct3_fieldH_struct_setter&& fieldH_) {
  fieldH = std::forward<T_struct3_fieldH_struct_setter>(fieldH_);
  __isset.fieldH = true;
  return fieldH;
}

template <typename T_struct3_fieldI_struct_setter>
std::vector<int32_t>& struct3::set_fieldI(T_struct3_fieldI_struct_setter&& fieldI_) {
  fieldI = std::forward<T_struct3_fieldI_struct_setter>(fieldI_);
  __isset.fieldI = true;
  return fieldI;
}

template <typename T_struct3_fieldJ_struct_setter>
std::vector<std::string>& struct3::set_fieldJ(T_struct3_fieldJ_struct_setter&& fieldJ_) {
  fieldJ = std::forward<T_struct3_fieldJ_struct_setter>(fieldJ_);
  __isset.fieldJ = true;
  return fieldJ;
}

template <typename T_struct3_fieldK_struct_setter>
std::vector<std::string>& struct3::set_fieldK(T_struct3_fieldK_struct_setter&& fieldK_) {
  fieldK = std::forward<T_struct3_fieldK_struct_setter>(fieldK_);
  __isset.fieldK = true;
  return fieldK;
}

template <typename T_struct3_fieldL_struct_setter>
std::vector< ::test_cpp2::cpp_reflection::structA>& struct3::set_fieldL(T_struct3_fieldL_struct_setter&& fieldL_) {
  fieldL = std::forward<T_struct3_fieldL_struct_setter>(fieldL_);
  __isset.fieldL = true;
  return fieldL;
}

template <typename T_struct3_fieldM_struct_setter>
std::set<int32_t>& struct3::set_fieldM(T_struct3_fieldM_struct_setter&& fieldM_) {
  fieldM = std::forward<T_struct3_fieldM_struct_setter>(fieldM_);
  __isset.fieldM = true;
  return fieldM;
}

template <typename T_struct3_fieldN_struct_setter>
std::set<std::string>& struct3::set_fieldN(T_struct3_fieldN_struct_setter&& fieldN_) {
  fieldN = std::forward<T_struct3_fieldN_struct_setter>(fieldN_);
  __isset.fieldN = true;
  return fieldN;
}

template <typename T_struct3_fieldO_struct_setter>
std::set<std::string>& struct3::set_fieldO(T_struct3_fieldO_struct_setter&& fieldO_) {
  fieldO = std::forward<T_struct3_fieldO_struct_setter>(fieldO_);
  __isset.fieldO = true;
  return fieldO;
}

template <typename T_struct3_fieldP_struct_setter>
std::set< ::test_cpp2::cpp_reflection::structB>& struct3::set_fieldP(T_struct3_fieldP_struct_setter&& fieldP_) {
  fieldP = std::forward<T_struct3_fieldP_struct_setter>(fieldP_);
  __isset.fieldP = true;
  return fieldP;
}

template <typename T_struct3_fieldQ_struct_setter>
std::map<std::string,  ::test_cpp2::cpp_reflection::structA>& struct3::set_fieldQ(T_struct3_fieldQ_struct_setter&& fieldQ_) {
  fieldQ = std::forward<T_struct3_fieldQ_struct_setter>(fieldQ_);
  __isset.fieldQ = true;
  return fieldQ;
}

template <typename T_struct3_fieldR_struct_setter>
std::map<std::string,  ::test_cpp2::cpp_reflection::structB>& struct3::set_fieldR(T_struct3_fieldR_struct_setter&& fieldR_) {
  fieldR = std::forward<T_struct3_fieldR_struct_setter>(fieldR_);
  __isset.fieldR = true;
  return fieldR;
}

template <class Protocol_>
uint32_t struct3::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct3::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct3::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct3::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t struct4::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct4::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct4::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct4::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t struct_binary::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct_binary::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct_binary::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct_binary::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t union_with_special_names::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t union_with_special_names::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t union_with_special_names::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t union_with_special_names::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t struct_with_special_names::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct_with_special_names::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct_with_special_names::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct_with_special_names::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

}} // test_cpp2::cpp_reflection
