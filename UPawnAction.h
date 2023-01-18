// Class /Script/AIModule.PawnAction
// Size: 0x90
class UPawnAction : public UObject
{
	class UPawnAction* ChildAction; // 0x28 (0x8)
	class UPawnAction* ParentAction; // 0x30 (0x8)
	class UPawnActionsComponent* OwnerComponent; // 0x38 (0x8)
	class UObject* Instigator; // 0x40 (0x8)
	class UBrainComponent* BrainComp; // 0x48 (0x8)
	unsigned char unreflected_50[0x30]; // 0x50 (0x30) 
	unsigned char bAllowNewSameClassInstance; // 0x80 (0x1)
	unsigned char bReplaceActiveSameClassInstance; // 0x80 (0x1)
	unsigned char bShouldPauseMovement; // 0x80 (0x1)
	unsigned char bAlwaysNotifyOnFinished; // 0x80 (0x1)
	unsigned char padding_81[0xf]; // 0x81 (0xf)

	/* Functions */

	// Function /Script/AIModule.PawnAction.GetActionPriority (Underlying native function: GetActionPriority 0x751b634)
	struct TEnumAsByte<EAIRequestPriority> GetActionPriority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.PawnAction.Finish (Underlying native function: Finish 0xa17dfe8)
	void Finish(struct TEnumAsByte<EPawnActionResult>& WithResult); // (Native | Protected | BlueprintCallable)

	// Function /Script/AIModule.PawnAction.CreateActionInstance (Underlying native function: CreateActionInstance 0xa17ded8)
	static class UPawnAction* CreateActionInstance(class UObject*& WorldContextObject, class UClass*& ActionClass); // (Final | Native | Static | Public | BlueprintCallable)
};

