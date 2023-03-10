// Generated by gencpp from file robotnik_msgs/MotorCurrent.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_MOTORCURRENT_H
#define ROBOTNIK_MSGS_MESSAGE_MOTORCURRENT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_msgs
{
template <class ContainerAllocator>
struct MotorCurrent_
{
  typedef MotorCurrent_<ContainerAllocator> Type;

  MotorCurrent_()
    : can_id()
    , name()
    , continuous_current_limit()
    , current_peak_time()
    , current_peak_limit()  {
    }
  MotorCurrent_(const ContainerAllocator& _alloc)
    : can_id(_alloc)
    , name(_alloc)
    , continuous_current_limit(_alloc)
    , current_peak_time(_alloc)
    , current_peak_limit(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _can_id_type;
  _can_id_type can_id;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _name_type;
  _name_type name;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _continuous_current_limit_type;
  _continuous_current_limit_type continuous_current_limit;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _current_peak_time_type;
  _current_peak_time_type current_peak_time;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _current_peak_limit_type;
  _current_peak_limit_type current_peak_limit;





  typedef boost::shared_ptr< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> const> ConstPtr;

}; // struct MotorCurrent_

typedef ::robotnik_msgs::MotorCurrent_<std::allocator<void> > MotorCurrent;

typedef boost::shared_ptr< ::robotnik_msgs::MotorCurrent > MotorCurrentPtr;
typedef boost::shared_ptr< ::robotnik_msgs::MotorCurrent const> MotorCurrentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::MotorCurrent_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::MotorCurrent_<ContainerAllocator1> & lhs, const ::robotnik_msgs::MotorCurrent_<ContainerAllocator2> & rhs)
{
  return lhs.can_id == rhs.can_id &&
    lhs.name == rhs.name &&
    lhs.continuous_current_limit == rhs.continuous_current_limit &&
    lhs.current_peak_time == rhs.current_peak_time &&
    lhs.current_peak_limit == rhs.current_peak_limit;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::MotorCurrent_<ContainerAllocator1> & lhs, const ::robotnik_msgs::MotorCurrent_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "683e2e0ea0c1b322bc7f35b2f02088ee";
  }

  static const char* value(const ::robotnik_msgs::MotorCurrent_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x683e2e0ea0c1b322ULL;
  static const uint64_t static_value2 = 0xbc7f35b2f02088eeULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/MotorCurrent";
  }

  static const char* value(const ::robotnik_msgs::MotorCurrent_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# either can_id or name are set\n"
"# if can_id is -1, then this refers to all motors.\n"
"int32[] can_id\n"
"string[] name\n"
"float32[] continuous_current_limit # Amperes\n"
"float32[] current_peak_time # Seconds\n"
"float32[] current_peak_limit # Amperes\n"
;
  }

  static const char* value(const ::robotnik_msgs::MotorCurrent_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.can_id);
      stream.next(m.name);
      stream.next(m.continuous_current_limit);
      stream.next(m.current_peak_time);
      stream.next(m.current_peak_limit);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorCurrent_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::MotorCurrent_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::MotorCurrent_<ContainerAllocator>& v)
  {
    s << indent << "can_id[]" << std::endl;
    for (size_t i = 0; i < v.can_id.size(); ++i)
    {
      s << indent << "  can_id[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.can_id[i]);
    }
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "continuous_current_limit[]" << std::endl;
    for (size_t i = 0; i < v.continuous_current_limit.size(); ++i)
    {
      s << indent << "  continuous_current_limit[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.continuous_current_limit[i]);
    }
    s << indent << "current_peak_time[]" << std::endl;
    for (size_t i = 0; i < v.current_peak_time.size(); ++i)
    {
      s << indent << "  current_peak_time[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.current_peak_time[i]);
    }
    s << indent << "current_peak_limit[]" << std::endl;
    for (size_t i = 0; i < v.current_peak_limit.size(); ++i)
    {
      s << indent << "  current_peak_limit[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.current_peak_limit[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_MOTORCURRENT_H
