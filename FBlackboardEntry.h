// ScriptStruct /Script/AIModule.BlackboardEntry
// Size: 0x18
struct FBlackboardEntry
{
	struct FName EntryName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UBlackboardKeyType* KeyType; // 0x8 (0x8)
	unsigned char bInstanceSynced; // 0x10 (0x1)
	unsigned char padding_11[0x7]; // 0x11 (0x7)
};

