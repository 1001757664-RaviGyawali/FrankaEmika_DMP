// Generated by gencpp from file robot_trajectory_action/ExecuteTrajectoryGoal.msg
// DO NOT EDIT!


#ifndef ROBOT_TRAJECTORY_ACTION_MESSAGE_EXECUTETRAJECTORYGOAL_H
#define ROBOT_TRAJECTORY_ACTION_MESSAGE_EXECUTETRAJECTORYGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_trajectory_action
{
template <class ContainerAllocator>
struct ExecuteTrajectoryGoal_
{
  typedef ExecuteTrajectoryGoal_<ContainerAllocator> Type;

  ExecuteTrajectoryGoal_()
    : positions()
    , timestamps()  {
    }
  ExecuteTrajectoryGoal_(const ContainerAllocator& _alloc)
    : positions(_alloc)
    , timestamps(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _positions_type;
  _positions_type positions;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _timestamps_type;
  _timestamps_type timestamps;





  typedef boost::shared_ptr< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ExecuteTrajectoryGoal_

typedef ::robot_trajectory_action::ExecuteTrajectoryGoal_<std::allocator<void> > ExecuteTrajectoryGoal;

typedef boost::shared_ptr< ::robot_trajectory_action::ExecuteTrajectoryGoal > ExecuteTrajectoryGoalPtr;
typedef boost::shared_ptr< ::robot_trajectory_action::ExecuteTrajectoryGoal const> ExecuteTrajectoryGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator1> & lhs, const ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator2> & rhs)
{
  return lhs.positions == rhs.positions &&
    lhs.timestamps == rhs.timestamps;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator1> & lhs, const ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_trajectory_action

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e44b206639d15eb1af20c8b932076380";
  }

  static const char* value(const ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe44b206639d15eb1ULL;
  static const uint64_t static_value2 = 0xaf20c8b932076380ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_trajectory_action/ExecuteTrajectoryGoal";
  }

  static const char* value(const ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# ExecuteTrajectory.action\n"
"\n"
"float64[] positions\n"
"float64[] timestamps\n"
;
  }

  static const char* value(const ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.positions);
      stream.next(m.timestamps);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExecuteTrajectoryGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_trajectory_action::ExecuteTrajectoryGoal_<ContainerAllocator>& v)
  {
    s << indent << "positions[]" << std::endl;
    for (size_t i = 0; i < v.positions.size(); ++i)
    {
      s << indent << "  positions[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.positions[i]);
    }
    s << indent << "timestamps[]" << std::endl;
    for (size_t i = 0; i < v.timestamps.size(); ++i)
    {
      s << indent << "  timestamps[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.timestamps[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_TRAJECTORY_ACTION_MESSAGE_EXECUTETRAJECTORYGOAL_H
