// Auto-generated. Do not edit!

// (in-package robotnik_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Logger {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.date = null;
      this.component = null;
      this.tag = null;
      this.log_level = null;
      this.description = null;
    }
    else {
      if (initObj.hasOwnProperty('date')) {
        this.date = initObj.date
      }
      else {
        this.date = '';
      }
      if (initObj.hasOwnProperty('component')) {
        this.component = initObj.component
      }
      else {
        this.component = '';
      }
      if (initObj.hasOwnProperty('tag')) {
        this.tag = initObj.tag
      }
      else {
        this.tag = '';
      }
      if (initObj.hasOwnProperty('log_level')) {
        this.log_level = initObj.log_level
      }
      else {
        this.log_level = '';
      }
      if (initObj.hasOwnProperty('description')) {
        this.description = initObj.description
      }
      else {
        this.description = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Logger
    // Serialize message field [date]
    bufferOffset = _serializer.string(obj.date, buffer, bufferOffset);
    // Serialize message field [component]
    bufferOffset = _serializer.string(obj.component, buffer, bufferOffset);
    // Serialize message field [tag]
    bufferOffset = _serializer.string(obj.tag, buffer, bufferOffset);
    // Serialize message field [log_level]
    bufferOffset = _serializer.string(obj.log_level, buffer, bufferOffset);
    // Serialize message field [description]
    bufferOffset = _serializer.string(obj.description, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Logger
    let len;
    let data = new Logger(null);
    // Deserialize message field [date]
    data.date = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [component]
    data.component = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [tag]
    data.tag = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [log_level]
    data.log_level = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [description]
    data.description = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.date);
    length += _getByteLength(object.component);
    length += _getByteLength(object.tag);
    length += _getByteLength(object.log_level);
    length += _getByteLength(object.description);
    return length + 20;
  }

  static datatype() {
    // Returns string type for a message object
    return 'robotnik_msgs/Logger';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '897db59ca03596ba34a75f6e11ca536d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string LOG_LEVEL_INFO=Info
    string LOG_LEVEL_WARNING=Warning
    string LOG_LEVEL_ERROR=Error
    string LOG_LEVEL_DEBUG=Debug
    string LOG_LEVEL_USER=User
    string date
    string component
    string tag
    string log_level
    string description
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Logger(null);
    if (msg.date !== undefined) {
      resolved.date = msg.date;
    }
    else {
      resolved.date = ''
    }

    if (msg.component !== undefined) {
      resolved.component = msg.component;
    }
    else {
      resolved.component = ''
    }

    if (msg.tag !== undefined) {
      resolved.tag = msg.tag;
    }
    else {
      resolved.tag = ''
    }

    if (msg.log_level !== undefined) {
      resolved.log_level = msg.log_level;
    }
    else {
      resolved.log_level = ''
    }

    if (msg.description !== undefined) {
      resolved.description = msg.description;
    }
    else {
      resolved.description = ''
    }

    return resolved;
    }
};

// Constants for message
Logger.Constants = {
  LOG_LEVEL_INFO: 'Info',
  LOG_LEVEL_WARNING: 'Warning',
  LOG_LEVEL_ERROR: 'Error',
  LOG_LEVEL_DEBUG: 'Debug',
  LOG_LEVEL_USER: 'User',
}

module.exports = Logger;
