// Class /Script/FortniteUI.AthenaProfileStatBox
// Size: 0x1c0
class UAthenaProfileStatBox : public USizeBox
{
	struct FMulticastInlineDelegate OnStatViewChanged; // 0x198 (0x10)
	bool bRespectParentStatView; // 0x1a8 (0x1)
	unsigned char unreflected_1a9[0x7]; // 0x1a9 (0x7) 
	class UAthenaBaseStatView* StatView; // 0x1b0 (0x8)
	unsigned char padding_1b8[0x8]; // 0x1b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaProfileStatBox.SetStatView (Underlying native function: SetStatView 0xa5bdbd8)
	void SetStatView(class UAthenaBaseStatView*& InStatView, bool& RespectParentStatView); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.AthenaProfileStatBox.OnStatViewChanged__DelegateSignature (Has no native function)
	void OnStatViewChangedDelegateSignature(class UAthenaBaseStatView*& StatView); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaProfileStatBox.GetStatStyle (Underlying native function: GetStatStyle 0xa5b95b8)
	struct FFortUIStatStyle GetStatStyle(struct FGameplayTag& InStat); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaProfileStatBox.GetBaseStatView (Underlying native function: GetBaseStatView 0x845e0e4)
	class UAthenaBaseStatView* GetBaseStatView(); // (Final | Native | Public | BlueprintCallable)
};

