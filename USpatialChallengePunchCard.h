// Class /Script/FortniteUI.SpatialChallengePunchCard
// Size: 0x480
class USpatialChallengePunchCard : public UAthenaSpatialScreen
{
	struct TWeakObjectPtr<class UAthenaChallengePunchCard> FocusedPunchCard; // 0x438 (0x8)
	struct FDataTableRowHandle NextPunchCardInputAction; // 0x440 (0x10)
	class UDynamicEntryBox* EntryBoxPunchCards; // 0x450 (0x8)
	class UScrollBox* ScrollBox; // 0x458 (0x8)
	struct TArray<struct TWeakObjectPtr<class UAthenaChallengePunchCard>> PunchCards; // 0x460 (0x10)
	float LastStickInputTime; // 0x470 (0x4)
	float InputDelayTime; // 0x474 (0x4)
	unsigned char padding_478[0x8]; // 0x478 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.SpatialChallengePunchCard.SetDiscoveredCount (Has no native function)
	void SetDiscoveredCount(int& KnownCount, int& CompletedCount, int& TotalCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.SpatialChallengePunchCard.OnShowFirstTimeInfo (Has no native function)
	void OnShowFirstTimeInfo(); // (Event | Protected | BlueprintEvent)
};

