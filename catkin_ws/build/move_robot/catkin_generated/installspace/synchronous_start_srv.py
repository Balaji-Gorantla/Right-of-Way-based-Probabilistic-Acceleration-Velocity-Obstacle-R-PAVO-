#!/usr/bin/env python3

import rospy
from move_robot.srv import SyncMotion, SyncMotionResponse

def handle_trigger_motion(req):
    rospy.loginfo("Received motion trigger request: %s", req.trigger)

    # Here, you can add your motion controller logic.
    # When req.trigger is True, start motion control.

    # Simulate motion control for testing.
    if req.trigger:
        # Start motion controller logic
        rospy.loginfo("Starting motion control...")
        # Your motion controller code here
        rospy.loginfo("Motion control completed.")
        return SyncMotionResponse(True)

    return SyncMotionResponse(False)

# def trigger_sync_motion_client(trigger):
#     rospy.wait_for_service('trigger_sync_motion')
#     try:
#         trigger_motion = rospy.ServiceProxy('trigger_sync_motion', SyncMotion)
#         response = trigger_motion(trigger)
#         return response.sync_success
#     except rospy.ServiceException as e:
#         rospy.logerr("Sync Service call failed: %s", e)
#         return False

        


def motion_controller_server():
    rospy.init_node('motion_controller_sync_server')
    rospy.Service('trigger_sync_motion', SyncMotion, handle_trigger_motion)
    rospy.loginfo("Motion controller server is ready.")
    rospy.spin()

if __name__ == "__main__":
    motion_controller_server()
    # trigger = True
    # sync_success = trigger_sync_motion_client(trigger)
    # if sync_success:
    #     rospy.loginfo("Motion control triggered successfully.")
