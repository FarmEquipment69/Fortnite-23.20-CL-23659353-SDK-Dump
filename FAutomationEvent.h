// ScriptStruct /Script/CoreUObject.AutomationEvent
// Size: 0x38
struct FAutomationEvent
{
	enum EAutomationEventType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString message; // 0x8 (0x10)
	struct FString Context; // 0x18 (0x10)
	struct FGuid Artifact; // 0x28 (0x10)
};

