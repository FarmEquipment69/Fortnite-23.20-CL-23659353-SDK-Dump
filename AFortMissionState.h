// Class /Script/FortniteGame.FortMissionState
// Size: 0x2c0
class AFortMissionState : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct FMulticastInlineDelegate OnUpdateUI; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnMissionUIEvent; // 0x2a0 (0x10)
	bool bAlreadySetTimerOnce; // 0x2b0 (0x1)
	bool bAlreadyCalledOnAllPlayersLoadedIn; // 0x2b1 (0x1)
	unsigned char unreflected_2b2[0x2]; // 0x2b2 (0x2) 
	float TimerForOnAllPlayersLoadedIn; // 0x2b4 (0x4)
	unsigned char padding_2b8[0x8]; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionState.UpdateUI (Underlying native function: UpdateUI 0x23eff98)
	void UpdateUI(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionState.SetTimerForOnAllPlayersLoadedIn (Underlying native function: SetTimerForOnAllPlayersLoadedIn 0x8b2fba4)
	void SetTimerForOnAllPlayersLoadedIn(float& Timer); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionState.SendMissionUIEvent (Underlying native function: SendMissionUIEvent 0x8b2e3e8)
	void SendMissionUIEvent(struct FGameplayTagContainer& EventTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionState.OnWorldReady (Has no native function)
	void OnWorldReady(); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMissionState.OnMatchStarted (Has no native function)
	void OnMatchStarted(); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMissionState.OnAllPlayersLoadedInWrapper (Underlying native function: OnAllPlayersLoadedInWrapper 0x8b2d7f8)
	void OnAllPlayersLoadedInWrapper(); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortMissionState.OnAllPlayersLoadedIn (Has no native function)
	void OnAllPlayersLoadedIn(); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)
};

