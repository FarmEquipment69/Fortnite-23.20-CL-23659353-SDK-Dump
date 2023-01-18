// ScriptStruct /Script/FortniteGame.TagModificationRequest
// Size: 0x30
struct FTagModificationRequest
{
	struct FGameplayTagContainer TagsToModify; // 0x0 (0x20)
	bool bAddTag; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	float Delay; // 0x24 (0x4)
	float FiniteLifetime; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

