// Generated by gencpp from file franka_msgs/SetJointImpedanceResponse.msg
// DO NOT EDIT!


#ifndef FRANKA_MSGS_MESSAGE_SETJOINTIMPEDANCERESPONSE_H
#define FRANKA_MSGS_MESSAGE_SETJOINTIMPEDANCERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace franka_msgs
{
template <class ContainerAllocator>
struct SetJointImpedanceResponse_
{
  typedef SetJointImpedanceResponse_<ContainerAllocator> Type;

  SetJointImpedanceResponse_()
    : success(false)
    , error()  {
    }
  SetJointImpedanceResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , error(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _error_type;
  _error_type error;





  typedef boost::shared_ptr< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetJointImpedanceResponse_

typedef ::franka_msgs::SetJointImpedanceResponse_<std::allocator<void> > SetJointImpedanceResponse;

typedef boost::shared_ptr< ::franka_msgs::SetJointImpedanceResponse > SetJointImpedanceResponsePtr;
typedef boost::shared_ptr< ::franka_msgs::SetJointImpedanceResponse const> SetJointImpedanceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator1> & lhs, const ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.error == rhs.error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator1> & lhs, const ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace franka_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45872d25d65c97743cc71afc6d4e884d";
  }

  static const char* value(const ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45872d25d65c9774ULL;
  static const uint64_t static_value2 = 0x3cc71afc6d4e884dULL;
};

template<class ContainerAllocator>
struct DataType< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "franka_msgs/SetJointImpedanceResponse";
  }

  static const char* value(const ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string error\n"
"\n"
"\n"
;
  }

  static const char* value(const ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetJointImpedanceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::franka_msgs::SetJointImpedanceResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "error: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FRANKA_MSGS_MESSAGE_SETJOINTIMPEDANCERESPONSE_H
