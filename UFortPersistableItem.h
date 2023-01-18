// Class /Script/FortniteGame.FortPersistableItem
// Size: 0xb8
class UFortPersistableItem : public UFortItem
{
	class UFortPersistableItemDefinition* ItemDefinition; // 0x88 (0x8)
	struct FString InstanceID; // 0x90 (0x10)
	struct FString TemplateId; // 0xa0 (0x10)
	int Quantity; // 0xb0 (0x4)
	bool bIsLocalOnlyItem; // 0xb4 (0x1)
	unsigned char padding_b5[0x3]; // 0xb5 (0x3)
};

