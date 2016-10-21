/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <folly/futures/Future.h>



#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServiceEmptySvAsyncIf {
 public:
  virtual ~MyServiceEmptySvAsyncIf() {}
};

class MyServiceEmptyAsyncProcessor;

class MyServiceEmptySvIf : public MyServiceEmptySvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef MyServiceEmptyAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
};

class MyServiceEmptySvNull : public MyServiceEmptySvIf {
 public:
};

class MyServiceEmptyAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  MyServiceEmptySvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<MyServiceEmptyAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const MyServiceEmptyAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const MyServiceEmptyAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<MyServiceEmptyAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const MyServiceEmptyAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const MyServiceEmptyAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
 public:
  MyServiceEmptyAsyncProcessor(MyServiceEmptySvIf* iface) :
      iface_(iface) {}

  virtual ~MyServiceEmptyAsyncProcessor() {}
};

class MyServiceEmptyAsyncClient : public apache::thrift::TClientBase {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, folly::DelayedDestruction::Destructor> channel_ptr;

  virtual ~MyServiceEmptyAsyncClient() {}

  MyServiceEmptyAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_.reset(new apache::thrift::Cpp2ConnContext);
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }

  apache::thrift::HeaderChannel*  getHeaderChannel() {
    return dynamic_cast<apache::thrift::HeaderChannel*>(this->channel_.get());
  }
 protected:
  std::unique_ptr<apache::thrift::Cpp2ConnContext> connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
