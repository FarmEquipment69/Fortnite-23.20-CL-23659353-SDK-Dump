// Class /Script/BattlePassBase.FortBattlePassDynamicIcon
// Size: 0x2c0
class UFortBattlePassDynamicIcon : public UUserWidget
{
	struct TWeakObjectPtr<class UObject> BattlePassDefaultIcon; // 0x268 (0x28)
	struct TWeakObjectPtr<class UObject> BattlePassOwnedIcon; // 0x290 (0x28)
	class UFortLazyImage* LazyImageBattlePassIcon; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassDynamicIcon.OnBattlePassInfoUpdated (Has no native function)
	void OnBattlePassInfoUpdated(bool& bOwnsBattlePass); // (Event | Protected | BlueprintEvent | Const)
};

