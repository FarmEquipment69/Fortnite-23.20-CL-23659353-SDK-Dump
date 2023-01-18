// Class /Script/FortniteGame.FortAthenaQuestActor
// Size: 0x310
class AFortAthenaQuestActor : public AActor
{
	struct FMulticastInlineDelegate OnObjectiveDormantDelegate; // 0x288 (0x10)
	struct FMulticastInlineDelegate OnObjectiveActiveDelegate; // 0x298 (0x10)
	struct FMulticastInlineDelegate OnObjectiveUpdatedDelegate; // 0x2a8 (0x10)
	class UFortQuestIconComponent* QuestIconComponent; // 0x2b8 (0x8)
	struct FGameplayTag ProximityQuestTag; // 0x2c0 (0x4)
	unsigned char unreflected_2c4[0x4]; // 0x2c4 (0x4) 
	struct FString CalendarEnableEvent; // 0x2c8 (0x10)
	struct FGameplayTagContainer BlockedPlaylistTags; // 0x2d8 (0x20)
	struct TArray<struct FPlayerObjectiveTracking> PlayerObjectiveTracking; // 0x2f8 (0x10)
	unsigned char padding_308[0x8]; // 0x308 (0x8)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortAthenaQuestActor.SimpleQuestComponentDelegate__DelegateSignature (Has no native function)
	void SimpleQuestComponentDelegateDelegateSignature(class AFortPlayerController*& PlayerController); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortAthenaQuestActor.QuestObjectiveUpdated__DelegateSignature (Has no native function)
	void QuestObjectiveUpdatedDelegateSignature(class AFortPlayerController*& PlayerController, bool& bQuestCompleted); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortAthenaQuestActor.QuestLog (Underlying native function: QuestLog 0x8e00628)
	void QuestLog(struct FString& StringToLog); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaQuestActor.OnPlaylistDataReady (Underlying native function: OnPlaylistDataReady 0x8dff3f0)
	void OnPlaylistDataReady(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaQuestActor.OnObjectiveUpdated (Has no native function)
	void OnObjectiveUpdated(class AFortPlayerController*& PlayerController, bool& bQuestCompleted); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaQuestActor.OnObjectiveDormant (Has no native function)
	void OnObjectiveDormant(class AFortPlayerController*& PlayerController); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaQuestActor.OnObjectiveActive (Has no native function)
	void OnObjectiveActive(class AFortPlayerController*& PlayerController); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaQuestActor.OnCalendarUpdated (Underlying native function: OnCalendarUpdated 0x8dfe964)
	void OnCalendarUpdated(); // (Final | Native | Private)
};

