// ScriptStruct /Script/FortniteGame.MutatorOverrideData
// Size: 0xc0
struct FMutatorOverrideData
{
	enum EMutatorOverrideSource OverrideSource; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FPropertyOverrideData PropertyOverrideArray; // 0x8 (0x50)
	enum EMutatorOverrideSource CachedOverrideSource; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	struct FPropertyOverrideData CachedExternalOverrides; // 0x60 (0x50)
	unsigned char padding_b0[0x10]; // 0xb0 (0x10)
};

