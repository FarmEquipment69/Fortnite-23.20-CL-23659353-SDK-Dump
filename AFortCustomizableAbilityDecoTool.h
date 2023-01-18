// Class /Script/FortniteGame.FortCustomizableAbilityDecoTool
// Size: 0x10e0
class AFortCustomizableAbilityDecoTool : public AFortAbilityDecoTool
{
	bool bExecuteToolAbilityOnPress; // 0x10d8 (0x1)
	unsigned char padding_10d9[0x7]; // 0x10d9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.ServerReleaseTrigger (Underlying native function: ServerReleaseTrigger 0x9041530)
	void ServerReleaseTrigger(); // (BlueprintCosmetic | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.ServerReleaseSecondaryFire (Underlying native function: ServerReleaseSecondaryFire 0x90414e4)
	void ServerReleaseSecondaryFire(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.ServerPressTrigger (Underlying native function: ServerPressTrigger 0x9041498)
	void ServerPressTrigger(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.ServerPressSecondaryFire (Underlying native function: ServerPressSecondaryFire 0x904144c)
	void ServerPressSecondaryFire(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.ExecuteDecoAbility (Underlying native function: ExecuteDecoAbility 0x903eff0)
	void ExecuteDecoAbility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPServerReleaseSecondaryFire (Underlying native function: BPServerReleaseSecondaryFire 0x903eaec)
	void BPServerReleaseSecondaryFire(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPServerPressSecondaryFire (Underlying native function: BPServerPressSecondaryFire 0x903eaa4)
	void BPServerPressSecondaryFire(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPReleaseTrigger (Underlying native function: BPReleaseTrigger 0x903ea20)
	void BPReleaseTrigger(class AFortDecoHelper*& FortDecoHelper); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPReleaseSecondaryFire (Underlying native function: BPReleaseSecondaryFire 0x903e99c)
	void BPReleaseSecondaryFire(class AFortDecoHelper*& FortDecoHelper); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPPressTrigger (Underlying native function: BPPressTrigger 0x903e918)
	void BPPressTrigger(class AFortDecoHelper*& FortDecoHelper); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPPressSecondaryFire (Underlying native function: BPPressSecondaryFire 0x900cfa4)
	void BPPressSecondaryFire(class AFortDecoHelper*& FortDecoHelper); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPOnUnEquip (Has no native function)
	void BPOnUnEquip(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPOnSetDecoObjectPreview (Has no native function)
	void BPOnSetDecoObjectPreview(class AFortDecoHelper*& FortDecoHelper); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCustomizableAbilityDecoTool.BPOnEquip (Has no native function)
	void BPOnEquip(class AFortWeapon*& OldWeapon); // (Event | Public | BlueprintEvent)
};

