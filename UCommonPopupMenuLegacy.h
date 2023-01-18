// Class /Script/CommonUILegacy.CommonPopupMenuLegacy
// Size: 0x4f8
class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy
{
	bool bUseInputStack; // 0x4e0 (0x1)
	unsigned char unreflected_4e1[0x3]; // 0x4e1 (0x3) 
	struct TWeakObjectPtr<class UMenuAnchor> OwningMenuAnchor; // 0x4e4 (0x8)
	struct TWeakObjectPtr<class UObject> ContextProvidingObject; // 0x4ec (0x8)
	unsigned char padding_4f4[0x4]; // 0x4f4 (0x4)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor (Underlying native function: SetOwningMenuAnchor 0x7183254)
	void SetOwningMenuAnchor(class UMenuAnchor*& MenuAnchor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider (Underlying native function: SetContextProvider 0x7182d3c)
	void SetContextProvider(class UObject*& ContextProvidingObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.RequestClose (Underlying native function: RequestClose 0x71826ec)
	void RequestClose(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged (Underlying native function: OnIsOpenChanged 0x7182394)
	void OnIsOpenChanged(bool& IsOpen); // (Final | Native | Protected)

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePreDifferentContextProviderSet (Underlying native function: HandlePreDifferentContextProviderSet 0x7181fc0)
	void HandlePreDifferentContextProviderSet(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePostDifferentContextProviderSet (Underlying native function: HandlePostDifferentContextProviderSet 0x7181fa8)
	void HandlePostDifferentContextProviderSet(); // (Native | Event | Protected | BlueprintEvent)
};

