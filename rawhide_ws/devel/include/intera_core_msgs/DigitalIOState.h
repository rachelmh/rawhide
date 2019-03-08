// Generated by gencpp from file intera_core_msgs/DigitalIOState.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_DIGITALIOSTATE_H
#define INTERA_CORE_MSGS_MESSAGE_DIGITALIOSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace intera_core_msgs
{
template <class ContainerAllocator>
struct DigitalIOState_
{
  typedef DigitalIOState_<ContainerAllocator> Type;

  DigitalIOState_()
    : state(0)
    , isInputOnly(false)  {
    }
  DigitalIOState_(const ContainerAllocator& _alloc)
    : state(0)
    , isInputOnly(false)  {
  (void)_alloc;
    }



   typedef int8_t _state_type;
  _state_type state;

   typedef uint8_t _isInputOnly_type;
  _isInputOnly_type isInputOnly;



  enum {
    OFF = 0,
    ON = 1,
    PRESSED = 1,
    UNPRESSED = 0,
  };


  typedef boost::shared_ptr< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> const> ConstPtr;

}; // struct DigitalIOState_

typedef ::intera_core_msgs::DigitalIOState_<std::allocator<void> > DigitalIOState;

typedef boost::shared_ptr< ::intera_core_msgs::DigitalIOState > DigitalIOStatePtr;
typedef boost::shared_ptr< ::intera_core_msgs::DigitalIOState const> DigitalIOStateConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::DigitalIOState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'intera_core_msgs': ['/home/rachel/rawhide/rawhide_ws/src/intera_common/intera_core_msgs/msg', '/home/rachel/rawhide/rawhide_ws/devel/share/intera_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "29d0be3859dae81a66b28f167ecec98c";
  }

  static const char* value(const ::intera_core_msgs::DigitalIOState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x29d0be3859dae81aULL;
  static const uint64_t static_value2 = 0x66b28f167ecec98cULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/DigitalIOState";
  }

  static const char* value(const ::intera_core_msgs::DigitalIOState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 state\n\
bool isInputOnly\n\
\n\
int8 OFF = 0\n\
int8 ON  = 1\n\
int8 PRESSED = 1\n\
int8 UNPRESSED = 0\n\
";
  }

  static const char* value(const ::intera_core_msgs::DigitalIOState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
      stream.next(m.isInputOnly);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DigitalIOState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::DigitalIOState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::DigitalIOState_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<int8_t>::stream(s, indent + "  ", v.state);
    s << indent << "isInputOnly: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isInputOnly);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_DIGITALIOSTATE_H
