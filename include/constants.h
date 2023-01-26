#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "fixedstring.h"

namespace constants {
	// FIX version
	const FixedString VERSION = "4.4";

	// Message types
	const FixedString NEW_ORDER_SINGLE = "D";
	const FixedString EXECUTION_REPORT = "8";
	const FixedString ORDER_CANCEL_REQUEST = "F";
	const FixedString ORDER_CANCEL_REJECT = "9";
	const FixedString LOGON = "A";
	const FixedString LOGOUT = "5";

	// Field tags
	const unsigned short SENDER_COMP_ID = 49;
	const unsigned short TARGET_COMP_ID = 56;
	const unsigned short MSG_TYPE = 35;
	const unsigned short MSG_SEQ_NUM = 34;
	const unsigned short SENDING_TIME = 52;
	const unsigned short USERNAME = 553;
	const unsigned short PASSWORD = 554;
	const unsigned short CLORDID = 11;
	const unsigned short SYMBOL = 55;
	const unsigned short SIDE = 54;
	const unsigned short ORDER_QTY = 38;
	const unsigned short ORDER_TYPE = 40;
	const unsigned short PRICE = 44;
	const unsigned short ORDER_STATUS = 39;
	const unsigned short EXEC_TYPE = 150;
	const unsigned short EXEC_ID = 17;
	const unsigned short CUM_QTY = 14;
	const unsigned short AVG_PX = 6;
	const unsigned short LEAVES_QTY = 151;
	const unsigned short LAST_QTY = 32;
	const unsigned short LAST_PX = 31;
	const unsigned short TEXT = 58;
	const unsigned short EXEC_TRANS_TYPE = 20;
	const unsigned short HANDL_INST = 21;
	const unsigned short ORD_TYPE = 40;
	const unsigned short TIME_IN_FORCE = 59;
	const unsigned short ORDER_CAPACITY = 47;
	const unsigned short ORDER_RESTATTRIBS = 376;
	const unsigned short ORDER_ID = 37;
	const unsigned short ORDER_QTY_TYPE = 854;
	const unsigned short ORDER_QTY_TYPE_QTY = 854;
	const unsigned short ORDER_QTY_TYPE_UNITS = 855;
	const unsigned short ORDER_QTY_TYPE_CONTRACTS = 856;
	const unsigned short ORDER_QTY_TYPE_ALL_EXECUTED = 857;
	const unsigned short ORDER_QTY_TYPE_PARTIALLY_EXECUTED = 858;
	const unsigned short ORDER_QTY_TYPE_CANCELLED = 859;
	const unsigned short ENCRYPT_METHOD = 98;
	const unsigned short HEART_BT_INT = 108;
	const unsigned short RESET_SEQ_NUM_FLAG = 141;
	const unsigned short TEST_REQ_ID = 112;
	const unsigned short BEGIN_SEQ_NUM = 7;
	const unsigned short END_SEQ_NUM = 16;
	const unsigned short REF_SEQ_NUM = 45;
	const unsigned short REF_TAG_ID = 371;
	const unsigned short REF_MSG_TYPE = 372;

	// Sender and receiver
	const FixedString SENDER_COMP_ID_VALUE = "1";
	const FixedString TARGET_COMP_ID_VALUE = "2";

	// Delimiter
	const FixedString SOH = "\x01";

	// Socket
	const unsigned short PORT = 5555;

	// Messages length
	const unsigned short MAX_MESSAGE_LENGTH = 256;
}

#endif
