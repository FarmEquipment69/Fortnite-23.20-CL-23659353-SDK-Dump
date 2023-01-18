// Class /Script/HmxAudio.BTTask_WaitForMidiMsg
// Size: 0xd8
class UBTTask_WaitForMidiMsg : public UBTTask_BlackboardBase
{
	enum EMidiMsgType MessageType; // 0x98 (0x1)
	unsigned char unreflected_99[0x7]; // 0x99 (0x7) 
	struct FString SpecificTextMessage; // 0xa0 (0x10)
	int SpecificChannel; // 0xb0 (0x4)
	int SpecificNote; // 0xb4 (0x4)
	int SpecificVelocityMin; // 0xb8 (0x4)
	int SpecificVelocityMax; // 0xbc (0x4)
	bool SpecifyTextMessage; // 0xc0 (0x1)
	bool SpecifyChannel; // 0xc1 (0x1)
	bool SpecifyNote; // 0xc2 (0x1)
	bool SpecifyVelocityRange; // 0xc3 (0x1)
	unsigned char padding_c4[0x14]; // 0xc4 (0x14)

	/* Functions */

	// Function /Script/HmxAudio.BTTask_WaitForMidiMsg.OnTextMessage (Underlying native function: OnTextMessage 0x5450240)
	void OnTextMessage(struct FString& CursorName, struct FString& Text); // (Final | Native | Private)

	// Function /Script/HmxAudio.BTTask_WaitForMidiMsg.OnNoteOnMessage (Underlying native function: OnNoteOnMessage 0x544fe60)
	void OnNoteOnMessage(struct FString& CursorName, int& Channel, int& Note, int& Velocity); // (Final | Native | Private)

	// Function /Script/HmxAudio.BTTask_WaitForMidiMsg.OnNoteOffMessage (Underlying native function: OnNoteOffMessage 0x544fae0)
	void OnNoteOffMessage(struct FString& CursorName, int& Channel, int& Note); // (Final | Native | Private)
};

