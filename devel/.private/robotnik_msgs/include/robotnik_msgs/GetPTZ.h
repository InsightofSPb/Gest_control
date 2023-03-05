// Generated by gencpp from file robotnik_msgs/GetPTZ.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_GETPTZ_H
#define ROBOTNIK_MSGS_MESSAGE_GETPTZ_H

#include <ros/service_traits.h>


#include <robotnik_msgs/GetPTZRequest.h>
#include <robotnik_msgs/GetPTZResponse.h>


namespace robotnik_msgs
{

struct GetPTZ
{

typedef GetPTZRequest Request;
typedef GetPTZResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetPTZ
} // namespace robotnik_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robotnik_msgs::GetPTZ > {
  static const char* value()
  {
    return "593cec5c2082b3b9a1de4fe76a27b17d";
  }

  static const char* value(const ::robotnik_msgs::GetPTZ&) { return value(); }
};

template<>
struct DataType< ::robotnik_msgs::GetPTZ > {
  static const char* value()
  {
    return "robotnik_msgs/GetPTZ";
  }

  static const char* value(const ::robotnik_msgs::GetPTZ&) { return value(); }
};


// service_traits::MD5Sum< ::robotnik_msgs::GetPTZRequest> should match
// service_traits::MD5Sum< ::robotnik_msgs::GetPTZ >
template<>
struct MD5Sum< ::robotnik_msgs::GetPTZRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robotnik_msgs::GetPTZ >::value();
  }
  static const char* value(const ::robotnik_msgs::GetPTZRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotnik_msgs::GetPTZRequest> should match
// service_traits::DataType< ::robotnik_msgs::GetPTZ >
template<>
struct DataType< ::robotnik_msgs::GetPTZRequest>
{
  static const char* value()
  {
    return DataType< ::robotnik_msgs::GetPTZ >::value();
  }
  static const char* value(const ::robotnik_msgs::GetPTZRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robotnik_msgs::GetPTZResponse> should match
// service_traits::MD5Sum< ::robotnik_msgs::GetPTZ >
template<>
struct MD5Sum< ::robotnik_msgs::GetPTZResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robotnik_msgs::GetPTZ >::value();
  }
  static const char* value(const ::robotnik_msgs::GetPTZResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotnik_msgs::GetPTZResponse> should match
// service_traits::DataType< ::robotnik_msgs::GetPTZ >
template<>
struct DataType< ::robotnik_msgs::GetPTZResponse>
{
  static const char* value()
  {
    return DataType< ::robotnik_msgs::GetPTZ >::value();
  }
  static const char* value(const ::robotnik_msgs::GetPTZResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_GETPTZ_H