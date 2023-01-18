// Class /Script/CommonUI.CommonBoundActionBar
// Size: 0x238
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
	class UClass* ActionButtonClass; // 0x228 (0x8)
	bool bDisplayOwningPlayerActionsOnly; // 0x230 (0x1)
	bool bIgnoreDuplicateActions; // 0x231 (0x1)
	unsigned char padding_232[0x6]; // 0x232 (0x6)

	/* Functions */

	// Function /Script/CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly (Underlying native function: SetDisplayOwningPlayerActionsOnly 0x2915da0)
	void SetDisplayOwningPlayerActionsOnly(bool& bShouldOnlyDisplayOwningPlayerActions); // (Final | Native | Public | BlueprintCallable)
};

