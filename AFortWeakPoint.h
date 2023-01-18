// Class /Script/FortniteGame.FortWeakPoint
// Size: 0xa08
class AFortWeakPoint : public ABuildingGameplayActor
{
	struct FMulticastInlineDelegate OnWeakPointStateChangedDelegate; // 0x9d8 (0x10)
	class UFortWeakPointsCoordinatorComponent* CachedWeakPointCoordinator; // 0x9e8 (0x8)
	enum EFortWeakPointState WeakPointState; // 0x9f0 (0x1)
	unsigned char unreflected_9f1[0x3]; // 0x9f1 (0x3) 
	struct FName WeakPointAttachmentSocketName; // 0x9f4 (0x4)
	bool bShouldDisplayHealthBarWhenActive; // 0x9f8 (0x1)
	bool bShouldRegisterForAimAssist; // 0x9f9 (0x1)
	unsigned char padding_9fa[0xe]; // 0x9fa (0xe)

	/* Functions */

	// Function /Script/FortniteGame.FortWeakPoint.OnWeakPointStateChanged (Has no native function)
	void OnWeakPointStateChanged(enum EFortWeakPointState& CurrentState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeakPoint.OnRep_WeakPointState (Underlying native function: OnRep_WeakPointState 0x900f7fc)
	void OnRepWeakPointState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeakPoint.GetWeakPointState (Underlying native function: GetWeakPointState 0x900dec4)
	enum EFortWeakPointState GetWeakPointState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeakPoint.GetWeakPointAttachmentSocketName (Underlying native function: GetWeakPointAttachmentSocketName 0x900deac)
	struct FName GetWeakPointAttachmentSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeakPoint.GetAimAssistTargetComponent (Underlying native function: GetAimAssistTargetComponent 0x8265400)
	class UShapeComponent* GetAimAssistTargetComponent(); // (Native | Event | Protected | BlueprintEvent)
};

