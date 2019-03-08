// Generated by gencpp from file intera_core_msgs/HeadState.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_HEADSTATE_H
#define INTERA_CORE_MSGS_MESSAGE_HEADSTATE_H


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
struct HeadState_
{
  typedef HeadState_<ContainerAllocator> Type;

  HeadState_()
    : pan(0.0)
    , isTurning(false)
    , isBlocked(false)
    , panMode(0)  {
    }
  HeadState_(const ContainerAllocator& _alloc)
    : pan(0.0)
    , isTurning(false)
    , isBlocked(false)
    , panMode(0)  {
  (void)_alloc;
    }



   typedef float _pan_type;
  _pan_type pan;

   typedef uint8_t _isTurning_type;
  _isTurning_type isTurning;

   typedef uint8_t _isBlocked_type;
  _isBlocked_type isBlocked;

   typedef uint8_t _panMode_type;
  _panMode_type panMode;



  enum {
    PASSIVE_MODE = 0u,
    ACTIVE_MODE = 1u,
    ACTIVE_CANCELLATION_MODE = 2u,
  };


  typedef boost::shared_ptr< ::intera_core_msgs::HeadState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::HeadState_<ContainerAllocator> const> ConstPtr;

}; // struct HeadState_

typedef ::intera_core_msgs::HeadState_<std::allocator<void> > HeadState;

typedef boost::shared_ptr< ::intera_core_msgs::HeadState > HeadStatePtr;
typedef boost::shared_ptr< ::intera_core_msgs::HeadState const> HeadStateConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::HeadState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::HeadState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::intera_core_msgs::HeadState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::HeadState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::HeadState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::HeadState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::HeadState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::HeadState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::HeadState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "51024ade10ffefe117049c9ba6fd743c";
  }

  static const char* value(const ::intera_core_msgs::HeadState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x51024ade10ffefe1ULL;
  static const uint64_t static_value2 = 0x17049c9ba6fd743cULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::HeadState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/HeadState";
  }

  static const char* value(const ::intera_core_msgs::HeadState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::HeadState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 pan\n\
bool isTurning\n\
\n\
# isBlocked will be true during active cancellation when the desired head position\n\
# can not be reached because of j0's current position\n\
bool isBlocked\n\
\n\
# panMode will be one of\n\
uint8 PASSIVE_MODE             = 0\n\
uint8 ACTIVE_MODE              = 1\n\
uint8 ACTIVE_CANCELLATION_MODE = 2\n\
#\n\
uint8 panMode\n\
\n\
\n\
";
  }

  static const char* value(const ::intera_core_msgs::HeadState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::HeadState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pan);
      stream.next(m.isTurning);
      stream.next(m.isBlocked);
      stream.next(m.panMode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HeadState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::HeadState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::HeadState_<ContainerAllocator>& v)
  {
    s << indent << "pan: ";
    Printer<float>::stream(s, indent + "  ", v.pan);
    s << indent << "isTurning: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isTurning);
    s << indent << "isBlocked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isBlocked);
    s << indent << "panMode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.panMode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_HEADSTATE_H
