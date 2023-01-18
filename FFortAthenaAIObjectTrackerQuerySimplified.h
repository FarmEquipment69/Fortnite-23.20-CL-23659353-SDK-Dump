// ScriptStruct /Script/FortniteAI.FortAthenaAIObjectTrackerQuerySimplified
// Size: 0x80
struct FFortAthenaAIObjectTrackerQuerySimplified
{
	enum EFortAthenaAIObjectTrackerQueryOrder PickOrder; // 0x0 (0x1)
	bool bMustBeUsable; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FGameplayTagQuery RequiredTagsQuery; // 0x8 (0x48)
	struct FVector MaximumDistance; // 0x50 (0x18)
	class AFortPlayspace* RequiredToBeInPlayspace; // 0x68 (0x8)
	unsigned char padding_70[0x10]; // 0x70 (0x10)
};

