// Class /Script/FortniteGame.FortMetadataItem
// Size: 0xc0
class UFortMetadataItem : public UFortItem
{
	int Level; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct FString InstanceID; // 0x90 (0x10)
	struct FString TemplateId; // 0xa0 (0x10)
	int Quantity; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	class UFortMetadataItemDefinition* ItemDefinition; // 0xb8 (0x8)
};

