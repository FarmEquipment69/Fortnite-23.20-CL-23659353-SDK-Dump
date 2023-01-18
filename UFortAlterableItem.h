// Class /Script/FortniteGame.FortAlterableItem
// Size: 0x130
class UFortAlterableItem : public UFortAccountItem
{
	struct TArray<struct FString> alterations; // 0x108 (0x10)
	struct TArray<class UFortAlterationItemDefinition*> AlterationInstances; // 0x118 (0x10)
	unsigned char padding_128[0x8]; // 0x128 (0x8)
};

