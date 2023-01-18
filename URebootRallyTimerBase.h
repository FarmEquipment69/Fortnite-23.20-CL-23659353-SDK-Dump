// Class /Script/FortniteUI.RebootRallyTimerBase
// Size: 0x2a8
class URebootRallyTimerBase : public UUserWidget
{
	struct TWeakObjectPtr<class URebootRallyQuestDataAsset> RebootRallyQuestDataPtr; // 0x268 (0x28)
	struct FText RemainingTimeForRebootRallyEnd; // 0x290 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.RebootRallyTimerBase.UpdateRemainingTime (Has no native function)
	void UpdateRemainingTime(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.RebootRallyTimerBase.GetRemainingTimeForRebootRallyEnd (Underlying native function: GetRemainingTimeForRebootRallyEnd 0xa775518)
	struct FText GetRemainingTimeForRebootRallyEnd(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

