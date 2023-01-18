// Class /Script/FortniteUI.FortPostGameNewQuestsWidget
// Size: 0x358
class UFortPostGameNewQuestsWidget : public UCommonUserWidget
{
	float NewQuestsEntryBoxDisplayTime; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	class UDynamicEntryBox* EntryBoxNewQuests; // 0x298 (0x8)
	struct TArray<class UFortQuestObjectiveInfo*> UpdatedQuestObjectiveInfoDisplaying; // 0x2a0 (0x10)
	struct TArray<class UFortQuestObjectiveInfo*> UpdatedQuestObjectiveInfoToDisplay; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnPlayNewQuestsIntroFinishedDelegate; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate OnPlayNewQuestsEntryBoxIntroFinishedDelegate; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate OnPlayNewQuestsEntryBoxOutroFinishedDelegate; // 0x2e0 (0x10)
	unsigned char padding_2f0[0x68]; // 0x2f0 (0x68)

	/* Functions */

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.PlayNextNewQuestsBatch (Underlying native function: PlayNextNewQuestsBatch 0xa532218)
	void PlayNextNewQuestsBatch(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.PlayNewQuestUpdates (Underlying native function: PlayNewQuestUpdates 0xa532204)
	void PlayNewQuestUpdates(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.OnPlayOutro (Has no native function)
	void OnPlayOutro(); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.FortPostGameNewQuestsWidget.OnPlayNewQuestsIntroFinished__DelegateSignature (Has no native function)
	void OnPlayNewQuestsIntroFinishedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortPostGameNewQuestsWidget.OnPlayNewQuestsEntryBoxOutroFinished__DelegateSignature (Has no native function)
	void OnPlayNewQuestsEntryBoxOutroFinishedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.OnPlayNewQuestsEntryBoxOutro (Has no native function)
	void OnPlayNewQuestsEntryBoxOutro(); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.FortPostGameNewQuestsWidget.OnPlayNewQuestsEntryBoxIntroFinished__DelegateSignature (Has no native function)
	void OnPlayNewQuestsEntryBoxIntroFinishedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.OnPlayNewQuestsEntryBoxIntro (Has no native function)
	void OnPlayNewQuestsEntryBoxIntro(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.OnPlayIntro (Has no native function)
	void OnPlayIntro(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.HandlePlayNewQuestUpdatesDelayTimerExpired (Underlying native function: HandlePlayNewQuestUpdatesDelayTimerExpired 0xa5314f0)
	void HandlePlayNewQuestUpdatesDelayTimerExpired(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.HandlePlayNewQuestsIntroAnimFinished (Underlying native function: HandlePlayNewQuestsIntroAnimFinished 0xa531564)
	void HandlePlayNewQuestsIntroAnimFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.HandlePlayNewQuestsEntryBoxTimerFinished (Underlying native function: HandlePlayNewQuestsEntryBoxTimerFinished 0xa531550)
	void HandlePlayNewQuestsEntryBoxTimerFinished(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.HandlePlayNewQuestsEntryBoxOutroAnimFinished (Underlying native function: HandlePlayNewQuestsEntryBoxOutroAnimFinished 0xa531534)
	void HandlePlayNewQuestsEntryBoxOutroAnimFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.HandlePlayNewQuestsEntryBoxIntroFinished (Underlying native function: HandlePlayNewQuestsEntryBoxIntroFinished 0xa531520)
	void HandlePlayNewQuestsEntryBoxIntroFinished(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortPostGameNewQuestsWidget.HandlePlayNewQuestsEntryBoxIntroAnimFinished (Underlying native function: HandlePlayNewQuestsEntryBoxIntroAnimFinished 0xa531504)
	void HandlePlayNewQuestsEntryBoxIntroAnimFinished(); // (Final | Native | Protected | BlueprintCallable)
};

