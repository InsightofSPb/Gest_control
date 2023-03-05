// Generated by gencpp from file robotnik_msgs/MotorStatus.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_MOTORSTATUS_H
#define ROBOTNIK_MSGS_MESSAGE_MOTORSTATUS_H


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
struct MotorStatus_
{
  typedef MotorStatus_<ContainerAllocator> Type;

  MotorStatus_()
    : can_id(0)
    , joint()
    , state()
    , status()
    , communicationstatus()
    , mode_of_operation()
    , activestatusword()
    , activedriveflags()
    , digitaloutputs()
    , digitalinputs()
    , current(0.0)
    , analoginputs()
    , statusword()
    , driveflags()  {
    }
  MotorStatus_(const ContainerAllocator& _alloc)
    : can_id(0)
    , joint(_alloc)
    , state(_alloc)
    , status(_alloc)
    , communicationstatus(_alloc)
    , mode_of_operation(_alloc)
    , activestatusword(_alloc)
    , activedriveflags(_alloc)
    , digitaloutputs(_alloc)
    , digitalinputs(_alloc)
    , current(0.0)
    , analoginputs(_alloc)
    , statusword(_alloc)
    , driveflags(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _can_id_type;
  _can_id_type can_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _joint_type;
  _joint_type joint;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _state_type;
  _state_type state;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _communicationstatus_type;
  _communicationstatus_type communicationstatus;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _mode_of_operation_type;
  _mode_of_operation_type mode_of_operation;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _activestatusword_type;
  _activestatusword_type activestatusword;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _activedriveflags_type;
  _activedriveflags_type activedriveflags;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _digitaloutputs_type;
  _digitaloutputs_type digitaloutputs;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _digitalinputs_type;
  _digitalinputs_type digitalinputs;

   typedef float _current_type;
  _current_type current;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _analoginputs_type;
  _analoginputs_type analoginputs;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _statusword_type;
  _statusword_type statusword;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _driveflags_type;
  _driveflags_type driveflags;





  typedef boost::shared_ptr< ::robotnik_msgs::MotorStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::MotorStatus_<ContainerAllocator> const> ConstPtr;

}; // struct MotorStatus_

typedef ::robotnik_msgs::MotorStatus_<std::allocator<void> > MotorStatus;

typedef boost::shared_ptr< ::robotnik_msgs::MotorStatus > MotorStatusPtr;
typedef boost::shared_ptr< ::robotnik_msgs::MotorStatus const> MotorStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::MotorStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::MotorStatus_<ContainerAllocator1> & lhs, const ::robotnik_msgs::MotorStatus_<ContainerAllocator2> & rhs)
{
  return lhs.can_id == rhs.can_id &&
    lhs.joint == rhs.joint &&
    lhs.state == rhs.state &&
    lhs.status == rhs.status &&
    lhs.communicationstatus == rhs.communicationstatus &&
    lhs.mode_of_operation == rhs.mode_of_operation &&
    lhs.activestatusword == rhs.activestatusword &&
    lhs.activedriveflags == rhs.activedriveflags &&
    lhs.digitaloutputs == rhs.digitaloutputs &&
    lhs.digitalinputs == rhs.digitalinputs &&
    lhs.current == rhs.current &&
    lhs.analoginputs == rhs.analoginputs &&
    lhs.statusword == rhs.statusword &&
    lhs.driveflags == rhs.driveflags;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::MotorStatus_<ContainerAllocator1> & lhs, const ::robotnik_msgs::MotorStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::MotorStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::MotorStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::MotorStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f36d1740e4c2f57c8e2136e05837a2ca";
  }

  static const char* value(const ::robotnik_msgs::MotorStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf36d1740e4c2f57cULL;
  static const uint64_t static_value2 = 0x8e2136e05837a2caULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/MotorStatus";
  }

  static const char* value(const ::robotnik_msgs::MotorStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 can_id\n"
"string joint\n"
"string state\n"
"string status\n"
"string communicationstatus\n"
"string mode_of_operation\n"
"string[] activestatusword\n"
"string[] activedriveflags\n"
"bool[] digitaloutputs\n"
"bool[] digitalinputs\n"
"float32 current\n"
"float32[] analoginputs\n"
"string statusword\n"
"string driveflags\n"
"\n"
"\n"
;
  }

  static const char* value(const ::robotnik_msgs::MotorStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.can_id);
      stream.next(m.joint);
      stream.next(m.state);
      stream.next(m.status);
      stream.next(m.communicationstatus);
      stream.next(m.mode_of_operation);
      stream.next(m.activestatusword);
      stream.next(m.activedriveflags);
      stream.next(m.digitaloutputs);
      stream.next(m.digitalinputs);
      stream.next(m.current);
      stream.next(m.analoginputs);
      stream.next(m.statusword);
      stream.next(m.driveflags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::MotorStatus_<ContainerAllocator>& v)
  {
    s << indent << "can_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_id);
    s << indent << "joint: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.joint);
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.state);
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.status);
    s << indent << "communicationstatus: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.communicationstatus);
    s << indent << "mode_of_operation: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.mode_of_operation);
    s << indent << "activestatusword[]" << std::endl;
    for (size_t i = 0; i < v.activestatusword.size(); ++i)
    {
      s << indent << "  activestatusword[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.activestatusword[i]);
    }
    s << indent << "activedriveflags[]" << std::endl;
    for (size_t i = 0; i < v.activedriveflags.size(); ++i)
    {
      s << indent << "  activedriveflags[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.activedriveflags[i]);
    }
    s << indent << "digitaloutputs[]" << std::endl;
    for (size_t i = 0; i < v.digitaloutputs.size(); ++i)
    {
      s << indent << "  digitaloutputs[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.digitaloutputs[i]);
    }
    s << indent << "digitalinputs[]" << std::endl;
    for (size_t i = 0; i < v.digitalinputs.size(); ++i)
    {
      s << indent << "  digitalinputs[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.digitalinputs[i]);
    }
    s << indent << "current: ";
    Printer<float>::stream(s, indent + "  ", v.current);
    s << indent << "analoginputs[]" << std::endl;
    for (size_t i = 0; i < v.analoginputs.size(); ++i)
    {
      s << indent << "  analoginputs[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.analoginputs[i]);
    }
    s << indent << "statusword: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.statusword);
    s << indent << "driveflags: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.driveflags);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_MOTORSTATUS_H
