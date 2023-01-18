// ScriptStruct /Script/CoreUObject.AutomationExecutionEntry
// Size: 0x58
struct FAutomationExecutionEntry
{
	struct FAutomationEvent Event; // 0x0 (0x38)
	struct FString Filename; // 0x38 (0x10)
	int LineNumber; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FDateTime* Timestamp; // 0x50 (0x8)
};

