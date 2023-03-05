;; Auto-generated. Do not edit!


(when (boundp 'robotnik_msgs::Logger)
  (if (not (find-package "ROBOTNIK_MSGS"))
    (make-package "ROBOTNIK_MSGS"))
  (shadow 'Logger (find-package "ROBOTNIK_MSGS")))
(unless (find-package "ROBOTNIK_MSGS::LOGGER")
  (make-package "ROBOTNIK_MSGS::LOGGER"))

(in-package "ROS")
;;//! \htmlinclude Logger.msg.html


(intern "*LOG_LEVEL_INFO*" (find-package "ROBOTNIK_MSGS::LOGGER"))
(shadow '*LOG_LEVEL_INFO* (find-package "ROBOTNIK_MSGS::LOGGER"))
(defconstant robotnik_msgs::Logger::*LOG_LEVEL_INFO* "Info")
(intern "*LOG_LEVEL_WARNING*" (find-package "ROBOTNIK_MSGS::LOGGER"))
(shadow '*LOG_LEVEL_WARNING* (find-package "ROBOTNIK_MSGS::LOGGER"))
(defconstant robotnik_msgs::Logger::*LOG_LEVEL_WARNING* "Warning")
(intern "*LOG_LEVEL_ERROR*" (find-package "ROBOTNIK_MSGS::LOGGER"))
(shadow '*LOG_LEVEL_ERROR* (find-package "ROBOTNIK_MSGS::LOGGER"))
(defconstant robotnik_msgs::Logger::*LOG_LEVEL_ERROR* "Error")
(intern "*LOG_LEVEL_DEBUG*" (find-package "ROBOTNIK_MSGS::LOGGER"))
(shadow '*LOG_LEVEL_DEBUG* (find-package "ROBOTNIK_MSGS::LOGGER"))
(defconstant robotnik_msgs::Logger::*LOG_LEVEL_DEBUG* "Debug")
(intern "*LOG_LEVEL_USER*" (find-package "ROBOTNIK_MSGS::LOGGER"))
(shadow '*LOG_LEVEL_USER* (find-package "ROBOTNIK_MSGS::LOGGER"))
(defconstant robotnik_msgs::Logger::*LOG_LEVEL_USER* "User")

(defun robotnik_msgs::Logger-to-symbol (const)
  (cond
        (t nil)))

(defclass robotnik_msgs::Logger
  :super ros::object
  :slots (_date _component _tag _log_level _description ))

(defmethod robotnik_msgs::Logger
  (:init
   (&key
    ((:date __date) "")
    ((:component __component) "")
    ((:tag __tag) "")
    ((:log_level __log_level) "")
    ((:description __description) "")
    )
   (send-super :init)
   (setq _date (string __date))
   (setq _component (string __component))
   (setq _tag (string __tag))
   (setq _log_level (string __log_level))
   (setq _description (string __description))
   self)
  (:date
   (&optional __date)
   (if __date (setq _date __date)) _date)
  (:component
   (&optional __component)
   (if __component (setq _component __component)) _component)
  (:tag
   (&optional __tag)
   (if __tag (setq _tag __tag)) _tag)
  (:log_level
   (&optional __log_level)
   (if __log_level (setq _log_level __log_level)) _log_level)
  (:description
   (&optional __description)
   (if __description (setq _description __description)) _description)
  (:serialization-length
   ()
   (+
    ;; string _date
    4 (length _date)
    ;; string _component
    4 (length _component)
    ;; string _tag
    4 (length _tag)
    ;; string _log_level
    4 (length _log_level)
    ;; string _description
    4 (length _description)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _date
       (write-long (length _date) s) (princ _date s)
     ;; string _component
       (write-long (length _component) s) (princ _component s)
     ;; string _tag
       (write-long (length _tag) s) (princ _tag s)
     ;; string _log_level
       (write-long (length _log_level) s) (princ _log_level s)
     ;; string _description
       (write-long (length _description) s) (princ _description s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _date
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _date (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _component
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _component (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _tag
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _tag (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _log_level
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _log_level (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _description
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _description (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get robotnik_msgs::Logger :md5sum-) "897db59ca03596ba34a75f6e11ca536d")
(setf (get robotnik_msgs::Logger :datatype-) "robotnik_msgs/Logger")
(setf (get robotnik_msgs::Logger :definition-)
      "string LOG_LEVEL_INFO=Info
string LOG_LEVEL_WARNING=Warning
string LOG_LEVEL_ERROR=Error
string LOG_LEVEL_DEBUG=Debug
string LOG_LEVEL_USER=User
string date
string component
string tag
string log_level
string description
")



(provide :robotnik_msgs/Logger "897db59ca03596ba34a75f6e11ca536d")


