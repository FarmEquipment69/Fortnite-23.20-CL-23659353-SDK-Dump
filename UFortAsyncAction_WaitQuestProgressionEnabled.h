// Class /Script/FortniteGame.FortAsyncAction_WaitQuestProgressionEnabled
// Size: 0x48
class UFortAsyncAction_WaitQuestProgressionEnabled : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnQuestProgressionEnabled; // 0x30 (0x10)
	unsigned char padding_40[0x8]; // 0x40 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_WaitQuestProgressionEnabled.WaitQuestProgressionEnabled (Underlying native function: WaitQuestProgressionEnabled 0x82684ac)
	static class UFortAsyncAction_WaitQuestProgressionEnabled* WaitQuestProgressionEnabled(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortAsyncAction_WaitQuestProgressionEnabled.QuestProgressionEnabledDelegate__DelegateSignature (Has no native function)
	void QuestProgressionEnabledDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortAsyncAction_WaitQuestProgressionEnabled.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0x8265804)
	void HandleGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Private)
};

