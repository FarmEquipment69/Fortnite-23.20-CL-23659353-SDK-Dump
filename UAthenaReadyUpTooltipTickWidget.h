// Class /Script/FortniteUI.AthenaReadyUpTooltipTickWidget
// Size: 0x2b0
class UAthenaReadyUpTooltipTickWidget : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FMulticastInlineDelegate OnReadinessChangedDelegate; // 0x298 (0x10)
	class UFortPartyMember* CachedPartyMember; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaReadyUpTooltipTickWidget.OnSetPartyMember (Has no native function)
	void OnSetPartyMember(class UFortPartyMember*& NewPartyMember); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.AthenaReadyUpTooltipTickWidget.OnReadinessChanged__DelegateSignature (Has no native function)
	void OnReadinessChangedDelegateSignature(bool& bIsReadied); // (MulticastDelegate | Public | Delegate)
};

