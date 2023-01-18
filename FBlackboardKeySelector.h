// ScriptStruct /Script/AIModule.BlackboardKeySelector
// Size: 0x28
struct FBlackboardKeySelector
{
	struct TArray<class UBlackboardKeyType*> AllowedTypes; // 0x0 (0x10)
	struct FName SelectedKeyName; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class UClass* SelectedKeyType; // 0x18 (0x8)
	int SelectedKeyID; // 0x20 (0x4)
	unsigned char bNoneIsAllowedValue; // 0x24 (0x1)
	unsigned char padding_25[0x3]; // 0x25 (0x3)
};

