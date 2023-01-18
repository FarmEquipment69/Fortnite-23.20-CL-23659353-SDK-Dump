// ScriptStruct /Script/VerseInterface.SolarisDebugMessage
// Size: 0x18
struct FSolarisDebugMessage
{
	enum ESolarisDebugMessageClientId ClientId; // 0x0 (0x4)
	enum ESolarisDebugMessageCommand Command; // 0x4 (0x4)
	struct TArray<unsigned char> MessageBodyUTF8; // 0x8 (0x10)
};

