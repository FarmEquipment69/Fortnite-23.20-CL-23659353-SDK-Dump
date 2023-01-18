// ScriptStruct /Script/FortniteGame.FortQuestsTabAnalytics
// Size: 0x170
struct FFortQuestsTabAnalytics
{
	struct TMap<struct FString, float> CategoriesSelected; // 0x0 (0x50)
	struct FString LastCategorySelected; // 0x50 (0x10)
	float LastCategorySelectedTimestamp; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct TSet<struct FString> BundlesSeen; // 0x68 (0x50)
	struct TMap<struct FString, int> QuestsSelected; // 0xb8 (0x50)
	struct TMap<struct FString, float> TimeViewingQuestMapContent; // 0x108 (0x50)
	float QuestMapContentStartViewingTimestamp; // 0x158 (0x4)
	unsigned char unreflected_15c[0x4]; // 0x15c (0x4) 
	struct FString LastQuestPinned; // 0x160 (0x10)
};

