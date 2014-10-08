// MESSAGE SONAR_INTERRUPT PACKING

#define MAVLINK_MSG_ID_SONAR_INTERRUPT 239

typedef struct __mavlink_sonar_interrupt_t
{
 uint8_t interrupt; ///< Interrupt
} mavlink_sonar_interrupt_t;

#define MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN 1
#define MAVLINK_MSG_ID_239_LEN 1

#define MAVLINK_MSG_ID_SONAR_INTERRUPT_CRC 62
#define MAVLINK_MSG_ID_239_CRC 62



#define MAVLINK_MESSAGE_INFO_SONAR_INTERRUPT { \
	"SONAR_INTERRUPT", \
	1, \
	{  { "interrupt", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_sonar_interrupt_t, interrupt) }, \
         } \
}


/**
 * @brief Pack a sonar_interrupt message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param interrupt Interrupt
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sonar_interrupt_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t interrupt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN];
	_mav_put_uint8_t(buf, 0, interrupt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#else
	mavlink_sonar_interrupt_t packet;
	packet.interrupt = interrupt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SONAR_INTERRUPT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN, MAVLINK_MSG_ID_SONAR_INTERRUPT_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#endif
}

/**
 * @brief Pack a sonar_interrupt message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param interrupt Interrupt
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sonar_interrupt_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t interrupt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN];
	_mav_put_uint8_t(buf, 0, interrupt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#else
	mavlink_sonar_interrupt_t packet;
	packet.interrupt = interrupt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SONAR_INTERRUPT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN, MAVLINK_MSG_ID_SONAR_INTERRUPT_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#endif
}

/**
 * @brief Encode a sonar_interrupt struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sonar_interrupt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sonar_interrupt_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sonar_interrupt_t* sonar_interrupt)
{
	return mavlink_msg_sonar_interrupt_pack(system_id, component_id, msg, sonar_interrupt->interrupt);
}

/**
 * @brief Encode a sonar_interrupt struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sonar_interrupt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sonar_interrupt_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sonar_interrupt_t* sonar_interrupt)
{
	return mavlink_msg_sonar_interrupt_pack_chan(system_id, component_id, chan, msg, sonar_interrupt->interrupt);
}

/**
 * @brief Send a sonar_interrupt message
 * @param chan MAVLink channel to send the message
 *
 * @param interrupt Interrupt
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sonar_interrupt_send(mavlink_channel_t chan, uint8_t interrupt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN];
	_mav_put_uint8_t(buf, 0, interrupt);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_INTERRUPT, buf, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN, MAVLINK_MSG_ID_SONAR_INTERRUPT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_INTERRUPT, buf, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#endif
#else
	mavlink_sonar_interrupt_t packet;
	packet.interrupt = interrupt;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_INTERRUPT, (const char *)&packet, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN, MAVLINK_MSG_ID_SONAR_INTERRUPT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_INTERRUPT, (const char *)&packet, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sonar_interrupt_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t interrupt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, interrupt);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_INTERRUPT, buf, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN, MAVLINK_MSG_ID_SONAR_INTERRUPT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_INTERRUPT, buf, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#endif
#else
	mavlink_sonar_interrupt_t *packet = (mavlink_sonar_interrupt_t *)msgbuf;
	packet->interrupt = interrupt;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_INTERRUPT, (const char *)packet, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN, MAVLINK_MSG_ID_SONAR_INTERRUPT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SONAR_INTERRUPT, (const char *)packet, MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE SONAR_INTERRUPT UNPACKING


/**
 * @brief Get field interrupt from sonar_interrupt message
 *
 * @return Interrupt
 */
static inline uint8_t mavlink_msg_sonar_interrupt_get_interrupt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a sonar_interrupt message into a struct
 *
 * @param msg The message to decode
 * @param sonar_interrupt C-struct to decode the message contents into
 */
static inline void mavlink_msg_sonar_interrupt_decode(const mavlink_message_t* msg, mavlink_sonar_interrupt_t* sonar_interrupt)
{
#if MAVLINK_NEED_BYTE_SWAP
	sonar_interrupt->interrupt = mavlink_msg_sonar_interrupt_get_interrupt(msg);
#else
	memcpy(sonar_interrupt, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_SONAR_INTERRUPT_LEN);
#endif
}
