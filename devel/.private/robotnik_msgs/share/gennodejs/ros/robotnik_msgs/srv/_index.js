
"use strict";

let set_CartesianEuler_pose = require('./set_CartesianEuler_pose.js')
let SetCurrent = require('./SetCurrent.js')
let enable_disable = require('./enable_disable.js')
let SetBuzzer = require('./SetBuzzer.js')
let get_mode = require('./get_mode.js')
let set_named_digital_output = require('./set_named_digital_output.js')
let set_ptz = require('./set_ptz.js')
let get_alarms = require('./get_alarms.js')
let set_analog_output = require('./set_analog_output.js')
let axis_record = require('./axis_record.js')
let set_height = require('./set_height.js')
let SetMotorMode = require('./SetMotorMode.js')
let ResetFromSubState = require('./ResetFromSubState.js')
let SetLaserMode = require('./SetLaserMode.js')
let SetString = require('./SetString.js')
let SetTransform = require('./SetTransform.js')
let SetMotorStatus = require('./SetMotorStatus.js')
let get_digital_input = require('./get_digital_input.js')
let SetElevator = require('./SetElevator.js')
let GetMotorsHeadingOffset = require('./GetMotorsHeadingOffset.js')
let set_modbus_register = require('./set_modbus_register.js')
let SetMotorPID = require('./SetMotorPID.js')
let SetByte = require('./SetByte.js')
let set_mode = require('./set_mode.js')
let ack_alarm = require('./ack_alarm.js')
let SetEncoderTurns = require('./SetEncoderTurns.js')
let InsertTask = require('./InsertTask.js')
let set_digital_output = require('./set_digital_output.js')
let set_modbus_register_bit = require('./set_modbus_register_bit.js')
let GetPOI = require('./GetPOI.js')
let Record = require('./Record.js')
let GetBool = require('./GetBool.js')
let home = require('./home.js')
let set_float_value = require('./set_float_value.js')
let GetPTZ = require('./GetPTZ.js')
let SetNamedDigitalOutput = require('./SetNamedDigitalOutput.js')
let SetInt16 = require('./SetInt16.js')
let QueryAlarms = require('./QueryAlarms.js')
let LoggerQuery = require('./LoggerQuery.js')
let set_odometry = require('./set_odometry.js')
let get_modbus_register = require('./get_modbus_register.js')

module.exports = {
  set_CartesianEuler_pose: set_CartesianEuler_pose,
  SetCurrent: SetCurrent,
  enable_disable: enable_disable,
  SetBuzzer: SetBuzzer,
  get_mode: get_mode,
  set_named_digital_output: set_named_digital_output,
  set_ptz: set_ptz,
  get_alarms: get_alarms,
  set_analog_output: set_analog_output,
  axis_record: axis_record,
  set_height: set_height,
  SetMotorMode: SetMotorMode,
  ResetFromSubState: ResetFromSubState,
  SetLaserMode: SetLaserMode,
  SetString: SetString,
  SetTransform: SetTransform,
  SetMotorStatus: SetMotorStatus,
  get_digital_input: get_digital_input,
  SetElevator: SetElevator,
  GetMotorsHeadingOffset: GetMotorsHeadingOffset,
  set_modbus_register: set_modbus_register,
  SetMotorPID: SetMotorPID,
  SetByte: SetByte,
  set_mode: set_mode,
  ack_alarm: ack_alarm,
  SetEncoderTurns: SetEncoderTurns,
  InsertTask: InsertTask,
  set_digital_output: set_digital_output,
  set_modbus_register_bit: set_modbus_register_bit,
  GetPOI: GetPOI,
  Record: Record,
  GetBool: GetBool,
  home: home,
  set_float_value: set_float_value,
  GetPTZ: GetPTZ,
  SetNamedDigitalOutput: SetNamedDigitalOutput,
  SetInt16: SetInt16,
  QueryAlarms: QueryAlarms,
  LoggerQuery: LoggerQuery,
  set_odometry: set_odometry,
  get_modbus_register: get_modbus_register,
};
