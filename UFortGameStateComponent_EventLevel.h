// Class /Script/FortniteGame.FortGameStateComponent_EventLevel
// Size: 0x3e0
class UFortGameStateComponent_EventLevel : public UFortGameStateComponent_DynamicStreamingLevel
{
	struct FMulticastInlineDelegate OnSpecialInterationTriggered; // 0xe8 (0x10)
	struct FMulticastInlineDelegate OnRestedXpDripStopped; // 0xf8 (0x10)
	unsigned char unreflected_108[0x18]; // 0x108 (0x18) 
	struct FMulticastInlineDelegate RoomOwnerChanged; // 0x120 (0x10)
	struct FMulticastInlineDelegate ActiveCameraChanged; // 0x130 (0x10)
	struct TMap<struct FGameplayTag, bool> BangStateTracker; // 0x140 (0x50)
	struct TArray<struct TWeakObjectPtr<class AFortEventLevelCamera>> SceneCameras; // 0x190 (0x10)
	struct TWeakObjectPtr<class AFortPlayerController> RoomOwner; // 0x1a0 (0x8)
	struct TWeakObjectPtr<class UAthenaRewardEventGraph> AssignedRewardGraph; // 0x1a8 (0x28)
	class UAthenaRewardEventGraph* RewardGraph; // 0x1d0 (0x8)
	struct FGameplayTagContainer RewardGraphNodesVisuallyDisplayed; // 0x1d8 (0x20)
	struct TArray<struct TWeakObjectPtr<class AFortEventLevelNavigationActor>> ClickableActors; // 0x1f8 (0x10)
	struct TArray<struct FHiddenActors> HiddenActorsToShowOnceClaimed; // 0x208 (0x10)
	struct TWeakObjectPtr<class AFortEventLevelNavigationActor> CurrentSelectedNavObj; // 0x218 (0x8)
	struct TWeakObjectPtr<class AFortEventLevelNavigationActor> CurrentHoveredNavObj; // 0x220 (0x8)
	unsigned char unreflected_228[0x10]; // 0x228 (0x10) 
	class UClass* EventLevelCinematicOverrideClass; // 0x238 (0x8)
	struct FGameplayTag ActiveCamera; // 0x240 (0x4)
	struct FGameplayTag CameraToTurnLightSwitchOff; // 0x244 (0x4)
	struct TWeakObjectPtr<class ALevelSequenceActor> TransitionSequencer; // 0x248 (0x28)
	unsigned char unreflected_270[0x10]; // 0x270 (0x10) 
	struct FGameplayTag SelectedCamera; // 0x280 (0x4)
	struct FGameplayTag LastSelectedNavObj; // 0x284 (0x4)
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	struct TArray<struct TWeakObjectPtr<class AFortEventLevelCamera>> CamerasPendingRegistration; // 0x298 (0x10)
	struct TArray<struct TWeakObjectPtr<class AFortEventLevelNavigationActor>> NavigationActorsPendingRegistration; // 0x2a8 (0x10)
	struct TArray<struct FAnalyticsNavActorClickedData> NavigationActorClickedData; // 0x2b8 (0x10)
	struct FScalableFloat AnalogInputModifier; // 0x2c8 (0x28)
	struct TArray<struct FNavIndicatorTextList> NavIndicatorTextLists; // 0x2f0 (0x10)
	bool bAllowNavigationToHiddenActors; // 0x300 (0x1)
	unsigned char padding_301[0xdf]; // 0x301 (0xdf)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.TryToClaimRewardGraphNode (Underlying native function: TryToClaimRewardGraphNode 0x84380a0)
	void TryToClaimRewardGraphNode(struct FGameplayTag& NodeTag); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.StartRestedXpTimer (Underlying native function: StartRestedXpTimer 0x8437f90)
	void StartRestedXpTimer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.SetActiveCamera (Underlying native function: SetActiveCamera 0x8437968)
	void SetActiveCamera(struct FGameplayTag& NewActiveCamera, bool& bUseTransition); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.RegisterNavigationActor (Underlying native function: RegisterNavigationActor 0x84372f4)
	bool RegisterNavigationActor(class AFortEventLevelNavigationActor*& InActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.RegisterHiddenActor (Underlying native function: RegisterHiddenActor 0x8437230)
	void RegisterHiddenActor(class AActor*& InActor, struct FGameplayTag& EventGraphNode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.RegisterCamera (Underlying native function: RegisterCamera 0x84371a0)
	bool RegisterCamera(class AFortEventLevelCamera*& InCamera); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.OnNavActorSelected (Has no native function)
	void OnNavActorSelected(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.OnNavActorHovered (Has no native function)
	void OnNavActorHovered(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.NotifyRestedXpGenAmount (Underlying native function: NotifyRestedXpGenAmount 0x8436ae4)
	void NotifyRestedXpGenAmount(int& RestedXp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.LinkNavActorToCamera (Underlying native function: LinkNavActorToCamera 0x8436924)
	void LinkNavActorToCamera(class AFortEventLevelNavigationActor*& InActor, struct FGameplayTag& CameraTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.HoverActorUnderCursor (Underlying native function: HoverActorUnderCursor 0x5cb3670)
	void HoverActorUnderCursor(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.HandlePreOpenPackageComplete (Underlying native function: HandlePreOpenPackageComplete 0x84368c8)
	void HandlePreOpenPackageComplete(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.HandleOnCameraCut (Underlying native function: HandleOnCameraCut 0x8436794)
	void HandleOnCameraCut(class UCameraComponent*& CameraComponent); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.HandleOnCameraBlendComplete (Underlying native function: HandleOnCameraBlendComplete 0x8436780)
	void HandleOnCameraBlendComplete(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.HandleObjectSpecialInteraction (Has no native function)
	void HandleObjectSpecialInteraction(struct FGameplayTag& ActionTag, struct FGameplayTag& CameraTag, class AFortEventLevelNavigationActor*& InActor); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.HandleNavigationActorUnhover (Underlying native function: HandleNavigationActorUnhover 0x5cb35d0)
	void HandleNavigationActorUnhover(class AFortEventLevelNavigationActor*& InActor); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.GoToCamera (Underlying native function: GoToCamera 0x8436674)
	void GoToCamera(struct FGameplayTag& CameraToViewFrom); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.GetRoomOwner (Underlying native function: GetRoomOwner 0x8436034)
	class AFortPlayerController* GetRoomOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.GetRandomNavIndicatorTextFromList (Underlying native function: GetRandomNavIndicatorTextFromList 0x8435f4c)
	struct FText GetRandomNavIndicatorTextFromList(struct FGameplayTag& ListNameTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.GetLastNavObject (Underlying native function: GetLastNavObject 0x8435b8c)
	class AFortEventLevelNavigationActor* GetLastNavObject(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.GetActiveCameraTag (Underlying native function: GetActiveCameraTag 0x5cb35b0)
	struct FGameplayTag GetActiveCameraTag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.EndRestXpTimer (Underlying native function: EndRestXpTimer 0x8435780)
	void EndRestXpTimer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_EventLevel.CanGainRestedXp (Underlying native function: CanGainRestedXp 0x8435184)
	void CanGainRestedXp(bool& bResult); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

