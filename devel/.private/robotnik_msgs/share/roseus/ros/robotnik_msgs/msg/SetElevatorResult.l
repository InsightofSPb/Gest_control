;; Auto-generated. Do not edit!


(when (boundp 'robotnik_msgs::SetElevatorResult)
  (if (not (find-package "ROBOTNIK_MSGS"))
    (make-package "ROBOTNIK_MSGS"))
  (shadow 'SetElevatorResult (find-package "ROBOTNIK_MSGS")))
(unless (find-package "ROBOTNIK_MSGS::SETELEVATORRESULT")
  (make-package "ROBOTNIK_MSGS::SETELEVATORRESULT"))

(in-package "ROS")
;;//! \htmlinclude SetElevatorResult.msg.html


(defclass robotnik_msgs::SetElevatorResult
  :super ros::object
  :slots (_result _status ))

(defmethod robotnik_msgs::SetElevatorResult
  (:init
   (&key
    ((:result __result) nil)
    ((:status __status) (instance robotnik_msgs::ElevatorStatus :init))
    )
   (send-super :init)
   (setq _result __result)
   (setq _status __status)
   self)
  (:result
   (&optional (__result :null))
   (if (not (eq __result :null)) (setq _result __result)) _result)
  (:status
   (&rest __status)
   (if (keywordp (car __status))
       (send* _status __status)
     (progn
       (if __status (setq _status (car __status)))
       _status)))
  (:serialization-length
   ()
   (+
    ;; bool _result
    1
    ;; robotnik_msgs/ElevatorStatus _status
    (send _status :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _result
       (if _result (write-byte -1 s) (write-byte 0 s))
     ;; robotnik_msgs/ElevatorStatus _status
       (send _status :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _result
     (setq _result (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; robotnik_msgs/ElevatorStatus _status
     (send _status :deserialize buf ptr-) (incf ptr- (send _status :serialization-length))
   ;;
   self)
  )

(setf (get robotnik_msgs::SetElevatorResult :md5sum-) "247f8f0d4edf8e0b2ea11d3758b71b4f")
(setf (get robotnik_msgs::SetElevatorResult :datatype-) "robotnik_msgs/SetElevatorResult")
(setf (get robotnik_msgs::SetElevatorResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
bool result
robotnik_msgs/ElevatorStatus status

================================================================================
MSG: robotnik_msgs/ElevatorStatus
# state
string RAISING=raising
string LOWERING=lowering
string IDLE=idle
string ERROR_G_IO=error_getting_io
string ERROR_S_IO=error_setting_io
string ERROR_TIMEOUT=error_timeout_in_action
# position
string UP=up
string DOWN=down
string UNKNOWN=unknown
# IDLE, RAISING, LOWERING
string state
# UP, DOWN, UNKNOWN
string position
float32 height

")



(provide :robotnik_msgs/SetElevatorResult "247f8f0d4edf8e0b2ea11d3758b71b4f")

