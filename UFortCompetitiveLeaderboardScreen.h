// Class /Script/FortniteUI.FortCompetitiveLeaderboardScreen
// Size: 0x410
class UFortCompetitiveLeaderboardScreen : public UCommonActivatableWidget
{
	struct TArray<class UFortEventLeaderboardEntryData*> LeaderboardEntries; // 0x3a8 (0x10)
	class UFortEventLeaderboardEntryData* MyEntryData; // 0x3b8 (0x8)
	unsigned char unreflected_3c0[0x10]; // 0x3c0 (0x10) 
	class UFortEventLeaderboardEntryData* EntryToShowDetails; // 0x3d0 (0x8)
	unsigned char unreflected_3d8[0x8]; // 0x3d8 (0x8) 
	struct FString RepresentedEventId; // 0x3e0 (0x10)
	struct FString RepresentedEventWindowId; // 0x3f0 (0x10)
	unsigned char unreflected_400[0x8]; // 0x400 (0x8) 
	class UFortLeaderboardViewTab* ActivatableContentLeaderboardTab; // 0x408 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCompetitiveLeaderboardScreen.SetEvent (Underlying native function: SetEvent 0xa6b4ebc)
	void SetEvent(struct FString& EventId, struct FString& EventWindowId); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCompetitiveLeaderboardScreen.RequestNextPage (Underlying native function: RequestNextPage 0xa6b49ac)
	void RequestNextPage(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCompetitiveLeaderboardScreen.OnLeaderboardEntrySelected (Has no native function)
	void OnLeaderboardEntrySelected(class UFortEventLeaderboardEntryData*& EntryData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCompetitiveLeaderboardScreen.OnLeaderboardDisplayTypeChanged (Has no native function)
	void OnLeaderboardDisplayTypeChanged(enum ELeaderboardDisplayType& NewDisplayType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCompetitiveLeaderboardScreen.HandleLeaderboardSetInView (Underlying native function: HandleLeaderboardSetInView 0xa6b3888)
	void HandleLeaderboardSetInView(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCompetitiveLeaderboardScreen.GetMyLeaderboardEntry (Underlying native function: GetMyLeaderboardEntry 0x845d9e4)
	class UFortEventLeaderboardEntryData* GetMyLeaderboardEntry(); // (Final | Native | Protected | BlueprintCallable)
};

