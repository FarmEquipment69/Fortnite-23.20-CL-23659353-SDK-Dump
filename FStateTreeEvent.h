// ScriptStruct /Script/StateTreeModule.StateTreeEvent
// Size: 0x20
struct FStateTreeEvent
{
	struct FGameplayTag tag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FInstancedStruct Payload; // 0x8 (0x10)
	struct FName Origin; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

