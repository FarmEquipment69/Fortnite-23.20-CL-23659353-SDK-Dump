// ScriptStruct /Script/FortniteGame.CustomCharacterData
// Size: 0x78
struct FCustomCharacterData
{
	unsigned char WasPartReplicatedFlags; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int RequiredVariantPartFlags; // 0x4 (0x4)
	class UCustomCharacterPart* Parts[0x7]; // 0x8 (0x8) (ARRAY) 
	class UAthenaCharmItemDefinition* Charms[0x4]; // 0x40 (0x8) (ARRAY) 
	struct TArray<class UCustomCharacterPart*> VariantRequiredCharacterParts; // 0x60 (0x10)
	bool bReplicationFailed; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

