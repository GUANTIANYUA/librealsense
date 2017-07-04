// Generated by gencpp from file realsense_msgs/pose.msg
// DO NOT EDIT!


#ifndef REALSENSE_MSGS_MESSAGE_POSE_H
#define REALSENSE_MSGS_MESSAGE_POSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <include/msgs/geometry_msgs/Vector3.h>
#include <include/msgs/geometry_msgs/Quaternion.h>
#include <include/msgs/geometry_msgs/Vector3.h>
#include <include/msgs/geometry_msgs/Vector3.h>
#include <include/msgs/geometry_msgs/Vector3.h>
#include <include/msgs/geometry_msgs/Vector3.h>

namespace realsense_msgs
{
template <class ContainerAllocator>
struct pose_
{
  typedef pose_<ContainerAllocator> Type;

  pose_()
    : translation()
    , rotation()
    , velocity()
    , angular_velocity()
    , acceleration()
    , angular_acceleration()
    , timestamp(0)
    , system_timestamp(0)  {
    }
  pose_(const ContainerAllocator& _alloc)
    : translation(_alloc)
    , rotation(_alloc)
    , velocity(_alloc)
    , angular_velocity(_alloc)
    , acceleration(_alloc)
    , angular_acceleration(_alloc)
    , timestamp(0)
    , system_timestamp(0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _translation_type;
  _translation_type translation;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _rotation_type;
  _rotation_type rotation;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _angular_velocity_type;
  _angular_velocity_type angular_velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _acceleration_type;
  _acceleration_type acceleration;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _angular_acceleration_type;
  _angular_acceleration_type angular_acceleration;

   typedef uint64_t _timestamp_type;
  _timestamp_type timestamp;

   typedef uint64_t _system_timestamp_type;
  _system_timestamp_type system_timestamp;




  typedef boost::shared_ptr< ::realsense_msgs::pose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::realsense_msgs::pose_<ContainerAllocator> const> ConstPtr;

}; // struct pose_

typedef ::realsense_msgs::pose_<std::allocator<void> > pose;

typedef boost::shared_ptr< ::realsense_msgs::pose > posePtr;
typedef boost::shared_ptr< ::realsense_msgs::pose const> poseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::realsense_msgs::pose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::realsense_msgs::pose_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace realsense_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'realsense_msgs': ['/home/administrator/ros/realsense_sdk_internal/sdk_internal/tools/realsense_msgs_generator/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::realsense_msgs::pose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::realsense_msgs::pose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense_msgs::pose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense_msgs::pose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense_msgs::pose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense_msgs::pose_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::realsense_msgs::pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "befd7be861f6533fae56f3f40630413c";
  }

  static const char* value(const ::realsense_msgs::pose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbefd7be861f6533fULL;
  static const uint64_t static_value2 = 0xae56f3f40630413cULL;
};

template<class ContainerAllocator>
struct DataType< ::realsense_msgs::pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "realsense_msgs/pose";
  }

  static const char* value(const ::realsense_msgs::pose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::realsense_msgs::pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Vector3 translation\n\
geometry_msgs/Quaternion rotation   \n\
geometry_msgs/Vector3 velocity    \n\
geometry_msgs/Vector3 angular_velocity \n\
geometry_msgs/Vector3 acceleration    \n\
geometry_msgs/Vector3 angular_acceleration\n\
uint64 timestamp\n\
uint64 system_timestamp\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::realsense_msgs::pose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::realsense_msgs::pose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.translation);
      stream.next(m.rotation);
      stream.next(m.velocity);
      stream.next(m.angular_velocity);
      stream.next(m.acceleration);
      stream.next(m.angular_acceleration);
      stream.next(m.timestamp);
      stream.next(m.system_timestamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct pose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::realsense_msgs::pose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::realsense_msgs::pose_<ContainerAllocator>& v)
  {
    s << indent << "translation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.translation);
    s << indent << "rotation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.rotation);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "angular_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular_velocity);
    s << indent << "acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.acceleration);
    s << indent << "angular_acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular_acceleration);
    s << indent << "timestamp: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.timestamp);
    s << indent << "system_timestamp: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.system_timestamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // REALSENSE_MSGS_MESSAGE_POSE_H
