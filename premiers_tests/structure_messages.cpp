#include "structure_messages.h"

// Message général

message::message(uint8_t _type, uint64_t _time): type(_type), time(_time) {};


// ADD

Add_message::Add_message(uint8_t _type, uint64_t _time, uint16_t _sid, uint64_t _qid, uint32_t _price, uint32_t _volume, char _status):
																															message(_type, _time),
																															sid(_sid),
																															qid(_qid),
																															price(_price),
																															volume(_volume),
																															status(_status) {};

// CONTROL

Control_message::Control_message(uint8_t _type, uint64_t _time, uint16_t _sid, char _status):
																					message(_type, _time),
																					sid(_sid),
																					status(_status) {};

// REDUCE

Reduce_message::Reduce_message(uint8_t _type, uint64_t _time, uint16_t _sid, uint64_t _qid, uint32_t _volume):
																					message(_type, _time),
																					sid(_sid),
																					qid(_qid),
																					volume(_volume) {};

// EXECUTION

Execution_message::Execution_message(uint8_t _type, uint64_t _time, uint16_t _sid, uint64_t _qid, uint32_t _volume, uint64_t _mid):
																					message(_type, _time),
																					sid(_sid),
																					qid(_qid),
																					volume(_volume),
																					mid(_mid) {};

// MASTER

/*Master_message::Master_message(uint8_t _type, uint64_t _time, uint16_t _sid, char _symbol[8], char _currency[8], uint8_t _lot, uint8_t _tick, char _classification):
																					message(_type, _time),
																					sid(_sid),
																					symbol(_symbol),
																					currency(_currency),
																					lot(_lot),
																					tick(_tick),
																					classification(_classification) {};*/

// MODIFY

Modify_message::Modify_message(uint8_t _type, uint64_t _time, uint16_t _sid, uint64_t _qid, uint64_t _nid, uint32_t _price, uint32_t _volume):																				
																					message(_type, _time),
																					sid(_sid),
																					qid(_qid),
																					nid(_nid),
																					price(_price),
																					volume(_volume) {};

// REMOTE

Remote_message::Remote_message(uint8_t _type, uint64_t _time, uint16_t _sid, uint64_t _qid):
																					message(_type, _time),
																					sid(_sid),
																					qid(_qid) {};

// PROTOCOL

Protocol_message::Protocol_message(uint8_t _type, uint64_t _time, uint32_t _version):
																					message(_type, _time),
																					version(_version) {};																					