// Class /Script/FortniteUI.FortSubscriptionCancellationModal
// Size: 0x3f8
class UFortSubscriptionCancellationModal : public UFortSubscriptionPlatformModal
{
	class UCommonButtonLegacy* ButtonCancelSubscription; // 0x3d8 (0x8)
	unsigned char padding_3e0[0x18]; // 0x3e0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortSubscriptionCancellationModal.UpdateCancelDisplay (Has no native function)
	void UpdateCancelDisplay(bool& bCanCancelDirectly); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSubscriptionCancellationModal.ShowSpinner (Has no native function)
	void ShowSpinner(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSubscriptionCancellationModal.SetErrorStateBulletPoints (Has no native function)
	void SetErrorStateBulletPoints(struct TArray<struct FText>& BulletPointTexts); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortSubscriptionCancellationModal.OnModalCancellationBackout (Has no native function)
	void OnModalCancellationBackout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSubscriptionCancellationModal.HideSpinner (Has no native function)
	void HideSpinner(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSubscriptionCancellationModal.GetSubscriptionCancellabillity (Underlying native function: GetSubscriptionCancellabillity 0xa9179ac)
	enum ESubscriptionCancellability GetSubscriptionCancellabillity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSubscriptionCancellationModal.ClearErrorStateBulletPoints (Has no native function)
	void ClearErrorStateBulletPoints(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSubscriptionCancellationModal.ClearDynamicBulletPoints (Has no native function)
	void ClearDynamicBulletPoints(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSubscriptionCancellationModal.AddDynamicBulletPoints (Has no native function)
	void AddDynamicBulletPoints(struct TArray<struct FText>& BulletPointTexts); // (Event | Protected | HasOutParms | BlueprintEvent)
};

