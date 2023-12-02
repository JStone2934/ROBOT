// Auto-generated. Do not edit!

// (in-package learning_action.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ReadbookFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.reading_page = null;
    }
    else {
      if (initObj.hasOwnProperty('reading_page')) {
        this.reading_page = initObj.reading_page
      }
      else {
        this.reading_page = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ReadbookFeedback
    // Serialize message field [reading_page]
    bufferOffset = _serializer.uint32(obj.reading_page, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ReadbookFeedback
    let len;
    let data = new ReadbookFeedback(null);
    // Deserialize message field [reading_page]
    data.reading_page = _deserializer.uint32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'learning_action/ReadbookFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9f5dbf4433d93835e3df512b2552dfeb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Define a feedback message
    uint32 reading_page
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ReadbookFeedback(null);
    if (msg.reading_page !== undefined) {
      resolved.reading_page = msg.reading_page;
    }
    else {
      resolved.reading_page = 0
    }

    return resolved;
    }
};

module.exports = ReadbookFeedback;
