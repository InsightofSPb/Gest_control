
"use strict";

let Data = require('./Data.js');
let inputs_outputs = require('./inputs_outputs.js');
let MotorHeadingOffset = require('./MotorHeadingOffset.js');
let OdomCalibrationStatusStamped = require('./OdomCalibrationStatusStamped.js');
let RecordStatus = require('./RecordStatus.js');
let Logger = require('./Logger.js');
let LaserStatus = require('./LaserStatus.js');
let alarmsmonitor = require('./alarmsmonitor.js');
let PantiltStatus = require('./PantiltStatus.js');
let BoolArray = require('./BoolArray.js');
let alarmmonitor = require('./alarmmonitor.js');
let ReturnMessage = require('./ReturnMessage.js');
let named_input_output = require('./named_input_output.js');
let BatteryStatusStamped = require('./BatteryStatusStamped.js');
let BatteryDockingStatus = require('./BatteryDockingStatus.js');
let PresenceSensorArray = require('./PresenceSensorArray.js');
let Registers = require('./Registers.js');
let RobotnikMotorsStatus = require('./RobotnikMotorsStatus.js');
let MotorReferenceValueArray = require('./MotorReferenceValueArray.js');
let PresenceSensor = require('./PresenceSensor.js');
let MotorPID = require('./MotorPID.js');
let QueryAlarm = require('./QueryAlarm.js');
let AlarmSensor = require('./AlarmSensor.js');
let BatteryDockingStatusStamped = require('./BatteryDockingStatusStamped.js');
let Cartesian_Euler_pose = require('./Cartesian_Euler_pose.js');
let StringArray = require('./StringArray.js');
let MotorsStatus = require('./MotorsStatus.js');
let Register = require('./Register.js');
let SubState = require('./SubState.js');
let MotorCurrent = require('./MotorCurrent.js');
let BatteryStatus = require('./BatteryStatus.js');
let InverterStatus = require('./InverterStatus.js');
let MotorsStatusDifferential = require('./MotorsStatusDifferential.js');
let State = require('./State.js');
let WatchdogStatusArray = require('./WatchdogStatusArray.js');
let Pose2DStamped = require('./Pose2DStamped.js');
let ArmStatus = require('./ArmStatus.js');
let Interfaces = require('./Interfaces.js');
let ElevatorStatus = require('./ElevatorStatus.js');
let WatchdogStatus = require('./WatchdogStatus.js');
let encoders = require('./encoders.js');
let LaserMode = require('./LaserMode.js');
let Pose2DArray = require('./Pose2DArray.js');
let StringStamped = require('./StringStamped.js');
let PantiltStatusStamped = require('./PantiltStatusStamped.js');
let MotorReferenceValue = require('./MotorReferenceValue.js');
let OdomCalibrationStatus = require('./OdomCalibrationStatus.js');
let named_inputs_outputs = require('./named_inputs_outputs.js');
let Axis = require('./Axis.js');
let SafetyModuleStatus = require('./SafetyModuleStatus.js');
let Alarms = require('./Alarms.js');
let MotorStatus = require('./MotorStatus.js');
let OdomManualCalibrationStatusStamped = require('./OdomManualCalibrationStatusStamped.js');
let ElevatorAction = require('./ElevatorAction.js');
let ptz = require('./ptz.js');
let OdomManualCalibrationStatus = require('./OdomManualCalibrationStatus.js');
let SetElevatorGoal = require('./SetElevatorGoal.js');
let SetElevatorActionGoal = require('./SetElevatorActionGoal.js');
let SetElevatorFeedback = require('./SetElevatorFeedback.js');
let SetElevatorActionResult = require('./SetElevatorActionResult.js');
let SetElevatorResult = require('./SetElevatorResult.js');
let SetElevatorAction = require('./SetElevatorAction.js');
let SetElevatorActionFeedback = require('./SetElevatorActionFeedback.js');

module.exports = {
  Data: Data,
  inputs_outputs: inputs_outputs,
  MotorHeadingOffset: MotorHeadingOffset,
  OdomCalibrationStatusStamped: OdomCalibrationStatusStamped,
  RecordStatus: RecordStatus,
  Logger: Logger,
  LaserStatus: LaserStatus,
  alarmsmonitor: alarmsmonitor,
  PantiltStatus: PantiltStatus,
  BoolArray: BoolArray,
  alarmmonitor: alarmmonitor,
  ReturnMessage: ReturnMessage,
  named_input_output: named_input_output,
  BatteryStatusStamped: BatteryStatusStamped,
  BatteryDockingStatus: BatteryDockingStatus,
  PresenceSensorArray: PresenceSensorArray,
  Registers: Registers,
  RobotnikMotorsStatus: RobotnikMotorsStatus,
  MotorReferenceValueArray: MotorReferenceValueArray,
  PresenceSensor: PresenceSensor,
  MotorPID: MotorPID,
  QueryAlarm: QueryAlarm,
  AlarmSensor: AlarmSensor,
  BatteryDockingStatusStamped: BatteryDockingStatusStamped,
  Cartesian_Euler_pose: Cartesian_Euler_pose,
  StringArray: StringArray,
  MotorsStatus: MotorsStatus,
  Register: Register,
  SubState: SubState,
  MotorCurrent: MotorCurrent,
  BatteryStatus: BatteryStatus,
  InverterStatus: InverterStatus,
  MotorsStatusDifferential: MotorsStatusDifferential,
  State: State,
  WatchdogStatusArray: WatchdogStatusArray,
  Pose2DStamped: Pose2DStamped,
  ArmStatus: ArmStatus,
  Interfaces: Interfaces,
  ElevatorStatus: ElevatorStatus,
  WatchdogStatus: WatchdogStatus,
  encoders: encoders,
  LaserMode: LaserMode,
  Pose2DArray: Pose2DArray,
  StringStamped: StringStamped,
  PantiltStatusStamped: PantiltStatusStamped,
  MotorReferenceValue: MotorReferenceValue,
  OdomCalibrationStatus: OdomCalibrationStatus,
  named_inputs_outputs: named_inputs_outputs,
  Axis: Axis,
  SafetyModuleStatus: SafetyModuleStatus,
  Alarms: Alarms,
  MotorStatus: MotorStatus,
  OdomManualCalibrationStatusStamped: OdomManualCalibrationStatusStamped,
  ElevatorAction: ElevatorAction,
  ptz: ptz,
  OdomManualCalibrationStatus: OdomManualCalibrationStatus,
  SetElevatorGoal: SetElevatorGoal,
  SetElevatorActionGoal: SetElevatorActionGoal,
  SetElevatorFeedback: SetElevatorFeedback,
  SetElevatorActionResult: SetElevatorActionResult,
  SetElevatorResult: SetElevatorResult,
  SetElevatorAction: SetElevatorAction,
  SetElevatorActionFeedback: SetElevatorActionFeedback,
};
