// ScriptStruct /Script/SessionMessages.SessionServiceLog
// Size: 0x38
struct FSessionServiceLog
{
	struct FName category; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString Data; // 0x8 (0x10)
	struct FGuid InstanceID; // 0x18 (0x10)
	double TimeSeconds; // 0x28 (0x8)
	unsigned char Verbosity; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

