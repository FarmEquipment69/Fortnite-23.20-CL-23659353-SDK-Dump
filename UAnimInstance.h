// Class /Script/Engine.AnimInstance
// Size: 0x350
class UAnimInstance : public UObject
{
	class USkeleton* CurrentSkeleton; // 0x28 (0x8)
	struct TEnumAsByte<ERootMotionMode> RootMotionMode; // 0x30 (0x1)
	unsigned char bUseMultiThreadedAnimationUpdate; // 0x31 (0x1)
	unsigned char bUsingCopyPoseFromMesh; // 0x31 (0x1)
	unsigned char bReceiveNotifiesFromLinkedInstances; // 0x31 (0x1)
	unsigned char bPropagateNotifiesToLinkedInstances; // 0x31 (0x1)
	unsigned char bUseMainInstanceMontageEvaluationData; // 0x31 (0x1)
	unsigned char bQueueMontageEvents; // 0x31 (0x1)
	unsigned char unreflected_32[0x6]; // 0x32 (0x6) 
	struct FMulticastInlineDelegate OnMontageBlendingOut; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnMontageStarted; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnMontageEnded; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x68 (0x10)
	unsigned char unreflected_78[0xd8]; // 0x78 (0xd8) 
	struct FAnimNotifyQueue NotifyQueue; // 0x150 (0x70)
	struct TArray<struct FAnimNotifyEvent> ActiveAnimNotifyState; // 0x1c0 (0x10)
	struct TArray<struct FAnimNotifyEventReference> ActiveAnimNotifyEventReference; // 0x1d0 (0x10)
	unsigned char padding_1e0[0x170]; // 0x1e0 (0x170)

	/* Functions */

