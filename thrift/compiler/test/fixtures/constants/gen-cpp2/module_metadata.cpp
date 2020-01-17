/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_metadata.h"

namespace apache::thrift::detail::metadata {

using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;

void GeneratedEnumMetadata<::cpp2::EmptyEnum>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.EmptyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& module_EmptyEnum = res.first->second;
  module_EmptyEnum.name = "module.EmptyEnum";
}
void GeneratedEnumMetadata<::cpp2::City>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.City", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& module_City = res.first->second;
  module_City.name = "module.City";
  module_City.elements[0] = "NYC";
  module_City.elements[1] = "MPK";
  module_City.elements[2] = "SEA";
  module_City.elements[3] = "LON";
}
void GeneratedEnumMetadata<::cpp2::Company>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.Company", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& module_Company = res.first->second;
  module_Company.name = "module.Company";
  module_Company.elements[0] = "FACEBOOK";
  module_Company.elements[1] = "WHATSAPP";
  module_Company.elements[2] = "OCULUS";
  module_Company.elements[3] = "INSTAGRAM";
}

} // apache::thrift::detail::metadata
