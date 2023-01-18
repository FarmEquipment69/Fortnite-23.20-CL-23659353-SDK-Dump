// Class /Script/FortniteUI.AthenaReplayBrowserScreenBase
// Size: 0x5a8
class UAthenaReplayBrowserScreenBase : public UFortActivatablePanel
{
	class UClass* ViewStreamingReplayModalClass; // 0x518 (0x8)
	struct FDataTableRowHandle RefreshActionRowHandle; // 0x520 (0x10)
	struct FDataTableRowHandle BackActionRowHandle; // 0x530 (0x10)
	struct FDataTableRowHandle ViewStreamingReplayActionRowHandle; // 0x540 (0x10)
	class UCommonListView* ListViewReplay; // 0x550 (0x8)
	class UFortReplayBrowserRenameDialog* RenameDialog; // 0x558 (0x8)
	class UCommonButtonBase* ButtonOpenReplayFolder; // 0x560 (0x8)
	class UCommonButtonBase* ButtonPlayReplay; // 0x568 (0x8)
	class UCommonButtonBase* ButtonDeleteReplay; // 0x570 (0x8)
	class UCommonButtonBase* ButtonRenameReplay; // 0x578 (0x8)
	struct TArray<class UAthenaReplayBrowserRowProxyInstance*> RowProxies; // 0x580 (0x10)
	unsigned char padding_590[0x18]; // 0x590 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaReplayBrowserScreenBase.OnActionStateChanged (Has no native function)
	void OnActionStateChanged(bool& bHasAction); // (Event | Protected | BlueprintEvent)
};

