// Generated by gencpp from file move_robot/las_mes.msg
// DO NOT EDIT!


#ifndef MOVE_ROBOT_MESSAGE_LAS_MES_H
#define MOVE_ROBOT_MESSAGE_LAS_MES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace move_robot
{
template <class ContainerAllocator>
struct las_mes_
{
  typedef las_mes_<ContainerAllocator> Type;

  las_mes_()
    : las_dist()
    , las_dist_x()
    , las_dist_y()
    , las_angles()  {
    }
  las_mes_(const ContainerAllocator& _alloc)
    : las_dist(_alloc)
    , las_dist_x(_alloc)
    , las_dist_y(_alloc)
    , las_angles(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _las_dist_type;
  _las_dist_type las_dist;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _las_dist_x_type;
  _las_dist_x_type las_dist_x;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _las_dist_y_type;
  _las_dist_y_type las_dist_y;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _las_angles_type;
  _las_angles_type las_angles;





  typedef boost::shared_ptr< ::move_robot::las_mes_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::move_robot::las_mes_<ContainerAllocator> const> ConstPtr;

}; // struct las_mes_

typedef ::move_robot::las_mes_<std::allocator<void> > las_mes;

typedef boost::shared_ptr< ::move_robot::las_mes > las_mesPtr;
typedef boost::shared_ptr< ::move_robot::las_mes const> las_mesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::move_robot::las_mes_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::move_robot::las_mes_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::move_robot::las_mes_<ContainerAllocator1> & lhs, const ::move_robot::las_mes_<ContainerAllocator2> & rhs)
{
  return lhs.las_dist == rhs.las_dist &&
    lhs.las_dist_x == rhs.las_dist_x &&
    lhs.las_dist_y == rhs.las_dist_y &&
    lhs.las_angles == rhs.las_angles;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::move_robot::las_mes_<ContainerAllocator1> & lhs, const ::move_robot::las_mes_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace move_robot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::move_robot::las_mes_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::move_robot::las_mes_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::move_robot::las_mes_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::move_robot::las_mes_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::move_robot::las_mes_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::move_robot::las_mes_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::move_robot::las_mes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aad5a2de89d4ae32cf5dfd4ccf601549";
  }

  static const char* value(const ::move_robot::las_mes_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaad5a2de89d4ae32ULL;
  static const uint64_t static_value2 = 0xcf5dfd4ccf601549ULL;
};

template<class ContainerAllocator>
struct DataType< ::move_robot::las_mes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "move_robot/las_mes";
  }

  static const char* value(const ::move_robot::las_mes_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::move_robot::las_mes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] las_dist\n"
"float64[] las_dist_x\n"
"float64[] las_dist_y\n"
"float64[] las_angles\n"
"# float64[] velocities\n"
;
  }

  static const char* value(const ::move_robot::las_mes_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::move_robot::las_mes_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.las_dist);
      stream.next(m.las_dist_x);
      stream.next(m.las_dist_y);
      stream.next(m.las_angles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct las_mes_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::move_robot::las_mes_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::move_robot::las_mes_<ContainerAllocator>& v)
  {
    s << indent << "las_dist[]" << std::endl;
    for (size_t i = 0; i < v.las_dist.size(); ++i)
    {
      s << indent << "  las_dist[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.las_dist[i]);
    }
    s << indent << "las_dist_x[]" << std::endl;
    for (size_t i = 0; i < v.las_dist_x.size(); ++i)
    {
      s << indent << "  las_dist_x[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.las_dist_x[i]);
    }
    s << indent << "las_dist_y[]" << std::endl;
    for (size_t i = 0; i < v.las_dist_y.size(); ++i)
    {
      s << indent << "  las_dist_y[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.las_dist_y[i]);
    }
    s << indent << "las_angles[]" << std::endl;
    for (size_t i = 0; i < v.las_angles.size(); ++i)
    {
      s << indent << "  las_angles[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.las_angles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVE_ROBOT_MESSAGE_LAS_MES_H
