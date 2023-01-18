// Class /Script/FortniteGame.FortScriptedAction
// Size: 0x2e0
class AFortScriptedAction : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	enum EFortScriptedActionEnvironment ActionEnvironment; // 0x290 (0x1)
	unsigned char unreflected_291[0x3]; // 0x291 (0x3) 
	struct FFortClientEventName* ClientEventTrigger; // 0x294 (0x8)
	int ActionPriority; // 0x29c (0x4)
	bool bAllowOtherActionsWhenActive; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x7]; // 0x2a1 (0x7) 
	struct FFortScriptedActionParams CachedParams; // 0x2a8 (0x30)
	bool bIsActive; // 0x2d8 (0x1)
	unsigned char padding_2d9[0x7]; // 0x2d9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortScriptedAction.GetParams (Underlying native function: GetParams 0x89b8a1c)
	void GetParams(struct FFortScriptedActionParams& Params); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortScriptedAction.Execute (Underlying native function: Execute 0x89b8728)
	void Execute(struct FFortScriptedActionParams& Params); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortScriptedAction.CompleteAction (Underlying native function: CompleteAction 0x89b867c)
	void CompleteAction(bool& bRegisterActionAgain); // (Final | 0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortScriptedAction.CanExecute (Underlying native function: CanExecute 0x89b8300)
	bool CanExecute(struct FFortScriptedActionParams& Params); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortScriptedAction.CancelAction (Underlying native function: CancelAction 0x89b8400)
	void CancelAction(bool& bRegisterActionAgain); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

