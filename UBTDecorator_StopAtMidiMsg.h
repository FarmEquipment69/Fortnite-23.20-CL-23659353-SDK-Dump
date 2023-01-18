// Class /Script/HmxAudio.BTDecorator_StopAtMidiMsg
// Size: 0xf8
class UBTDecorator_StopAtMidiMsg : public UBTDecorator_BlackboardBase
{
	enum EMidiMsgType MessageType; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	struct FString SpecificTextMessage; // 0x98 (0x10)
	struct FBlackboardKeySelector TextMessageCapture; // 0xa8 (0x28)
	int SpecificChannel; // 0xd0 (0x4)
	int SpecificNote; // 0xd4 (0x4)
	int SpecificVelocityMin; // 0xd8 (0x4)
	int SpecificVelocityMax; // 0xdc (0x4)
	bool SpecifyTextMessage; // 0xe0 (0x1)
	bool SpecifyChannel; // 0xe1 (0x1)
	bool SpecifyNote; // 0xe2 (0x1)
	bool SpecifyVelocityRange; // 0xe3 (0x1)
	unsigned char padding_e4[0x14]; // 0xe4 (0x14)

	/* Functions */

	// Function /Script/HmxAudio.BTDecorator_StopAtMidiMsg.OnTextMessage (Underlying native function: OnTextMessage 0x54500c0)
	void OnTextMessage(struct FString& CursorName, struct FString& Text); // (Final | Native | Private)

	// Function /Script/HmxAudio.BTDecorator_StopAtMidiMsg.OnNoteOnMessage (Underlying native function: OnNoteOnMessage 0x544fc70)
	void OnNoteOnMessage(struct FString& CursorName, int& Channel, int& Note, int& Velocity); // (Final | Native | Private)

	// Function /Script/HmxAudio.BTDecorator_StopAtMidiMsg.OnNoteOffMessage (Underlying native function: OnNoteOffMessage 0x544f950)
	void OnNoteOffMessage(struct FString& CursorName, int& Channel, int& Note); // (Final | Native | Private)
};

