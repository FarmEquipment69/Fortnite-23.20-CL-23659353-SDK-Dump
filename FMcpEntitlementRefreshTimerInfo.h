// ScriptStruct /Script/GameSubCatalog.McpEntitlementRefreshTimerInfo
// Size: 0x18
struct FMcpEntitlementRefreshTimerInfo
{
	struct FDateTime* NextEntitlementRefresh; // 0x0 (0x8)
	struct FDateTime* MustRefreshAuthBy; // 0x8 (0x8)
	struct FDateTime* LastAuthRefresh; // 0x10 (0x8)
};

