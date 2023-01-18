// Class /Script/AIModule.EnvQueryGenerator_Composite
// Size: 0x70
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
	struct TArray<class UEnvQueryGenerator*> Generators; // 0x50 (0x10)
	unsigned char bAllowDifferentItemTypes; // 0x60 (0x1)
	unsigned char bHasMatchingItemType; // 0x60 (0x1)
	unsigned char unreflected_61[0x7]; // 0x61 (0x7) 
	class UClass* ForcedItemType; // 0x68 (0x8)
};

