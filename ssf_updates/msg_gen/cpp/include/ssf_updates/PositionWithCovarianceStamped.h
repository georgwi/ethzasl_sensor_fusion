/* Auto-generated by genmsg_cpp for file /home/georg/Software/ROS/ethzasl_sensor_fusion/ssf_updates/msg/PositionWithCovarianceStamped.msg */
#ifndef SSF_UPDATES_MESSAGE_POSITIONWITHCOVARIANCESTAMPED_H
#define SSF_UPDATES_MESSAGE_POSITIONWITHCOVARIANCESTAMPED_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "geometry_msgs/Point.h"

namespace ssf_updates
{
template <class ContainerAllocator>
struct PositionWithCovarianceStamped_ {
  typedef PositionWithCovarianceStamped_<ContainerAllocator> Type;

  PositionWithCovarianceStamped_()
  : header()
  , position()
  , covariance()
  {
    covariance.assign(0.0);
  }

  PositionWithCovarianceStamped_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , position(_alloc)
  , covariance()
  {
    covariance.assign(0.0);
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
   ::geometry_msgs::Point_<ContainerAllocator>  position;

  typedef boost::array<double, 9>  _covariance_type;
  boost::array<double, 9>  covariance;


  typedef boost::shared_ptr< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PositionWithCovarianceStamped
typedef  ::ssf_updates::PositionWithCovarianceStamped_<std::allocator<void> > PositionWithCovarianceStamped;

typedef boost::shared_ptr< ::ssf_updates::PositionWithCovarianceStamped> PositionWithCovarianceStampedPtr;
typedef boost::shared_ptr< ::ssf_updates::PositionWithCovarianceStamped const> PositionWithCovarianceStampedConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ssf_updates

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3128d09129e2da15dcfe14f5a9b5a902";
  }

  static const char* value(const  ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3128d09129e2da15ULL;
  static const uint64_t static_value2 = 0xdcfe14f5a9b5a902ULL;
};

template<class ContainerAllocator>
struct DataType< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ssf_updates/PositionWithCovarianceStamped";
  }

  static const char* value(const  ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
geometry_msgs/Point position\n\
float64[9] covariance\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.position);
    stream.next(m.covariance);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PositionWithCovarianceStamped_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ssf_updates::PositionWithCovarianceStamped_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "position: ";
s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // SSF_UPDATES_MESSAGE_POSITIONWITHCOVARIANCESTAMPED_H

