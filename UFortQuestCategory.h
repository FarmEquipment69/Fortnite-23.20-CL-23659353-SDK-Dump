// Class /Script/FortniteGame.FortQuestCategory
// Size: 0x88
class UFortQuestCategory : public UObject
{
	struct FText Name; // 0x28 (0x18)
	struct TArray<class UFortQuestItem*> CurrentQuests; // 0x40 (0x10)
	bool bExpanded; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	struct FFortCategoryTableRow CategoryInfo; // 0x58 (0x28)
	unsigned char padding_80[0x8]; // 0x80 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortQuestCategory.HasUnseenQuests (Underlying native function: HasUnseenQuests 0x8e4770c)
	bool HasUnseenQuests(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortQuestCategory.GetUnseenQuestCount (Underlying native function: GetUnseenQuestCount 0x8e46784)
	int GetUnseenQuestCount(); // (Final | Native | Public | BlueprintCallable)
};

