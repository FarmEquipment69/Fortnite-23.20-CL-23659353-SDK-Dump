// BlueprintGeneratedClass /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C
// Size: 0x30
class UAnimNotifyState_SyncPettingCreature_C : public UAnimNotifyState
{

	/* Functions */

	// Function /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C.GetRiderPettingMontage (Has no native function)
	void GetRiderPettingMontage(class AActor*& RiderActor, class UAnimMontage*& RiderPettingMontage, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class URiderComponent*& CallFuncGetComponentByClassReturnValue, struct TEnumAsByte<EFortCustomGender>& CallFuncGetCharacterGenderReturnValue, bool& CallFuncIsValidReturnValue, bool& K2NodeSwitchEnumCmpSuccess, struct FRidingPettingData& CallFuncGetPettingDataReturnValue, struct FRidingPettingData& CallFuncGetPettingDataReturnValue1, bool& CallFuncIsValidReturnValue1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C.Received_NotifyEnd (Has no native function)
	bool ReceivedNotifyEnd(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /RidingContent/Animation/Notifies/AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C.Received_NotifyBegin (Has no native function)
	bool ReceivedNotifyBegin(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, float& TotalDuration, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)
};