	// Function /Script/Engine.AnimInstance.WasAnimNotifyTriggeredInStateMachine (Underlying native function: WasAnimNotifyTriggeredInStateMachine 0x9c620b0)
	bool WasAnimNotifyTriggeredInStateMachine(int& MachineIndex, class UClass*& AnimNotifyType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyTriggeredInSourceState (Underlying native function: WasAnimNotifyTriggeredInSourceState 0x9c61f80)
	bool WasAnimNotifyTriggeredInSourceState(int& MachineIndex, int& StateIndex, class UClass*& AnimNotifyType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyTriggeredInAnyState (Underlying native function: WasAnimNotifyTriggeredInAnyState 0x9c61ed8)
	bool WasAnimNotifyTriggeredInAnyState(class UClass*& AnimNotifyType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyStateActiveInStateMachine (Underlying native function: WasAnimNotifyStateActiveInStateMachine 0x9c61df0)
	bool WasAnimNotifyStateActiveInStateMachine(int& MachineIndex, class UClass*& AnimNotifyStateType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyStateActiveInSourceState (Underlying native function: WasAnimNotifyStateActiveInSourceState 0x9c61cc0)
	bool WasAnimNotifyStateActiveInSourceState(int& MachineIndex, int& StateIndex, class UClass*& AnimNotifyStateType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyStateActiveInAnyState (Underlying native function: WasAnimNotifyStateActiveInAnyState 0x9c61c18)
	bool WasAnimNotifyStateActiveInAnyState(class UClass*& AnimNotifyStateType); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyNameTriggeredInStateMachine (Underlying native function: WasAnimNotifyNameTriggeredInStateMachine 0x9c61b34)
	bool WasAnimNotifyNameTriggeredInStateMachine(int& MachineIndex, struct FName& NotifyName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyNameTriggeredInSourceState (Underlying native function: WasAnimNotifyNameTriggeredInSourceState 0x9c61a08)
	bool WasAnimNotifyNameTriggeredInSourceState(int& MachineIndex, int& StateIndex, struct FName& NotifyName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.WasAnimNotifyNameTriggeredInAnyState (Underlying native function: WasAnimNotifyNameTriggeredInAnyState 0x9c61960)
	bool WasAnimNotifyNameTriggeredInAnyState(struct FName& NotifyName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.UnlockAIResources (Underlying native function: UnlockAIResources 0x9c618a8)
	void UnlockAIResources(bool& bUnlockMovement, bool& UnlockAILogic); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.UnlinkAnimClassLayers (Underlying native function: UnlinkAnimClassLayers 0x6a4c69c)
	void UnlinkAnimClassLayers(class UClass*& InClass); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.TryGetPawnOwner (Underlying native function: TryGetPawnOwner 0x28abd94)
	class APawn* TryGetPawnOwner(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.StopSlotAnimation (Underlying native function: StopSlotAnimation 0x9c617e0)
	void StopSlotAnimation(float& InBlendOutTime, struct FName& SlotNodeName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SnapshotPose (Underlying native function: SnapshotPose 0x9c61714)
	void SnapshotPose(struct FPoseSnapshot& Snapshot); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SetUseMainInstanceMontageEvaluationData (Underlying native function: SetUseMainInstanceMontageEvaluationData 0x9c61690)
	void SetUseMainInstanceMontageEvaluationData(bool& bSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SetRootMotionMode (Underlying native function: SetRootMotionMode 0x9c32ff8)
	void SetRootMotionMode(struct TEnumAsByte<ERootMotionMode>& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SetReceiveNotifiesFromLinkedInstances (Underlying native function: SetReceiveNotifiesFromLinkedInstances 0x9c6160c)
	void SetReceiveNotifiesFromLinkedInstances(bool& bSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SetPropagateNotifiesToLinkedInstances (Underlying native function: SetPropagateNotifiesToLinkedInstances 0x9c61588)
	void SetPropagateNotifiesToLinkedInstances(bool& bSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SetMorphTarget (Underlying native function: SetMorphTarget 0x9c614b8)
	void SetMorphTarget(struct FName& MorphTargetName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.SavePoseSnapshot (Underlying native function: SavePoseSnapshot 0x9c61434)
	void SavePoseSnapshot(struct FName& SnapshotName); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.ResetDynamics (Underlying native function: ResetDynamics 0x9c613a8)
	void ResetDynamics(enum ETeleportType& InTeleportType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.RequestTransitionEvent (Underlying native function: RequestTransitionEvent 0x9c61268)
	bool RequestTransitionEvent(struct FName& EventName, double& RequestTimeout, enum ETransitionRequestQueueMode& QueueMode, enum ETransitionRequestOverwriteMode& OverwriteMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.RequestSlotGroupInertialization (Underlying native function: RequestSlotGroupInertialization 0x9c6116c)
	void RequestSlotGroupInertialization(struct FName& InSlotGroupName, float& Duration, class UBlendProfile*& BlendProfile); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.RemovePoseSnapshot (Underlying native function: RemovePoseSnapshot 0x9c61098)
	void RemovePoseSnapshot(struct FName& SnapshotName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.QueryTransitionEvent (Underlying native function: QueryTransitionEvent 0x9c60fa0)
	bool QueryTransitionEvent(int& MachineIndex, int& TransitionIndex, struct FName& EventName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.QueryAndMarkTransitionEvent (Underlying native function: QueryAndMarkTransitionEvent 0x9c60e0c)
	bool QueryAndMarkTransitionEvent(int& MachineIndex, int& TransitionIndex, struct FName& EventName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage_WithBlendSettings (Underlying native function: PlaySlotAnimationAsDynamicMontage_WithBlendSettings 0x9c60b24)
	class UAnimMontage* PlaySlotAnimationAsDynamicMontageWithBlendSettings(class UAnimSequenceBase*& Asset, struct FName& SlotNodeName, struct FMontageBlendSettings& BlendInSettings, struct FMontageBlendSettings& BlendOutSettings, float& InPlayRate, int& LoopCount, float& BlendOutTriggerTime, float& InTimeToStartMontageAt); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage_WithBlendArgs (Underlying native function: PlaySlotAnimationAsDynamicMontage_WithBlendArgs 0x9c60890)
	class UAnimMontage* PlaySlotAnimationAsDynamicMontageWithBlendArgs(class UAnimSequenceBase*& Asset, struct FName& SlotNodeName, struct FAlphaBlendArgs& BlendIn, struct FAlphaBlendArgs& BlendOut, float& InPlayRate, int& LoopCount, float& BlendOutTriggerTime, float& InTimeToStartMontageAt); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage (Underlying native function: PlaySlotAnimationAsDynamicMontage 0x9c6063c)
	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase*& Asset, struct FName& SlotNodeName, float& BlendInTime, float& BlendOutTime, float& InPlayRate, int& LoopCount, float& BlendOutTriggerTime, float& InTimeToStartMontageAt); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.MontageSync_StopFollowing (Underlying native function: MontageSync_StopFollowing 0x9c5e4d4)
	void MontageSyncStopFollowing(class UAnimMontage*& MontageFollower); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.MontageSync_Follow (Underlying native function: MontageSync_Follow 0x9c5e248)
	void MontageSyncFollow(class UAnimMontage*& MontageFollower, class UAnimInstance*& OtherAnimInstance, class UAnimMontage*& MontageLeader); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_StopWithBlendSettings (Underlying native function: Montage_StopWithBlendSettings 0x9c60548)
	void MontageStopWithBlendSettings(struct FMontageBlendSettings& BlendOutSettings, class UAnimMontage*& Montage); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_StopWithBlendOut (Underlying native function: Montage_StopWithBlendOut 0x9c60444)
	void MontageStopWithBlendOut(struct FAlphaBlendArgs& BlendOut, class UAnimMontage*& Montage); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_StopGroupByName (Underlying native function: Montage_StopGroupByName 0x9c6037c)
	void MontageStopGroupByName(float& InBlendOutTime, struct FName& GroupName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_Stop (Underlying native function: Montage_Stop 0x9c602b4)
	void MontageStop(float& InBlendOutTime, class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_SetPosition (Underlying native function: Montage_SetPosition 0x9c601ec)
	void MontageSetPosition(class UAnimMontage*& Montage, float& NewPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_SetPlayRate (Underlying native function: Montage_SetPlayRate 0x9c60124)
	void MontageSetPlayRate(class UAnimMontage*& Montage, float& NewPlayRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_SetNextSection (Underlying native function: Montage_SetNextSection 0x9c6002c)
	void MontageSetNextSection(struct FName& SectionNameToChange, struct FName& NextSection, class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_Resume (Underlying native function: Montage_Resume 0x9c5feb0)
	void MontageResume(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_PlayWithBlendSettings (Underlying native function: Montage_PlayWithBlendSettings 0x9c5f73c)
	float MontagePlayWithBlendSettings(class UAnimMontage*& MontageToPlay, struct FMontageBlendSettings& BlendInSettings, float& InPlayRate, enum EMontagePlayReturnType& ReturnValueType, float& InTimeToStartMontageAt, bool& bStopAllMontages); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_PlayWithBlendIn (Underlying native function: Montage_PlayWithBlendIn 0x9c5efa8)
	float MontagePlayWithBlendIn(class UAnimMontage*& MontageToPlay, struct FAlphaBlendArgs& BlendIn, float& InPlayRate, enum EMontagePlayReturnType& ReturnValueType, float& InTimeToStartMontageAt, bool& bStopAllMontages); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_Play (Underlying native function: Montage_Play 0x9c5ee20)
	float MontagePlay(class UAnimMontage*& MontageToPlay, float& InPlayRate, enum EMontagePlayReturnType& ReturnValueType, float& InTimeToStartMontageAt, bool& bStopAllMontages); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_Pause (Underlying native function: Montage_Pause 0x9c5ecbc)
	void MontagePause(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_JumpToSectionsEnd (Underlying native function: Montage_JumpToSectionsEnd 0x9c5ead4)
	void MontageJumpToSectionsEnd(struct FName& SectionName, class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_JumpToSection (Underlying native function: Montage_JumpToSection 0x9c5ea10)
	void MontageJumpToSection(struct FName& SectionName, class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.Montage_IsPlaying (Underlying native function: Montage_IsPlaying 0x9c5e980)
	bool MontageIsPlaying(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_IsActive (Underlying native function: Montage_IsActive 0x2a26f2c)
	bool MontageIsActive(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_GetPosition (Underlying native function: Montage_GetPosition 0x9c5e8f0)
	float MontageGetPosition(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_GetPlayRate (Underlying native function: Montage_GetPlayRate 0x9c5e860)
	float MontageGetPlayRate(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_GetIsStopped (Underlying native function: Montage_GetIsStopped 0x9c5e71c)
	bool MontageGetIsStopped(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_GetCurrentSection (Underlying native function: Montage_GetCurrentSection 0x9c5e694)
	struct FName MontageGetCurrentSection(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.Montage_GetBlendTime (Underlying native function: Montage_GetBlendTime 0x9c5e604)
	float MontageGetBlendTime(class UAnimMontage*& Montage); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.LockAIResources (Underlying native function: LockAIResources 0x9c5e190)
	void LockAIResources(bool& bLockMovement, bool& LockAILogic); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.LinkAnimGraphByTag (Underlying native function: LinkAnimGraphByTag 0x9c5e0cc)
	void LinkAnimGraphByTag(struct FName& InTag, class UClass*& InClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.LinkAnimClassLayers (Underlying native function: LinkAnimClassLayers 0x979e9a4)
	void LinkAnimClassLayers(class UClass*& InClass); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.IsUsingMainInstanceMontageEvaluationData (Underlying native function: IsUsingMainInstanceMontageEvaluationData 0x9c5df8c)
	bool IsUsingMainInstanceMontageEvaluationData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.IsSyncGroupBetweenMarkers (Underlying native function: IsSyncGroupBetweenMarkers 0x9c5de50)
	bool IsSyncGroupBetweenMarkers(struct FName& InSyncGroupName, struct FName& PreviousMarker, struct FName& NextMarker, bool& bRespectMarkerOrder); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.IsPlayingSlotAnimation (Underlying native function: IsPlayingSlotAnimation 0x9c5dd88)
	bool IsPlayingSlotAnimation(class UAnimSequenceBase*& Asset, struct FName& SlotNodeName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.IsAnyMontagePlaying (Underlying native function: IsAnyMontagePlaying 0x9c5dd6c)
	bool IsAnyMontagePlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.HasMarkerBeenHitThisFrame (Underlying native function: HasMarkerBeenHitThisFrame 0x9c5dc58)
	bool HasMarkerBeenHitThisFrame(struct FName& SyncGroup, struct FName& MarkerName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetTimeToClosestMarker (Underlying native function: GetTimeToClosestMarker 0x9c5db50)
	bool GetTimeToClosestMarker(struct FName& SyncGroup, struct FName& MarkerName, float& OutMarkerTime); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetSyncGroupPosition (Underlying native function: GetSyncGroupPosition 0x9c5da6c)
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(struct FName& InSyncGroupName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction (Underlying native function: GetRelevantAnimTimeRemainingFraction 0x9c5d808)
	float GetRelevantAnimTimeRemainingFraction(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetRelevantAnimTimeRemaining (Underlying native function: GetRelevantAnimTimeRemaining 0x9c5d674)
	float GetRelevantAnimTimeRemaining(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetRelevantAnimTimeFraction (Underlying native function: GetRelevantAnimTimeFraction 0x9c5d5b0)
	float GetRelevantAnimTimeFraction(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetRelevantAnimTime (Underlying native function: GetRelevantAnimTime 0x9c5d444)
	float GetRelevantAnimTime(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetRelevantAnimLength (Underlying native function: GetRelevantAnimLength 0x9c5d2f0)
	float GetRelevantAnimLength(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetReceiveNotifiesFromLinkedInstances (Underlying native function: GetReceiveNotifiesFromLinkedInstances 0x9c5d2d4)
	bool GetReceiveNotifiesFromLinkedInstances(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetPropagateNotifiesToLinkedInstances (Underlying native function: GetPropagateNotifiesToLinkedInstances 0x9c5d2b8)
	bool GetPropagateNotifiesToLinkedInstances(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetOwningComponent (Underlying native function: GetOwningComponent 0x2d85a08)
	class USkeletalMeshComponent* GetOwningComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetOwningActor (Underlying native function: GetOwningActor 0x2ab4db8)
	class AActor* GetOwningActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstancesByGroup (Underlying native function: GetLinkedAnimLayerInstancesByGroup 0x9c5d0f0)
	void GetLinkedAnimLayerInstancesByGroup(struct FName& InGroup, struct TArray<class UAnimInstance*>& OutLinkedInstances); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroupAndClass (Underlying native function: GetLinkedAnimLayerInstanceByGroupAndClass 0x9c5d02c)
	class UAnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(struct FName& InGroup, class UClass*& InClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup (Underlying native function: GetLinkedAnimLayerInstanceByGroup 0x9c5cfa0)
	class UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName& InGroup); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass (Underlying native function: GetLinkedAnimLayerInstanceByClass 0x9c5cf10)
	class UAnimInstance* GetLinkedAnimLayerInstanceByClass(class UClass*& InClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag (Underlying native function: GetLinkedAnimGraphInstancesByTag 0x9c5cd70)
	void GetLinkedAnimGraphInstancesByTag(struct FName& InTag, struct TArray<class UAnimInstance*>& OutLinkedInstances); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag (Underlying native function: GetLinkedAnimGraphInstanceByTag 0x9c5cce4)
	class UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName& InTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction (Underlying native function: GetInstanceTransitionTimeElapsedFraction 0x9c5cb90)
	float GetInstanceTransitionTimeElapsedFraction(int& MachineIndex, int& TransitionIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceTransitionTimeElapsed (Underlying native function: GetInstanceTransitionTimeElapsed 0x9c5cacc)
	float GetInstanceTransitionTimeElapsed(int& MachineIndex, int& TransitionIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration (Underlying native function: GetInstanceTransitionCrossfadeDuration 0x9c5c954)
	float GetInstanceTransitionCrossfadeDuration(int& MachineIndex, int& TransitionIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceStateWeight (Underlying native function: GetInstanceStateWeight 0x9c5c7c0)
	float GetInstanceStateWeight(int& MachineIndex, int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceMachineWeight (Underlying native function: GetInstanceMachineWeight 0x9c5c670)
	float GetInstanceMachineWeight(int& MachineIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceCurrentStateElapsedTime (Underlying native function: GetInstanceCurrentStateElapsedTime 0x9c5c550)
	float GetInstanceCurrentStateElapsedTime(int& MachineIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction (Underlying native function: GetInstanceAssetPlayerTimeFromEndFraction 0x9c5c440)
	float GetInstanceAssetPlayerTimeFromEndFraction(int& AssetPlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd (Underlying native function: GetInstanceAssetPlayerTimeFromEnd 0x9c5c330)
	float GetInstanceAssetPlayerTimeFromEnd(int& AssetPlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction (Underlying native function: GetInstanceAssetPlayerTimeFraction 0x9c5c220)
	float GetInstanceAssetPlayerTimeFraction(int& AssetPlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerTime (Underlying native function: GetInstanceAssetPlayerTime 0x9c5c110)
	float GetInstanceAssetPlayerTime(int& AssetPlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetInstanceAssetPlayerLength (Underlying native function: GetInstanceAssetPlayerLength 0x9c5c000)
	float GetInstanceAssetPlayerLength(int& AssetPlayerIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetDeltaSeconds (Underlying native function: GetDeltaSeconds 0x9c5bf70)
	float GetDeltaSeconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetCurveValueWithDefault (Underlying native function: GetCurveValueWithDefault 0x9c5be68)
	bool GetCurveValueWithDefault(struct FName& CurveName, float& DefaultValue, float& OutValue); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetCurveValue (Underlying native function: GetCurveValue 0xef52d4)
	float GetCurveValue(struct FName& CurveName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetCurrentStateName (Underlying native function: GetCurrentStateName 0x9c5bde4)
	struct FName GetCurrentStateName(int& MachineIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AnimInstance.GetCurrentActiveMontage (Underlying native function: GetCurrentActiveMontage 0x9c5bdc0)
	class UAnimMontage* GetCurrentActiveMontage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetAllCurveNames (Underlying native function: GetAllCurveNames 0x9c5b7fc)
	void GetAllCurveNames(struct TArray<struct FName>& OutNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.GetActiveCurveNames (Underlying native function: GetActiveCurveNames 0x9c5b718)
	void GetActiveCurveNames(enum EAnimCurveType& CurveType, struct TArray<struct FName>& OutNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.ClearTransitionEvents (Underlying native function: ClearTransitionEvents 0x9c5b3c0)
	void ClearTransitionEvents(struct FName& EventName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.ClearMorphTargets (Underlying native function: ClearMorphTargets 0x9c5b3ac)
	void ClearMorphTargets(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.ClearAllTransitionEvents (Underlying native function: ClearAllTransitionEvents 0x9c5b2f4)
	void ClearAllTransitionEvents(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AnimInstance.CalculateDirection (Underlying native function: CalculateDirection 0x9c5b214)
	float CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimInstance.BlueprintUpdateAnimation (Has no native function)
	void BlueprintUpdateAnimation(float& DeltaTimeX); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.AnimInstance.BlueprintThreadSafeUpdateAnimation (Has no native function)
	void BlueprintThreadSafeUpdateAnimation(float& DeltaTime); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.AnimInstance.BlueprintPostEvaluateAnimation (Has no native function)
	void BlueprintPostEvaluateAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.AnimInstance.BlueprintLinkedAnimationLayersInitialized (Has no native function)
	void BlueprintLinkedAnimationLayersInitialized(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.AnimInstance.BlueprintInitializeAnimation (Has no native function)
	void BlueprintInitializeAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.AnimInstance.BlueprintBeginPlay (Has no native function)
	void BlueprintBeginPlay(); // (Event | Public | BlueprintEvent)
};

