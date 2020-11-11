// Generated by gencpp from file rft_msg/rft.msg
// DO NOT EDIT!


#ifndef RFT_MSG_MESSAGE_RFT_H
#define RFT_MSG_MESSAGE_RFT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rft_msg
{
template <class ContainerAllocator>
struct rft_
{
  typedef rft_<ContainerAllocator> Type;

  rft_()
    : f_x(0.0)
    , f_y(0.0)
    , f_z(0.0)  {
    }
  rft_(const ContainerAllocator& _alloc)
    : f_x(0.0)
    , f_y(0.0)
    , f_z(0.0)  {
  (void)_alloc;
    }



   typedef double _f_x_type;
  _f_x_type f_x;

   typedef double _f_y_type;
  _f_y_type f_y;

   typedef double _f_z_type;
  _f_z_type f_z;





  typedef boost::shared_ptr< ::rft_msg::rft_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rft_msg::rft_<ContainerAllocator> const> ConstPtr;

}; // struct rft_

typedef ::rft_msg::rft_<std::allocator<void> > rft;

typedef boost::shared_ptr< ::rft_msg::rft > rftPtr;
typedef boost::shared_ptr< ::rft_msg::rft const> rftConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rft_msg::rft_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rft_msg::rft_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rft_msg::rft_<ContainerAllocator1> & lhs, const ::rft_msg::rft_<ContainerAllocator2> & rhs)
{
  return lhs.f_x == rhs.f_x &&
    lhs.f_y == rhs.f_y &&
    lhs.f_z == rhs.f_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rft_msg::rft_<ContainerAllocator1> & lhs, const ::rft_msg::rft_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rft_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rft_msg::rft_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rft_msg::rft_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rft_msg::rft_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rft_msg::rft_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rft_msg::rft_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rft_msg::rft_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rft_msg::rft_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bfff34252712dea0382c929d95a84d0b";
  }

  static const char* value(const ::rft_msg::rft_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbfff34252712dea0ULL;
  static const uint64_t static_value2 = 0x382c929d95a84d0bULL;
};

template<class ContainerAllocator>
struct DataType< ::rft_msg::rft_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rft_msg/rft";
  }

  static const char* value(const ::rft_msg::rft_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rft_msg::rft_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 f_x\n"
"float64 f_y\n"
"float64 f_z\n"
;
  }

  static const char* value(const ::rft_msg::rft_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rft_msg::rft_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.f_x);
      stream.next(m.f_y);
      stream.next(m.f_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct rft_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rft_msg::rft_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rft_msg::rft_<ContainerAllocator>& v)
  {
    s << indent << "f_x: ";
    Printer<double>::stream(s, indent + "  ", v.f_x);
    s << indent << "f_y: ";
    Printer<double>::stream(s, indent + "  ", v.f_y);
    s << indent << "f_z: ";
    Printer<double>::stream(s, indent + "  ", v.f_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RFT_MSG_MESSAGE_RFT_H