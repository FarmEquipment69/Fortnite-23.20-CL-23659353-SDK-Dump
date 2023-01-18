// Class /Script/FortniteUI.StoreToastRequest
// Size: 0xf0
class UStoreToastRequest : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	class UCatalogMessaging* CatalogMessaging; // 0x38 (0x8)
	unsigned char padding_40[0xb0]; // 0x40 (0xb0)

	/* Functions */

	// Function /Script/FortniteUI.StoreToastRequest.SkipRequest (Underlying native function: SkipRequest 0x28b2a48)
	void SkipRequest(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.StoreToastRequest.ShouldBeginRequest (Underlying native function: ShouldBeginRequest 0x1627e28)
	bool ShouldBeginRequest(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.StoreToastRequest.IsRequestReady (Underlying native function: IsRequestReady 0x2ab4d90)
	bool IsRequestReady(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.StoreToastRequest.GetToast (Underlying native function: GetToast 0xa5093f8)
	struct FStoreCallout GetToast(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.StoreToastRequest.CompleteRequest (Underlying native function: CompleteRequest 0x14f9024)
	void CompleteRequest(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.StoreToastRequest.BeginRequest (Underlying native function: BeginRequest 0xfb0c9c)
	void BeginRequest(); // (Native | Public | BlueprintCallable)
};

