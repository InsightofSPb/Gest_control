// Generated by gencpp from file robotnik_msgs/Logger.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_LOGGER_H
#define ROBOTNIK_MSGS_MESSAGE_LOGGER_H


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
struct Logger_
{
  typedef Logger_<ContainerAllocator> Type;

  Logger_()
    : date()
    , component()
    , tag()
    , log_level()
    , description()  {
    }
  Logger_(const ContainerAllocator& _alloc)
    : date(_alloc)
    , component(_alloc)
    , tag(_alloc)
    , log_level(_alloc)
    , description(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _date_type;
  _date_type date;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _component_type;
  _component_type component;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _tag_type;
  _tag_type tag;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _log_level_type;
  _log_level_type log_level;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _description_type;
  _description_type description;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(LOG_LEVEL_INFO)
  #undef LOG_LEVEL_INFO
#endif
#if defined(_WIN32) && defined(LOG_LEVEL_WARNING)
  #undef LOG_LEVEL_WARNING
#endif
#if defined(_WIN32) && defined(LOG_LEVEL_ERROR)
  #undef LOG_LEVEL_ERROR
#endif
#if defined(_WIN32) && defined(LOG_LEVEL_DEBUG)
  #undef LOG_LEVEL_DEBUG
#endif
#if defined(_WIN32) && defined(LOG_LEVEL_USER)
  #undef LOG_LEVEL_USER
#endif


  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOG_LEVEL_INFO;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOG_LEVEL_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOG_LEVEL_ERROR;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOG_LEVEL_DEBUG;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOG_LEVEL_USER;

  typedef boost::shared_ptr< ::robotnik_msgs::Logger_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::Logger_<ContainerAllocator> const> ConstPtr;

}; // struct Logger_

typedef ::robotnik_msgs::Logger_<std::allocator<void> > Logger;

typedef boost::shared_ptr< ::robotnik_msgs::Logger > LoggerPtr;
typedef boost::shared_ptr< ::robotnik_msgs::Logger const> LoggerConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      Logger_<ContainerAllocator>::LOG_LEVEL_INFO =
        
          "Info"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      Logger_<ContainerAllocator>::LOG_LEVEL_WARNING =
        
          "Warning"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      Logger_<ContainerAllocator>::LOG_LEVEL_ERROR =
        
          "Error"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      Logger_<ContainerAllocator>::LOG_LEVEL_DEBUG =
        
          "Debug"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      Logger_<ContainerAllocator>::LOG_LEVEL_USER =
        
          "User"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::Logger_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::Logger_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::Logger_<ContainerAllocator1> & lhs, const ::robotnik_msgs::Logger_<ContainerAllocator2> & rhs)
{
  return lhs.date == rhs.date &&
    lhs.component == rhs.component &&
    lhs.tag == rhs.tag &&
    lhs.log_level == rhs.log_level &&
    lhs.description == rhs.description;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::Logger_<ContainerAllocator1> & lhs, const ::robotnik_msgs::Logger_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::Logger_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::Logger_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::Logger_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::Logger_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::Logger_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::Logger_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::Logger_<ContainerAllocator> >
{
  static const char* value()
  {
    return "897db59ca03596ba34a75f6e11ca536d";
  }

  static const char* value(const ::robotnik_msgs::Logger_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x897db59ca03596baULL;
  static const uint64_t static_value2 = 0x34a75f6e11ca536dULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::Logger_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/Logger";
  }

  static const char* value(const ::robotnik_msgs::Logger_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::Logger_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string LOG_LEVEL_INFO=Info\n"
"string LOG_LEVEL_WARNING=Warning\n"
"string LOG_LEVEL_ERROR=Error\n"
"string LOG_LEVEL_DEBUG=Debug\n"
"string LOG_LEVEL_USER=User\n"
"string date\n"
"string component\n"
"string tag\n"
"string log_level\n"
"string description\n"
;
  }

  static const char* value(const ::robotnik_msgs::Logger_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::Logger_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.date);
      stream.next(m.component);
      stream.next(m.tag);
      stream.next(m.log_level);
      stream.next(m.description);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Logger_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::Logger_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::Logger_<ContainerAllocator>& v)
  {
    s << indent << "date: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.date);
    s << indent << "component: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.component);
    s << indent << "tag: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.tag);
    s << indent << "log_level: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.log_level);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.description);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_LOGGER_H
