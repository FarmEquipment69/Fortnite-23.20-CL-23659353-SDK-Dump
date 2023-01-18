// Class /Script/FortniteUI.FortSubscriptionPlatformModal
// Size: 0x3d8
class UFortSubscriptionPlatformModal : public UCommonActivatableWidget
{
	class UCommonButtonLegacy* ButtonBack; // 0x3a8 (0x8)
	class UCommonButtonLegacy* ButtonCloseMobile; // 0x3b0 (0x8)
	struct FString ModalId; // 0x3b8 (0x10)
	unsigned char padding_3c8[0x10]; // 0x3c8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortSubscriptionPlatformModal.SetPlatformSpecificQRCode (Has no native function)
	void SetPlatformSpecificQRCode(struct FString& QRCodeAssetURL); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSubscriptionPlatformModal.SetPlatformSpecificEntries (Has no native function)
	void SetPlatformSpecificEntries(struct TArray<struct FText>& Entries); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortSubscriptionPlatformModal.SendSubscriptionAnalyticsEvent (Underlying native function: SendSubscriptionAnalyticsEvent 0xa91a3c8)
	void SendSubscriptionAnalyticsEvent(struct FString& Interaction); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSubscriptionPlatformModal.OnModalBackout (Has no native function)
	void OnModalBackout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSubscriptionPlatformModal.IsOnActiveSubscriptionPlatform (Underlying native function: IsOnActiveSubscriptionPlatform 0xa918e2c)
	bool IsOnActiveSubscriptionPlatform(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSubscriptionPlatformModal.GetSubscriptionNextBillingDateAsText (Underlying native function: GetSubscriptionNextBillingDateAsText 0xa9179d0)
	struct FText GetSubscriptionNextBillingDateAsText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSubscriptionPlatformModal.ExitModal (Underlying native function: ExitModal 0x1d01d9c)
	void ExitModal(); // (Native | Protected | BlueprintCallable)
};

