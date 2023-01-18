// Class /Script/DaySequence.DaySequenceProjectSettings
// Size: 0x60
class UDaySequenceProjectSettings : public UDeveloperSettings
{
	bool bDefaultLockEngineToDisplayRate; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FString DefaultDisplayRate; // 0x38 (0x10)
	struct FString DefaultTickResolution; // 0x48 (0x10)
	enum EUpdateClockSource DefaultClockSource; // 0x58 (0x1)
	unsigned char padding_59[0x7]; // 0x59 (0x7)
};

