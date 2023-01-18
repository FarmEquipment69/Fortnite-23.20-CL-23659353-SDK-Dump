// ScriptStruct /Script/FortniteGame.CurieToggleComponentGroup
// Size: 0x40
struct FCurieToggleComponentGroup
{
	struct TArray<class UFortCurieToggleComponent*> GroupComponents; // 0x0 (0x10)
	struct FMulticastInlineDelegate OnToggleGroupFullyActive; // 0x10 (0x10)
	struct FMulticastInlineDelegate OnToggleGroupFullyInactive; // 0x20 (0x10)
	struct FMulticastInlineDelegate OnToggleGroupMemberStateChange; // 0x30 (0x10)
};

