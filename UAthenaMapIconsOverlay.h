// Class /Script/FortniteUI.AthenaMapIconsOverlay
// Size: 0x3c8
class UAthenaMapIconsOverlay : public UOverlay
{
	class UClass* AthenaMapNavigableIconSingleChallengeClass; // 0x170 (0x8)
	class UClass* AthenaMapNavigableIconStackOfChallengesClass; // 0x178 (0x8)
	class UClass* AthenaMapNavigableIconStackOfNoLocationChallengesClass; // 0x180 (0x8)
	bool bShowNoLocationIcon; // 0x188 (0x1)
	bool bAllowFocusControl; // 0x189 (0x1)
	unsigned char unreflected_18a[0x6]; // 0x18a (0x6) 
	class UAthenaChallengeIndicatorCache* ChallengeIndicatorCache; // 0x190 (0x8)
	struct FUserWidgetPool WidgetsPool; // 0x198 (0x88)
	struct TArray<struct FDisabledQuestData> DisabledQuests; // 0x220 (0x10)
	unsigned char padding_230[0x198]; // 0x230 (0x198)
};

