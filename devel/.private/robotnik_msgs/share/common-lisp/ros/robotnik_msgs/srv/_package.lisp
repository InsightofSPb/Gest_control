(cl:defpackage robotnik_msgs-srv
  (:use )
  (:export
   "GETBOOL"
   "<GETBOOL-REQUEST>"
   "GETBOOL-REQUEST"
   "<GETBOOL-RESPONSE>"
   "GETBOOL-RESPONSE"
   "GETMOTORSHEADINGOFFSET"
   "<GETMOTORSHEADINGOFFSET-REQUEST>"
   "GETMOTORSHEADINGOFFSET-REQUEST"
   "<GETMOTORSHEADINGOFFSET-RESPONSE>"
   "GETMOTORSHEADINGOFFSET-RESPONSE"
   "GETPOI"
   "<GETPOI-REQUEST>"
   "GETPOI-REQUEST"
   "<GETPOI-RESPONSE>"
   "GETPOI-RESPONSE"
   "GETPTZ"
   "<GETPTZ-REQUEST>"
   "GETPTZ-REQUEST"
   "<GETPTZ-RESPONSE>"
   "GETPTZ-RESPONSE"
   "INSERTTASK"
   "<INSERTTASK-REQUEST>"
   "INSERTTASK-REQUEST"
   "<INSERTTASK-RESPONSE>"
   "INSERTTASK-RESPONSE"
   "LOGGERQUERY"
   "<LOGGERQUERY-REQUEST>"
   "LOGGERQUERY-REQUEST"
   "<LOGGERQUERY-RESPONSE>"
   "LOGGERQUERY-RESPONSE"
   "QUERYALARMS"
   "<QUERYALARMS-REQUEST>"
   "QUERYALARMS-REQUEST"
   "<QUERYALARMS-RESPONSE>"
   "QUERYALARMS-RESPONSE"
   "RECORD"
   "<RECORD-REQUEST>"
   "RECORD-REQUEST"
   "<RECORD-RESPONSE>"
   "RECORD-RESPONSE"
   "RESETFROMSUBSTATE"
   "<RESETFROMSUBSTATE-REQUEST>"
   "RESETFROMSUBSTATE-REQUEST"
   "<RESETFROMSUBSTATE-RESPONSE>"
   "RESETFROMSUBSTATE-RESPONSE"
   "SETBUZZER"
   "<SETBUZZER-REQUEST>"
   "SETBUZZER-REQUEST"
   "<SETBUZZER-RESPONSE>"
   "SETBUZZER-RESPONSE"
   "SETBYTE"
   "<SETBYTE-REQUEST>"
   "SETBYTE-REQUEST"
   "<SETBYTE-RESPONSE>"
   "SETBYTE-RESPONSE"
   "SETCURRENT"
   "<SETCURRENT-REQUEST>"
   "SETCURRENT-REQUEST"
   "<SETCURRENT-RESPONSE>"
   "SETCURRENT-RESPONSE"
   "SETELEVATOR"
   "<SETELEVATOR-REQUEST>"
   "SETELEVATOR-REQUEST"
   "<SETELEVATOR-RESPONSE>"
   "SETELEVATOR-RESPONSE"
   "SETENCODERTURNS"
   "<SETENCODERTURNS-REQUEST>"
   "SETENCODERTURNS-REQUEST"
   "<SETENCODERTURNS-RESPONSE>"
   "SETENCODERTURNS-RESPONSE"
   "SETINT16"
   "<SETINT16-REQUEST>"
   "SETINT16-REQUEST"
   "<SETINT16-RESPONSE>"
   "SETINT16-RESPONSE"
   "SETLASERMODE"
   "<SETLASERMODE-REQUEST>"
   "SETLASERMODE-REQUEST"
   "<SETLASERMODE-RESPONSE>"
   "SETLASERMODE-RESPONSE"
   "SETMOTORMODE"
   "<SETMOTORMODE-REQUEST>"
   "SETMOTORMODE-REQUEST"
   "<SETMOTORMODE-RESPONSE>"
   "SETMOTORMODE-RESPONSE"
   "SETMOTORPID"
   "<SETMOTORPID-REQUEST>"
   "SETMOTORPID-REQUEST"
   "<SETMOTORPID-RESPONSE>"
   "SETMOTORPID-RESPONSE"
   "SETMOTORSTATUS"
   "<SETMOTORSTATUS-REQUEST>"
   "SETMOTORSTATUS-REQUEST"
   "<SETMOTORSTATUS-RESPONSE>"
   "SETMOTORSTATUS-RESPONSE"
   "SETNAMEDDIGITALOUTPUT"
   "<SETNAMEDDIGITALOUTPUT-REQUEST>"
   "SETNAMEDDIGITALOUTPUT-REQUEST"
   "<SETNAMEDDIGITALOUTPUT-RESPONSE>"
   "SETNAMEDDIGITALOUTPUT-RESPONSE"
   "SETSTRING"
   "<SETSTRING-REQUEST>"
   "SETSTRING-REQUEST"
   "<SETSTRING-RESPONSE>"
   "SETSTRING-RESPONSE"
   "SETTRANSFORM"
   "<SETTRANSFORM-REQUEST>"
   "SETTRANSFORM-REQUEST"
   "<SETTRANSFORM-RESPONSE>"
   "SETTRANSFORM-RESPONSE"
   "ACK_ALARM"
   "<ACK_ALARM-REQUEST>"
   "ACK_ALARM-REQUEST"
   "<ACK_ALARM-RESPONSE>"
   "ACK_ALARM-RESPONSE"
   "AXIS_RECORD"
   "<AXIS_RECORD-REQUEST>"
   "AXIS_RECORD-REQUEST"
   "<AXIS_RECORD-RESPONSE>"
   "AXIS_RECORD-RESPONSE"
   "ENABLE_DISABLE"
   "<ENABLE_DISABLE-REQUEST>"
   "ENABLE_DISABLE-REQUEST"
   "<ENABLE_DISABLE-RESPONSE>"
   "ENABLE_DISABLE-RESPONSE"
   "GET_ALARMS"
   "<GET_ALARMS-REQUEST>"
   "GET_ALARMS-REQUEST"
   "<GET_ALARMS-RESPONSE>"
   "GET_ALARMS-RESPONSE"
   "GET_DIGITAL_INPUT"
   "<GET_DIGITAL_INPUT-REQUEST>"
   "GET_DIGITAL_INPUT-REQUEST"
   "<GET_DIGITAL_INPUT-RESPONSE>"
   "GET_DIGITAL_INPUT-RESPONSE"
   "GET_MODBUS_REGISTER"
   "<GET_MODBUS_REGISTER-REQUEST>"
   "GET_MODBUS_REGISTER-REQUEST"
   "<GET_MODBUS_REGISTER-RESPONSE>"
   "GET_MODBUS_REGISTER-RESPONSE"
   "GET_MODE"
   "<GET_MODE-REQUEST>"
   "GET_MODE-REQUEST"
   "<GET_MODE-RESPONSE>"
   "GET_MODE-RESPONSE"
   "HOME"
   "<HOME-REQUEST>"
   "HOME-REQUEST"
   "<HOME-RESPONSE>"
   "HOME-RESPONSE"
   "SET_CARTESIANEULER_POSE"
   "<SET_CARTESIANEULER_POSE-REQUEST>"
   "SET_CARTESIANEULER_POSE-REQUEST"
   "<SET_CARTESIANEULER_POSE-RESPONSE>"
   "SET_CARTESIANEULER_POSE-RESPONSE"
   "SET_ANALOG_OUTPUT"
   "<SET_ANALOG_OUTPUT-REQUEST>"
   "SET_ANALOG_OUTPUT-REQUEST"
   "<SET_ANALOG_OUTPUT-RESPONSE>"
   "SET_ANALOG_OUTPUT-RESPONSE"
   "SET_DIGITAL_OUTPUT"
   "<SET_DIGITAL_OUTPUT-REQUEST>"
   "SET_DIGITAL_OUTPUT-REQUEST"
   "<SET_DIGITAL_OUTPUT-RESPONSE>"
   "SET_DIGITAL_OUTPUT-RESPONSE"
   "SET_FLOAT_VALUE"
   "<SET_FLOAT_VALUE-REQUEST>"
   "SET_FLOAT_VALUE-REQUEST"
   "<SET_FLOAT_VALUE-RESPONSE>"
   "SET_FLOAT_VALUE-RESPONSE"
   "SET_HEIGHT"
   "<SET_HEIGHT-REQUEST>"
   "SET_HEIGHT-REQUEST"
   "<SET_HEIGHT-RESPONSE>"
   "SET_HEIGHT-RESPONSE"
   "SET_MODBUS_REGISTER"
   "<SET_MODBUS_REGISTER-REQUEST>"
   "SET_MODBUS_REGISTER-REQUEST"
   "<SET_MODBUS_REGISTER-RESPONSE>"
   "SET_MODBUS_REGISTER-RESPONSE"
   "SET_MODBUS_REGISTER_BIT"
   "<SET_MODBUS_REGISTER_BIT-REQUEST>"
   "SET_MODBUS_REGISTER_BIT-REQUEST"
   "<SET_MODBUS_REGISTER_BIT-RESPONSE>"
   "SET_MODBUS_REGISTER_BIT-RESPONSE"
   "SET_MODE"
   "<SET_MODE-REQUEST>"
   "SET_MODE-REQUEST"
   "<SET_MODE-RESPONSE>"
   "SET_MODE-RESPONSE"
   "SET_NAMED_DIGITAL_OUTPUT"
   "<SET_NAMED_DIGITAL_OUTPUT-REQUEST>"
   "SET_NAMED_DIGITAL_OUTPUT-REQUEST"
   "<SET_NAMED_DIGITAL_OUTPUT-RESPONSE>"
   "SET_NAMED_DIGITAL_OUTPUT-RESPONSE"
   "SET_ODOMETRY"
   "<SET_ODOMETRY-REQUEST>"
   "SET_ODOMETRY-REQUEST"
   "<SET_ODOMETRY-RESPONSE>"
   "SET_ODOMETRY-RESPONSE"
   "SET_PTZ"
   "<SET_PTZ-REQUEST>"
   "SET_PTZ-REQUEST"
   "<SET_PTZ-RESPONSE>"
   "SET_PTZ-RESPONSE"
  ))
