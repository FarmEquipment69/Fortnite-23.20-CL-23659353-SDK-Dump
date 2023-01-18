// ScriptStruct /Script/ChaosCaching.ObservedComponent
// Size: 0x170
struct FObservedComponent
{
	struct FName CacheName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FComponentReference ComponentRef; // 0x8 (0x28)
	struct FSoftComponentReference SoftComponentRef; // 0x30 (0x48)
	bool bIsSimulating; // 0x78 (0x1)
	unsigned char padding_79[0xf7]; // 0x79 (0xf7)
};

