// Generated by gencpp from file intera_core_msgs/JointLimits.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_JOINTLIMITS_H
#define INTERA_CORE_MSGS_MESSAGE_JOINTLIMITS_H


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
struct JointLimits_
{
  typedef JointLimits_<ContainerAllocator> Type;

  JointLimits_()
    : joint_names()
    , position_lower()
    , position_upper()
    , velocity()
    , accel()
    , effort()  {
    }
  JointLimits_(const ContainerAllocator& _alloc)
    : joint_names(_alloc)
    , position_lower(_alloc)
    , position_upper(_alloc)
    , velocity(_alloc)
    , accel(_alloc)
    , effort(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_lower_type;
  _position_lower_type position_lower;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_upper_type;
  _position_upper_type position_upper;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _velocity_type;
  _velocity_type velocity;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _accel_type;
  _accel_type accel;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _effort_type;
  _effort_type effort;





  typedef boost::shared_ptr< ::intera_core_msgs::JointLimits_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::JointLimits_<ContainerAllocator> const> ConstPtr;

}; // struct JointLimits_

typedef ::intera_core_msgs::JointLimits_<std::allocator<void> > JointLimits;

typedef boost::shared_ptr< ::intera_core_msgs::JointLimits > JointLimitsPtr;
typedef boost::shared_ptr< ::intera_core_msgs::JointLimits const> JointLimitsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::JointLimits_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::JointLimits_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'intera_core_msgs': ['/home/rachel/rawhide/rawhide_ws/src/intera_common/intera_core_msgs/msg', '/home/rachel/rawhide/rawhide_ws/devel/share/intera_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::JointLimits_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::JointLimits_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::JointLimits_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::JointLimits_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::JointLimits_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::JointLimits_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::JointLimits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c4c445eb2c9324525a704c84ca1e7598";
  }

  static const char* value(const ::intera_core_msgs::JointLimits_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc4c445eb2c932452ULL;
  static const uint64_t static_value2 = 0x5a704c84ca1e7598ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::JointLimits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/JointLimits";
  }

  static const char* value(const ::intera_core_msgs::JointLimits_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::JointLimits_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# names of the joints\n"
"string[] joint_names\n"
"\n"
"# lower bound on the angular position in radians\n"
"float64[] position_lower\n"
"\n"
"# upper bound on the angular position in radians\n"
"float64[] position_upper\n"
"\n"
"# symmetric maximum joint velocity in radians/second\n"
"float64[] velocity\n"
"\n"
"# symmetric maximum joint acceleration in radians/second^2\n"
"float64[] accel\n"
"\n"
"# symmetric maximum joint torque in Newton-meters\n"
"float64[] effort\n"
;
  }

  static const char* value(const ::intera_core_msgs::JointLimits_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::JointLimits_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_names);
      stream.next(m.position_lower);
      stream.next(m.position_upper);
      stream.next(m.velocity);
      stream.next(m.accel);
      stream.next(m.effort);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointLimits_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::JointLimits_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::JointLimits_<ContainerAllocator>& v)
  {
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "position_lower[]" << std::endl;
    for (size_t i = 0; i < v.position_lower.size(); ++i)
    {
      s << indent << "  position_lower[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position_lower[i]);
    }
    s << indent << "position_upper[]" << std::endl;
    for (size_t i = 0; i < v.position_upper.size(); ++i)
    {
      s << indent << "  position_upper[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position_upper[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "accel[]" << std::endl;
    for (size_t i = 0; i < v.accel.size(); ++i)
    {
      s << indent << "  accel[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.accel[i]);
    }
    s << indent << "effort[]" << std::endl;
    for (size_t i = 0; i < v.effort.size(); ++i)
    {
      s << indent << "  effort[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.effort[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_JOINTLIMITS_H
