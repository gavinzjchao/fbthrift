/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/separate_processmap/gen-cpp2/MyServiceFast.h"

#include "thrift/compiler/test/fixtures/separate_processmap/gen-cpp2/MyServiceFast.tcc"

namespace cpp2 {

const MyServiceFastAsyncProcessor::CompactProtocolProcessMap MyServiceFastAsyncProcessor::compactProcessMap_ {
  {"ping", &MyServiceFastAsyncProcessor::process_ping<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getRandomData", &MyServiceFastAsyncProcessor::process_getRandomData<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"hasDataById", &MyServiceFastAsyncProcessor::process_hasDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getDataById", &MyServiceFastAsyncProcessor::process_getDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"putDataById", &MyServiceFastAsyncProcessor::process_putDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"lobDataById", &MyServiceFastAsyncProcessor::process_lobDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
