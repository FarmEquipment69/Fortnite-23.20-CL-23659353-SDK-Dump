// ScriptStruct /Script/FortniteGame.ObjectIdentifier
// Size: 0x80
struct FObjectIdentifier
{
	struct TMap<uint32_t, uint32_t> ContainedIdentifierHashes; // 0x0 (0x50)
	uint32_t CachedHash; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct TWeakObjectPtr<class UClass> SoftClassPtr; // 0x58 (0x28)
};

