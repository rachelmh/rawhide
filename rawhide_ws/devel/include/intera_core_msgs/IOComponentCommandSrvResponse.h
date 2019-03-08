// Generated by gencpp from file intera_core_msgs/IOComponentCommandSrvResponse.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_IOCOMPONENTCOMMANDSRVRESPONSE_H
#define INTERA_CORE_MSGS_MESSAGE_IOCOMPONENTCOMMANDSRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <intera_core_msgs/IOStatus.h>

namespace intera_core_msgs
{
template <class ContainerAllocator>
struct IOComponentCommandSrvResponse_
{
  typedef IOComponentCommandSrvResponse_<ContainerAllocator> Type;

  IOComponentCommandSrvResponse_()
    : time()
    , op()
    , status()
    , response()  {
    }
  IOComponentCommandSrvResponse_(const ContainerAllocator& _alloc)
    : time()
    , op(_alloc)
    , status(_alloc)
    , response(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _time_type;
  _time_type time;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _op_type;
  _op_type op;

   typedef  ::intera_core_msgs::IOStatus_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _response_type;
  _response_type response;





  typedef boost::shared_ptr< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IOComponentCommandSrvResponse_

typedef ::intera_core_msgs::IOComponentCommandSrvResponse_<std::allocator<void> > IOComponentCommandSrvResponse;

typedef boost::shared_ptr< ::intera_core_msgs::IOComponentCommandSrvResponse > IOComponentCommandSrvResponsePtr;
typedef boost::shared_ptr< ::intera_core_msgs::IOComponentCommandSrvResponse const> IOComponentCommandSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'intera_core_msgs': ['/home/rachel/rawhide/rawhide_ws/src/intera_common/intera_core_msgs/msg', '/home/rachel/rawhide/rawhide_ws/devel/share/intera_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "201c021e76b3e871e24d4b9fd38ffd49";
  }

  static const char* value(const ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x201c021e76b3e871ULL;
  static const uint64_t static_value2 = 0xe24d4b9fd38ffd49ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/IOComponentCommandSrvResponse";
  }

  static const char* value(const ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time time\n\
string op\n\
IOStatus status\n\
string response\n\
\n\
\n\
================================================================================\n\
MSG: intera_core_msgs/IOStatus\n\
## IO status data\n\
#\n\
string tag             # one of the values listed below\n\
#   down     Inoperative, not fully instantiated\n\
#   ready    OK, fully operational\n\
#   busy     OK, not ready to output data; input data value may be stale\n\
#   unready  OK, not operational; data is invalid\n\
#   error    Error, not operational\n\
string DOWN      = down\n\
string READY     = ready\n\
string BUSY      = busy\n\
string UNREADY   = unready\n\
string ERROR     = error\n\
#\n\
string id             # message id, for internationalization\n\
#\n\
string detail         # optional additional status detail\n\
#\n\
";
  }

  static const char* value(const ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.op);
      stream.next(m.status);
      stream.next(m.response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IOComponentCommandSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::IOComponentCommandSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.time);
    s << indent << "op: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.op);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::intera_core_msgs::IOStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "response: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_IOCOMPONENTCOMMANDSRVRESPONSE_H
